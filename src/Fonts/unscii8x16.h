
#pragma once
#include <Adafruit_GFX.h>

const uint8_t unscii8x16Bitmaps[] PROGMEM = {
    /* 0x20   */  
    /* 0x21 ! */  0xFF,0xFF,0x0F,
    /* 0x22 " */  0xCF,0x3C,0xC0,
    /* 0x23 # */  0x6C,0xD9,0xB7,0xF6,0xCD,0x9B,0x7F,0x6C,0xD9,0xB0,
    /* 0x24 $ */  0x30,0xC7,0xB3,0xC1,0x83,0x06,0x0F,0x37,0x8C,0x30,
    /* 0x25 % */  0x07,0x8F,0x36,0x61,0x83,0x0C,0x18,0x66,0xCF,0x1E,0x00,
    /* 0x26 & */  0x38,0xD9,0xB1,0xC3,0x0F,0x77,0xE6,0xCD,0x99,0xD8,
    /* 0x27 ' */  0x6D,0xE0,
    /* 0x28 ( */  0x36,0x6C,0xCC,0xCC,0xCC,0x66,0x30,
    /* 0x29 ) */  0xC6,0x63,0x33,0x33,0x33,0x66,0xC0,
    /* 0x2A * */  0x66,0x66,0x3C,0xFF,0x3C,0x66,0x66,
    /* 0x2B + */  0x30,0xC3,0x3F,0x30,0xC3,0x00,
    /* 0x2C , */  0x73,0x36,0xC0,
    /* 0x2D - */  0xFC,
    /* 0x2E . */  0xFC,
    /* 0x2F / */  0x08,0x44,0x23,0x18,0x84,0x42,0x31,0x88,0x40,
    /* 0x30 0 */  0x38,0xDB,0x1E,0x3C,0x78,0xF1,0xE3,0xC6,0xD8,0xE0,
    /* 0x31 1 */  0x31,0xCF,0x0C,0x30,0xC3,0x0C,0x30,0xCF,0xC0,
    /* 0x32 2 */  0x7B,0x3C,0xC3,0x0C,0x63,0x18,0xC3,0x0F,0xC0,
    /* 0x33 3 */  0x7B,0x3C,0xC3,0x0C,0xE0,0xC3,0xCF,0x37,0x80,
    /* 0x34 4 */  0x0C,0x38,0xF3,0x6C,0xD9,0xBF,0x86,0x0C,0x18,0x30,
    /* 0x35 5 */  0xFF,0x0C,0x30,0xF8,0x30,0xC3,0xCF,0x37,0x80,
    /* 0x36 6 */  0x39,0x8C,0x30,0xFB,0x3C,0xF3,0xCF,0x37,0x80,
    /* 0x37 7 */  0xFC,0x30,0xC3,0x18,0x63,0x0C,0x30,0xC3,0x00,
    /* 0x38 8 */  0x7B,0x3C,0xF3,0xED,0xED,0xF3,0xCF,0x37,0x80,
    /* 0x39 9 */  0x7B,0x3C,0xF3,0xCD,0xF0,0xC3,0x0C,0x67,0x00,
    /* 0x3A : */  0xF0,0x0F,
    /* 0x3B ; */  0x33,0x30,0x00,0x07,0x33,0x6C,
    /* 0x3C < */  0x0C,0x63,0x18,0xC1,0x83,0x06,0x0C,
    /* 0x3D = */  0xFC,0x00,0x00,0xFC,
    /* 0x3E > */  0xC1,0x83,0x06,0x0C,0x63,0x18,0xC0,
    /* 0x3F ? */  0x7B,0x3C,0xC3,0x18,0xC3,0x0C,0x00,0x03,0x0C,
    /* 0x40 @ */  0x7D,0x8F,0x1E,0x3D,0xFB,0xF7,0xEE,0xC1,0x81,0xF0,
    /* 0x41 A */  0x31,0xEC,0xF3,0xCF,0xFC,0xF3,0xCF,0x3C,0xC0,
    /* 0x42 B */  0xFB,0x3C,0xF3,0xDB,0xCD,0xB3,0xCF,0x3F,0x80,
    /* 0x43 C */  0x7B,0x3C,0xF0,0xC3,0x0C,0x30,0xCF,0x37,0x80,
    /* 0x44 D */  0xF3,0x6C,0xF3,0xCF,0x3C,0xF3,0xCF,0x6F,0x00,
    /* 0x45 E */  0xFF,0x0C,0x30,0xC3,0xEC,0x30,0xC3,0x0F,0xC0,
    /* 0x46 F */  0xFF,0x0C,0x30,0xFB,0x0C,0x30,0xC3,0x0C,0x00,
    /* 0x47 G */  0x7B,0x3C,0xF0,0xC3,0x7C,0xF3,0xCF,0x37,0xC0,
    /* 0x48 H */  0xCF,0x3C,0xF3,0xCF,0xFC,0xF3,0xCF,0x3C,0xC0,
    /* 0x49 I */  0xFC,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xCF,0xC0,
    /* 0x4A J */  0x0C,0x30,0xC3,0x0C,0x30,0xC3,0xCF,0x37,0x80,
    /* 0x4B K */  0xC7,0x8F,0x36,0x6D,0x9E,0x36,0x66,0xCD,0x8F,0x18,
    /* 0x4C L */  0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0F,0xC0,
    /* 0x4D M */  0xC7,0xDF,0xBF,0xFD,0x7A,0xF1,0xE3,0xC7,0x8F,0x18,
    /* 0x4E N */  0xC7,0x8F,0x9F,0x3F,0x7F,0xF7,0xE7,0xCF,0x8F,0x18,
    /* 0x4F O */  0x7B,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x37,0x80,
    /* 0x50 P */  0xFB,0x3C,0xF3,0xCF,0xEC,0x30,0xC3,0x0C,0x00,
    /* 0x51 Q */  0x7B,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x37,0x86,0x0C,
    /* 0x52 R */  0xFB,0x3C,0xF3,0xCF,0xED,0xB3,0xCF,0x3C,0xC0,
    /* 0x53 S */  0x7B,0x3C,0xF0,0x60,0xC1,0x83,0xCF,0x37,0x80,
    /* 0x54 T */  0xFC,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x00,
    /* 0x55 U */  0xCF,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x37,0x80,
    /* 0x56 V */  0xCF,0x3C,0xF3,0xCF,0x3C,0xDE,0x78,0xC3,0x00,
    /* 0x57 W */  0xC7,0x8F,0x1E,0x3C,0x7A,0xF5,0xFF,0xEF,0xDF,0x18,
    /* 0x58 X */  0xC3,0xC3,0x66,0x3C,0x18,0x18,0x18,0x3C,0x66,0xC3,0xC3,
    /* 0x59 Y */  0xC3,0xC3,0x66,0x66,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,
    /* 0x5A Z */  0xFC,0x30,0xC6,0x18,0xC6,0x18,0xC3,0x0F,0xC0,
    /* 0x5B [ */  0xFC,0xCC,0xCC,0xCC,0xCC,0xCC,0xF0,
    /* 0x5C \ */  0xC0,0xC0,0x60,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,0x06,0x03,0x03,
    /* 0x5D ] */  0xF3,0x33,0x33,0x33,0x33,0x33,0xF0,
    /* 0x5E ^ */  0x10,0x71,0xB3,0x6C,0x78,0xC0,
    /* 0x5F _ */  0xFF,
    /* 0x60 ` */  0xCC,0x63,
    /* 0x61 a */  0x78,0x37,0xF3,0xCF,0x37,0xC0,
    /* 0x62 b */  0xC3,0x0C,0x30,0xFB,0x3C,0xF3,0xCF,0x3F,0x80,
    /* 0x63 c */  0x7B,0x3C,0x30,0xC3,0x37,0x80,
    /* 0x64 d */  0x0C,0x30,0xC3,0x7F,0x3C,0xF3,0xCF,0x37,0xC0,
    /* 0x65 e */  0x7B,0x3C,0xFF,0xC3,0x07,0x80,
    /* 0x66 f */  0x3D,0x86,0x18,0xFD,0x86,0x18,0x61,0x86,0x00,
    /* 0x67 g */  0x7F,0x3C,0xF3,0xCF,0x37,0xC3,0x0F,0xE0,
    /* 0x68 h */  0xC3,0x0C,0x30,0xFB,0x3C,0xF3,0xCF,0x3C,0xC0,
    /* 0x69 i */  0x30,0xC0,0x00,0xF0,0xC3,0x0C,0x30,0xC3,0xC0,
    /* 0x6A j */  0x18,0xC0,0x01,0x8C,0x63,0x18,0xC6,0x31,0xF8,
    /* 0x6B k */  0xC3,0x0C,0x30,0xCF,0x3D,0xBC,0xDB,0x3C,0xC0,
    /* 0x6C l */  0xF0,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0xC0,
    /* 0x6D m */  0xCD,0xFF,0x5E,0xBD,0x7A,0xF1,0x80,
    /* 0x6E n */  0xFB,0x3C,0xF3,0xCF,0x3C,0xC0,
    /* 0x6F o */  0x7B,0x3C,0xF3,0xCF,0x37,0x80,
    /* 0x70 p */  0xFB,0x3C,0xF3,0xCF,0x3F,0xB0,0xC3,0x00,
    /* 0x71 q */  0x7F,0x3C,0xF3,0xCF,0x37,0xC3,0x0C,0x30,
    /* 0x72 r */  0xFB,0x3C,0xF0,0xC3,0x0C,0x00,
    /* 0x73 s */  0x7F,0x0C,0x1E,0x0C,0x3F,0x80,
    /* 0x74 t */  0x61,0x86,0x3F,0x61,0x86,0x18,0x60,0xF0,
    /* 0x75 u */  0xCF,0x3C,0xF3,0xCF,0x37,0xC0,
    /* 0x76 v */  0xCF,0x3C,0xF3,0xCD,0xE3,0x00,
    /* 0x77 w */  0xC7,0x8F,0x5E,0xBD,0x6F,0x9B,0x00,
    /* 0x78 x */  0xC7,0x8D,0xB1,0xC6,0xD8,0xF1,0x80,
    /* 0x79 y */  0xCF,0x3C,0xF3,0xCF,0x37,0xC3,0x0D,0xE0,
    /* 0x7A z */  0xFC,0x31,0x8C,0x63,0x0F,0xC0,
    /* 0x7B { */  0x0E,0x30,0x60,0xC1,0x83,0x3C,0x0C,0x18,0x30,0x60,0xC0,0xE0,
    /* 0x7C | */  0xFF,0xFF,0xFF,0xF0,
    /* 0x7D } */  0xE0,0x60,0xC1,0x83,0x06,0x07,0x98,0x30,0x60,0xC1,0x8E,0x00,
    /* 0x7E ~ */  0x73,0xAE,0x70,
    
    };

