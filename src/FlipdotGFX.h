#include <Adafruit_GFX.h>
#include <Stream.h>

#define COLS 96
#define ROWS 16





class Buffer_96_16 {
  public:
    Buffer_96_16();
    explicit Buffer_96_16(Stream &port);
    void set(uint8_t x, uint8_t y, uint16_t color);
    boolean get(uint8_t x, uint8_t y);
    void clear();
    void dump(Stream &console);
    void display();

  protected:
    void byte_to_ascii(char *out, byte in);

  private:
    uint16_t buffer[96];
    Stream *port;
    const int address = 1;
  
};



class Flipdot_96_16 : public Adafruit_GFX {
  public:
    Flipdot_96_16();
    explicit Flipdot_96_16(Stream &port);
    ~Flipdot_96_16();
    virtual void drawPixel(int16_t x, int16_t y, uint16_t colour) override;
    void clear();
    void dump(Stream &port);
    void display();

  private:
    Buffer_96_16 *buffer;

};




