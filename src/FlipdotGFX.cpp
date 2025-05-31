#include "FlipdotGFX.h"

Flipdot_96_16::Flipdot_96_16(): Flipdot_96_16(Serial1) {
  ;
}

Flipdot_96_16::Flipdot_96_16(Stream &port): Adafruit_GFX(COLS, ROWS) {
  buffer = new Buffer_96_16(port);
  
}

Flipdot_96_16::~Flipdot_96_16() {
  if (buffer) {
    delete buffer;
    buffer = NULL;
  }
}

void Flipdot_96_16::drawPixel(int16_t x, int16_t y, uint16_t colour) {
  if ((x < 0) || (y < 0) || (x >= _width) || (y >= _height))
    return;

  int16_t t;
  switch (rotation) {
    case 1:
      t = x;
      x = WIDTH - 1 - y;
      y = t;
      break;
    case 2:
      x = WIDTH - 1 - x;
      y = HEIGHT - 1 - y;
      break;
    case 3:
      t = x;
      x = y;
      y = HEIGHT - 1 - t;
      break;
  }

  buffer->set(x, y, colour);
}


void Flipdot_96_16::clear() {
  buffer->clear();
};

void Flipdot_96_16::dump(Stream &console) {
  buffer->dump(console);
}

void Flipdot_96_16::display() {
  buffer->display();
}


Buffer_96_16::Buffer_96_16(): Buffer_96_16(Serial) {
  ;
}

Buffer_96_16::Buffer_96_16(Stream &port) {
  this->port = &port;
  clear();
}

void Buffer_96_16::clear() {
  for (int i = 0; i < COLS; i++) {
    buffer[i] = 0;
  }
}

void Buffer_96_16::set(uint8_t x, uint8_t y, uint16_t color) {
  if (color == 0) {
    buffer[x] &= ~(1 << y);
  } else {
    buffer[x] |= (1 << y);
  }
}

boolean Buffer_96_16::get(uint8_t x, uint8_t y) {
  return (buffer[x] & (1 << y)) != 0;
}

void Buffer_96_16::dump(Stream &console) {
  console.println();
  for(int x = 0; x < COLS+2; x++)
    console.print("-");
  console.println();

  for (int y=0; y < ROWS; y++) {
    console.print("|");
    for (int x = 0; x < COLS; x++) {
      if (get(x, y)) {
        console.print("@");
      } else {
        console.print(" ");
      }
    }
    console.println("|");
  }
  for(int x = 0; x < COLS+2; x++)
    console.print("-");
  
  console.println();
 
}

void Buffer_96_16::display(){
  char header[5] = {0x02, 0x00, 0x00, 0x00, 0x00};
  char footer[3] = {0x03, 0x00, 0x00};
  int crc = 0;
  int sum = 0;

  byte_to_ascii(header+1, 0x10 + address);
  byte_to_ascii(header+3, COLS *  ROWS / 8);

  port->write(header, 5);

  sum += header[0] + header[1] + header[2] + header[3] + header[4];

  for(int i = 0; i < COLS; i++) {
    char t[5];
    uint16_t col = buffer[i];
    sprintf(t, "%4.4X", __builtin_bswap16(col));
    port->write(t, 4);
    sum += t[0] + t[1] + t[2] + t[3];
  }

  sum++;
  sum = sum & 0xff;

  crc = (sum ^ 255) + 1;
  byte_to_ascii(footer+1, crc);
  port->write(footer, 3);
}


void Buffer_96_16::byte_to_ascii(char *out, byte in) {
  char buff[5];
  sprintf(buff, "%2.2X", in);
  out[0] = buff[0];
  out[1] = buff[1];
}