const GFXglyph unscii8x16Glyphs[] PROGMEM = {
    
        {0, 0, 0, 3, 0, 0}, // 0x20 ' '
    
        {0, 2, 12, 7, 2, 1}, // 0x21 '!'
    
        {3, 6, 3, 7, 0, 1}, // 0x22 '"'
    
        {6, 7, 11, 8, 0, 2}, // 0x23 '#'
    
        {16, 6, 13, 7, 0, 1}, // 0x24 '$'
    
        {26, 7, 12, 8, 0, 2}, // 0x25 '%'
    
        {37, 7, 11, 8, 0, 2}, // 0x26 '&'
    
        {47, 3, 4, 7, 1, 1}, // 0x27 '''
    
        {49, 4, 13, 7, 1, 1}, // 0x28 '('
    
        {56, 4, 13, 7, 1, 1}, // 0x29 ')'
    
        {63, 8, 7, 8, 0, 4}, // 0x2A '*'
    
        {70, 6, 7, 7, 0, 4}, // 0x2B '+'
    
        {76, 4, 5, 7, 0, 10}, // 0x2C ','
    
        {79, 6, 1, 7, 0, 7}, // 0x2D '-'
    
        {80, 2, 3, 4, 0, 10}, // 0x2E '.'
    
        {81, 5, 14, 5, 0, 0}, // 0x2F '/'
    
        {90, 7, 11, 8, 0, 2}, // 0x30 '0'
    
        {100, 6, 11, 7, 0, 2}, // 0x31 '1'
    
        {109, 6, 11, 7, 0, 2}, // 0x32 '2'
    
        {118, 6, 11, 7, 0, 2}, // 0x33 '3'
    
        {127, 7, 11, 8, 0, 2}, // 0x34 '4'
    
        {137, 6, 11, 7, 0, 2}, // 0x35 '5'
    
        {146, 6, 11, 7, 0, 2}, // 0x36 '6'
    
        {155, 6, 11, 7, 0, 2}, // 0x37 '7'
    
        {164, 6, 11, 7, 0, 2}, // 0x38 '8'
    
        {173, 6, 11, 7, 0, 2}, // 0x39 '9'
    
        {182, 2, 8, 3, 0, 4}, // 0x3A ':'
    
        {184, 4, 12, 7, 0, 3}, // 0x3B ';'
    
        {190, 6, 9, 7, 0, 3}, // 0x3C '<'
    
        {197, 6, 5, 7, 0, 5}, // 0x3D '='
    
        {201, 6, 9, 7, 0, 3}, // 0x3E '>'
    
        {208, 6, 12, 7, 0, 1}, // 0x3F '?'
    
        {217, 7, 11, 8, 0, 2}, // 0x40 '@'
    
        {227, 6, 11, 7, 0, 2}, // 0x41 'A'
    
        {236, 6, 11, 7, 0, 2}, // 0x42 'B'
    
        {245, 6, 11, 7, 0, 2}, // 0x43 'C'
    
        {254, 6, 11, 7, 0, 2}, // 0x44 'D'
    
        {263, 6, 11, 7, 0, 2}, // 0x45 'E'
    
        {272, 6, 11, 7, 0, 2}, // 0x46 'F'
    
        {281, 6, 11, 7, 0, 2}, // 0x47 'G'
    
        {290, 6, 11, 7, 0, 2}, // 0x48 'H'
    
        {299, 6, 11, 7, 0, 2}, // 0x49 'I'
    
        {308, 6, 11, 7, 0, 2}, // 0x4A 'J'
    
        {317, 7, 11, 8, 0, 2}, // 0x4B 'K'
    
        {327, 6, 11, 7, 0, 2}, // 0x4C 'L'
    
        {336, 7, 11, 8, 0, 2}, // 0x4D 'M'
    
        {346, 7, 11, 8, 0, 2}, // 0x4E 'N'
    
        {356, 6, 11, 7, 0, 2}, // 0x4F 'O'
    
        {365, 6, 11, 7, 0, 2}, // 0x50 'P'
    
        {374, 6, 13, 7, 0, 2}, // 0x51 'Q'
    
        {384, 6, 11, 7, 0, 2}, // 0x52 'R'
    
        {393, 6, 11, 7, 0, 2}, // 0x53 'S'
    
        {402, 6, 11, 7, 0, 2}, // 0x54 'T'
    
        {411, 6, 11, 7, 0, 2}, // 0x55 'U'
    
        {420, 6, 11, 7, 0, 2}, // 0x56 'V'
    
        {429, 7, 11, 8, 0, 2}, // 0x57 'W'
    
        {439, 8, 11, 8, 0, 2}, // 0x58 'X'
    
        {450, 8, 11, 8, 0, 2}, // 0x59 'Y'
    
        {461, 6, 11, 7, 0, 2}, // 0x5A 'Z'
    
        {470, 4, 13, 7, 1, 1}, // 0x5B '['
    
        {477, 8, 14, 8, 0, 0}, // 0x5C '\'
    
        {491, 4, 13, 7, 1, 1}, // 0x5D ']'
    
        {498, 7, 6, 8, 0, 1}, // 0x5E '^'
    
        {504, 8, 1, 8, 0, 15}, // 0x5F '_'
    
        {505, 4, 4, 7, 2, 1}, // 0x60 '`'
    
        {507, 6, 7, 7, 0, 6}, // 0x61 'a'
    
        {513, 6, 11, 7, 0, 2}, // 0x62 'b'
    
        {522, 6, 7, 7, 0, 6}, // 0x63 'c'
    
        {528, 6, 11, 7, 0, 2}, // 0x64 'd'
    
        {537, 6, 7, 7, 0, 6}, // 0x65 'e'
    
        {543, 6, 11, 7, 0, 2}, // 0x66 'f'
    
        {552, 6, 10, 7, 0, 6}, // 0x67 'g'
    
        {560, 6, 11, 7, 0, 2}, // 0x68 'h'
    
        {569, 6, 11, 7, 0, 2}, // 0x69 'i'
    
        {578, 5, 14, 7, 0, 2}, // 0x6A 'j'
    
        {587, 6, 11, 7, 0, 2}, // 0x6B 'k'
    
        {596, 6, 11, 7, 0, 2}, // 0x6C 'l'
    
        {605, 7, 7, 8, 0, 6}, // 0x6D 'm'
    
        {612, 6, 7, 7, 0, 6}, // 0x6E 'n'
    
        {618, 6, 7, 7, 0, 6}, // 0x6F 'o'
    
        {624, 6, 10, 7, 0, 6}, // 0x70 'p'
    
        {632, 6, 10, 7, 0, 6}, // 0x71 'q'
    
        {640, 6, 7, 7, 0, 6}, // 0x72 'r'
    
        {646, 6, 7, 7, 0, 6}, // 0x73 's'
    
        {652, 6, 10, 7, 0, 3}, // 0x74 't'
    
        {660, 6, 7, 7, 0, 6}, // 0x75 'u'
    
        {666, 6, 7, 7, 0, 6}, // 0x76 'v'
    
        {672, 7, 7, 8, 0, 6}, // 0x77 'w'
    
        {679, 7, 7, 8, 0, 6}, // 0x78 'x'
    
        {686, 6, 10, 7, 0, 6}, // 0x79 'y'
    
        {694, 6, 7, 7, 0, 6}, // 0x7A 'z'
    
        {700, 7, 13, 8, 0, 1}, // 0x7B '{'
    
        {712, 2, 14, 7, 2, 0}, // 0x7C '|'
    
        {716, 7, 13, 8, 0, 1}, // 0x7D '}'
    
        {728, 7, 3, 8, 0, 1}, // 0x7E '~'
    
};


const GFXfont unscii8x16 PROGMEM = {(uint8_t *)unscii8x16Bitmaps,
                                        (GFXglyph *)unscii8x16Glyphs, 32,
                                        126, 16};
