#include "serialdisplay.h"

uint8_t getbyte(const char hex) {
    if (hex >=  'A' && hex <= 'F')
        return hex - 'A' + 10;
    else if (hex >= 'a' && hex <= 'f')
        return hex - 'a' + 10;
    else if (hex >= '0' && hex <= '9')
        return hex - '0';
    else 
        return 0;
}

void serial_display(Stream &port, const char *bitmap)
{
    uint16_t ints[96];
    // port.println(bitmap);
    for(unsigned int i = 0; i < strlen(bitmap) / 4; i++) {
        uint16_t col = 0;
        for (int j = 0; j< 4; j++) {
            col <<= 4;
            uint8_t by = getbyte(bitmap[i * 4 + ((2 + j) % 4)]);
            col += by;
            // port.printf("%c, %d (%d)  ",bitmap[i * 4 + j], by, col);
        }
        // port.println();
        ints[i] = col;
    }
    for(int j = 0; j < 98 ; j++)
        port.print("-");
    port.println();
    for(int i = 0; i < 16 ; i++) {
        port.print("|");
        for(int j = 0; j < 96 ; j++) {
            port.printf("%c", (ints[j] >> i) & 0x01 ?  '@' : ' ');
        }
        port.println("|");
    }
    for(int j = 0; j < 98 ; j++)
        port.print("-");
}
