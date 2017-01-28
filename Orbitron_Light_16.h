// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Orbitron_Light_16Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0x20, // '!'
	0x99, // '"'
	0x04,0x20,0x84,0x08,0x47,0xFF,0x10,0xC1,0x08,0x10,0x8F,0xFE,0x21,0x02,0x10,0x63,0x00, // '#'
	0x04,0x00,0x81,0xFF,0x42,0x18,0x41,0x08,0x21,0x03,0xFE,0x04,0x20,0x84,0x10,0xC2,0x17,0xFC,0x08,0x00, // '$'
	0x00,0x01,0xC0,0x28,0x81,0xA2,0x0C,0x88,0x61,0xC6,0x00,0x30,0x01,0x8E,0x0C,0x44,0xC1,0x16,0x04,0x50,0x0E, // '%'
	0x3F,0xC1,0x01,0x84,0x00,0x10,0x00,0x60,0x02,0x60,0x08,0x62,0x20,0x68,0x80,0x62,0x00,0xE7,0xFC,0x40, // '&'
	0xC0, // '''
	0x52,0x49,0x24,0x91,0x00, // '('
	0x44,0x92,0x49,0x25,0x00, // ')'
	0x10,0x23,0xF9,0xC2,0x8D,0x80,0x00, // '*'
	0x10,0x4F,0xC4,0x10,0x40, // '+'
	0xE0, // ','
	0xFC, // '-'
	0x80, // '.'
	0x00,0x01,0x01,0x02,0x04,0x08,0x18,0x30,0x20,0x40,0x80,0x00, // '/'
	0x7F,0xD0,0x0E,0x03,0xC0,0xD8,0x33,0x1C,0x66,0x0D,0x81,0xE0,0x38,0x05,0xFF,0x00, // '0'
	0x19,0xDA,0x10,0x84,0x21,0x08,0x42, // '1'
	0x7F,0xD0,0x04,0x00,0x80,0x10,0x02,0xFF,0xA0,0x04,0x00,0x80,0x10,0x03,0xFF,0x80, // '2'
	0x7F,0xC8,0x02,0x00,0x20,0x02,0x00,0x23,0xFE,0x00,0x10,0x01,0x00,0x18,0x01,0x7F,0xE0, // '3'
	0x01,0x80,0x70,0x1A,0x06,0x41,0x88,0x61,0x30,0x27,0xFF,0x00,0x80,0x10,0x02,0x00, // '4'
	0xFF,0xF0,0x02,0x00,0x40,0x08,0x01,0xFF,0x80,0x08,0x01,0x00,0x30,0x05,0xFF,0x00, // '5'
	0x7F,0x90,0x02,0x00,0x40,0x08,0x01,0xFF,0xA0,0x0C,0x01,0x80,0x30,0x05,0xFF,0x00, // '6'
	0x7F,0x80,0x10,0x04,0x01,0x00,0x40,0x10,0x04,0x01,0x00,0x40,0x10,0x04, // '7'
	0x7F,0xD0,0x06,0x00,0xC0,0x18,0x03,0xFF,0xE0,0x0C,0x01,0x80,0x30,0x05,0xFF,0x00, // '8'
	0x7F,0xE8,0x01,0x80,0x18,0x01,0x80,0x17,0xFF,0x00,0x10,0x01,0x00,0x10,0x01,0xFF,0xE0, // '9'
	0x80,0x80, // ':'
	0x81,0xC0, // ';'
	0x02,0x1C,0xE7,0x08,0x0C,0x0E,0x07,0x02, // '<'
	0xFF,0x00,0x00,0xFF, // '='
	0x81,0xC0,0xC0,0xE0,0x63,0x9C,0x60,0x80, // '>'
	0xFF,0x80,0x10,0x04,0x01,0x00,0x47,0xE2,0x00,0x80,0x00,0x00,0x02,0x00, // '?'
	0x7F,0xD0,0x06,0x00,0xC7,0x99,0x0B,0x21,0x64,0x2C,0x7F,0x80,0x10,0x01,0xFF,0x80, // '@'
	0x7F,0xD0,0x06,0x00,0xC0,0x18,0x03,0x00,0x7F,0xFC,0x01,0x80,0x30,0x06,0x00,0x80, // 'A'
	0xFF,0xD0,0x06,0x00,0xC0,0x18,0x03,0xFF,0xE0,0x0C,0x01,0x80,0x30,0x07,0xFF,0x00, // 'B'
	0x7F,0xE8,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0x7F,0xE0, // 'C'
	0xFF,0xD0,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x07,0xFF,0x00, // 'D'
	0xFF,0xD0,0x02,0x00,0x40,0x08,0x01,0xFE,0x20,0x04,0x00,0x80,0x10,0x03,0xFF,0x00, // 'E'
	0xFF,0xD0,0x02,0x00,0x40,0x08,0x01,0xFE,0x20,0x04,0x00,0x80,0x10,0x02,0x00,0x00, // 'F'
	0x7F,0xD0,0x06,0x00,0x40,0x08,0x01,0x03,0xE0,0x0C,0x01,0x80,0x30,0x05,0xFF,0x00, // 'G'
	0x80,0x18,0x01,0x80,0x18,0x01,0x80,0x1F,0xFF,0x80,0x18,0x01,0x80,0x18,0x01,0x80,0x10, // 'H'
	0xFF,0xE0, // 'I'
	0x00,0x20,0x04,0x00,0x80,0x10,0x02,0x00,0x40,0x08,0x01,0x80,0x30,0x05,0xFF,0x00, // 'J'
	0x80,0x50,0x12,0x04,0x41,0x88,0x61,0xF8,0x21,0x84,0x18,0x81,0x10,0x12,0x01,0x00, // 'K'
	0x80,0x08,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0x80,0x08,0x00,0xFF,0xE0, // 'L'
	0xC0,0x1F,0x01,0xEC,0x1B,0x31,0x98,0xD8,0xC3,0x86,0x08,0x30,0x01,0x80,0x0C,0x00,0x60,0x02, // 'M'
	0xC0,0x3C,0x06,0xC0,0xCC,0x18,0x83,0x08,0x60,0x8C,0x19,0x81,0xB0,0x1E,0x01,0x80, // 'N'
	0x7F,0xD0,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x05,0xFF,0x00, // 'O'
	0xFF,0xD0,0x06,0x00,0xC0,0x18,0x03,0x00,0x7F,0xF4,0x00,0x80,0x10,0x02,0x00,0x00, // 'P'
	0x7F,0xC4,0x01,0x20,0x09,0x00,0x48,0x02,0x40,0x12,0x00,0x90,0x04,0x80,0x24,0x01,0x1F,0xFE, // 'Q'
	0xFF,0xD0,0x06,0x00,0xC0,0x18,0x03,0x00,0x7F,0xF4,0x18,0x81,0x90,0x1A,0x01,0x80, // 'R'
	0x7F,0xD0,0x06,0x00,0x40,0x08,0x00,0xFF,0x80,0x08,0x01,0x00,0x30,0x05,0xFF,0x00, // 'S'
	0xFF,0xF0,0x40,0x04,0x00,0x40,0x04,0x00,0x40,0x04,0x00,0x40,0x04,0x00,0x40,0x04,0x00, // 'T'
	0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x05,0xFF,0x00, // 'U'
	0x40,0x02,0x60,0x06,0x30,0x0C,0x10,0x08,0x18,0x18,0x08,0x10,0x04,0x20,0x06,0x60,0x02,0x40,0x03,0xC0,0x01,0x80, // 'V'
	0x40,0xC0,0x4C,0x1C,0x18,0x82,0x82,0x10,0xD8,0x43,0x11,0x18,0x22,0x22,0x04,0xC6,0xC0,0xD0,0x58,0x0E,0x0A,0x01,0x81,0xC0,0x10,0x10,0x00, // 'W'
	0x60,0x31,0x83,0x06,0x30,0x1B,0x00,0x70,0x01,0x00,0x1C,0x01,0xB0,0x18,0xC1,0x83,0x18,0x0C, // 'X'
	0x60,0x31,0x01,0x04,0x10,0x31,0x80,0xD8,0x03,0x80,0x08,0x00,0x40,0x02,0x00,0x10,0x00,0x80, // 'Y'
	0xFF,0xF0,0x03,0x00,0x60,0x1C,0x03,0x00,0x60,0x0C,0x03,0x80,0x60,0x0C,0x00,0xFF,0xF0, // 'Z'
	0xD2,0x49,0x24,0x93,0x00, // '['
	0x00,0x80,0x80,0x40,0x20,0x10,0x18,0x0C,0x04,0x02,0x01,0x00, // '\'
	0x64,0x92,0x49,0x25,0x80, // ']'
	0x00, // '^'
	0xFF,0xF0, // '_'
	0x48, // '`'
	0xFF,0x00,0x40,0x20,0x1F,0xFC,0x06,0x03,0x01,0x7F,0x80, // 'a'
	0x80,0x40,0x20,0x1F,0xE8,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x3F,0xE0, // 'b'
	0x7F,0xA0,0x08,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x7F,0x80, // 'c'
	0x00,0x80,0x40,0x2F,0xF8,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x2F,0xF0, // 'd'
	0x7F,0x40,0x60,0x30,0x1F,0xFC,0x02,0x01,0x00,0x7F,0x80, // 'e'
	0x7A,0x08,0x3E,0x82,0x08,0x20,0x82,0x08,0x20, // 'f'
	0x7F,0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x7F,0x80,0x40,0x20,0x17,0xF0, // 'g'
	0x80,0x40,0x20,0x1F,0xE8,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x10, // 'h'
	0x9F,0xF0, // 'i'
	0x04,0x00,0x01,0x04,0x10,0x41,0x04,0x10,0x41,0x04,0x10,0x7E, // 'j'
	0x80,0x40,0x20,0x10,0x28,0x34,0x32,0x31,0xF0,0x8C,0x43,0x20,0xD0,0x20, // 'k'
	0x88,0x88,0x88,0x88,0x88,0x86, // 'l'
	0xFF,0xFD,0x02,0x06,0x04,0x0C,0x08,0x18,0x10,0x30,0x20,0x60,0x40,0xC0,0x81,0x81,0x02, // 'm'
	0xFF,0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x80,0x80, // 'n'
	0x7F,0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x7F,0x00, // 'o'
	0xFF,0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0xFF,0x40,0x20,0x10,0x08,0x00, // 'p'
	0x7F,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x7F,0x80,0x40,0x20,0x10,0x08, // 'q'
	0x7F,0x02,0x04,0x08,0x10,0x20,0x40,0x80, // 'r'
	0x7F,0x40,0x60,0x10,0x07,0xF0,0x04,0x03,0x01,0x7F,0x00, // 's'
	0x82,0x08,0x3E,0x82,0x08,0x20,0x82,0x08,0x1E, // 't'
	0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x7F,0x00, // 'u'
	0x40,0x33,0x01,0x08,0x18,0x60,0x81,0x0C,0x0C,0xC0,0x34,0x00,0xE0,0x06,0x00, // 'v'
	0x40,0xC1,0xB0,0xE0,0x88,0x58,0xC4,0x64,0x43,0x23,0x20,0xB1,0xB0,0x70,0x70,0x18,0x38,0x0C,0x08,0x00, // 'w'
	0x60,0xC6,0x30,0x6C,0x07,0x00,0x40,0x14,0x06,0xC1,0x8C,0x60,0xC0, // 'x'
	0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x7F,0x80,0x40,0x20,0x17,0xF0, // 'y'
	0xFF,0x80,0xC0,0xC0,0xC0,0x81,0x81,0x81,0x80,0xFF,0x80, // 'z'
	0x24,0x44,0x48,0x44,0x44,0x20, // '{'
	0xFF,0xFE, // '|'
	0x42,0x22,0x21,0x32,0x22,0x40 // '}'
};
const GFXglyph Orbitron_Light_16Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   5,    0,    0 }, // ' '
	  {     1,   1,  11,   4,    1,  -11 }, // '!'
	  {     3,   4,   2,   7,    1,  -11 }, // '"'
	  {     4,  12,  11,  15,    1,  -11 }, // '#'
	  {    21,  11,  14,  14,    1,  -13 }, // '$'
	  {    41,  14,  12,  17,    1,  -12 }, // '%'
	  {    62,  14,  11,  17,    1,  -11 }, // '&'
	  {    82,   1,   2,   4,    1,  -11 }, // '''
	  {    83,   3,  11,   5,    1,  -11 }, // '('
	  {    88,   3,  11,   5,    0,  -11 }, // ')'
	  {    93,   7,   7,   8,    0,  -11 }, // '*'
	  {   100,   6,   6,   9,    1,   -8 }, // '+'
	  {   105,   1,   4,   4,    1,   -1 }, // ','
	  {   106,   6,   1,   9,    1,   -5 }, // '-'
	  {   107,   1,   1,   4,    1,   -1 }, // '.'
	  {   108,   8,  12,  11,    1,  -12 }, // '/'
	  {   120,  11,  11,  14,    1,  -11 }, // '0'
	  {   136,   5,  11,   6,   -1,  -11 }, // '1'
	  {   143,  11,  11,  14,    1,  -11 }, // '2'
	  {   159,  12,  11,  15,    1,  -11 }, // '3'
	  {   176,  11,  11,  14,    1,  -11 }, // '4'
	  {   192,  11,  11,  14,    1,  -11 }, // '5'
	  {   208,  11,  11,  14,    1,  -11 }, // '6'
	  {   224,  10,  11,  11,   -1,  -11 }, // '7'
	  {   238,  11,  11,  14,    1,  -11 }, // '8'
	  {   254,  12,  11,  15,    1,  -11 }, // '9'
	  {   271,   1,   9,   4,    1,   -9 }, // ':'
	  {   273,   1,  11,   4,    1,   -9 }, // ';'
	  {   275,   7,   9,  10,    1,   -9 }, // '<'
	  {   283,   8,   4,  11,    1,   -6 }, // '='
	  {   287,   7,   9,   9,    1,   -9 }, // '>'
	  {   295,  10,  11,  12,    0,  -11 }, // '?'
	  {   309,  11,  11,  14,    1,  -11 }, // '@'
	  {   325,  11,  11,  14,    1,  -11 }, // 'A'
	  {   341,  11,  11,  14,    1,  -11 }, // 'B'
	  {   357,  12,  11,  14,    1,  -11 }, // 'C'
	  {   374,  11,  11,  14,    1,  -11 }, // 'D'
	  {   390,  11,  11,  13,    1,  -11 }, // 'E'
	  {   406,  11,  11,  12,    1,  -11 }, // 'F'
	  {   422,  11,  11,  14,    1,  -11 }, // 'G'
	  {   438,  12,  11,  15,    1,  -11 }, // 'H'
	  {   455,   1,  11,   4,    1,  -11 }, // 'I'
	  {   457,  11,  11,  14,    1,  -11 }, // 'J'
	  {   473,  11,  11,  14,    1,  -11 }, // 'K'
	  {   489,  12,  11,  13,    1,  -11 }, // 'L'
	  {   506,  13,  11,  16,    1,  -11 }, // 'M'
	  {   524,  11,  11,  14,    1,  -11 }, // 'N'
	  {   540,  11,  11,  14,    1,  -11 }, // 'O'
	  {   556,  11,  11,  14,    1,  -11 }, // 'P'
	  {   572,  13,  11,  15,    1,  -11 }, // 'Q'
	  {   590,  11,  11,  14,    1,  -11 }, // 'R'
	  {   606,  11,  11,  14,    1,  -11 }, // 'S'
	  {   622,  12,  11,  15,    1,  -11 }, // 'T'
	  {   639,  11,  11,  14,    1,  -11 }, // 'U'
	  {   655,  16,  11,  17,    0,  -11 }, // 'V'
	  {   677,  19,  11,  20,    0,  -11 }, // 'W'
	  {   704,  13,  11,  14,    0,  -11 }, // 'X'
	  {   722,  13,  11,  14,    0,  -11 }, // 'Y'
	  {   740,  12,  11,  15,    1,  -11 }, // 'Z'
	  {   757,   3,  11,   5,    1,  -11 }, // '['
	  {   762,   8,  12,  11,    1,  -12 }, // '\'
	  {   774,   3,  11,   5,    0,  -11 }, // ']'
	  {   779,   1,   1,   1,    0,    0 }, // '^'
	  {   780,  12,   1,  15,    1,    0 }, // '_'
	  {   782,   3,   2,   4,    0,  -16 }, // '`'
	  {   783,   9,   9,  12,    1,   -9 }, // 'a'
	  {   794,   9,  12,  12,    1,  -12 }, // 'b'
	  {   808,  10,   9,  12,    1,   -9 }, // 'c'
	  {   820,   9,  12,  12,    1,  -12 }, // 'd'
	  {   834,   9,   9,  12,    1,   -9 }, // 'e'
	  {   845,   6,  12,   7,    1,  -12 }, // 'f'
	  {   854,   9,  13,  12,    1,   -9 }, // 'g'
	  {   869,   9,  12,  12,    1,  -12 }, // 'h'
	  {   883,   1,  12,   4,    1,  -12 }, // 'i'
	  {   885,   6,  16,   5,   -3,  -12 }, // 'j'
	  {   897,   9,  12,  11,    1,  -12 }, // 'k'
	  {   911,   4,  12,   6,    1,  -12 }, // 'l'
	  {   917,  15,   9,  18,    1,   -9 }, // 'm'
	  {   934,   9,   9,  12,    1,   -9 }, // 'n'
	  {   945,   9,   9,  12,    1,   -9 }, // 'o'
	  {   956,   9,  13,  12,    1,   -9 }, // 'p'
	  {   971,   9,  13,  12,    1,   -9 }, // 'q'
	  {   986,   7,   9,   9,    1,   -9 }, // 'r'
	  {   994,   9,   9,  12,    1,   -9 }, // 's'
	  {  1005,   6,  12,   7,    1,  -12 }, // 't'
	  {  1014,   9,   9,  12,    1,   -9 }, // 'u'
	  {  1025,  13,   9,  14,    0,   -9 }, // 'v'
	  {  1040,  17,   9,  18,    0,   -9 }, // 'w'
	  {  1060,  11,   9,  12,    0,   -9 }, // 'x'
	  {  1073,   9,  13,  12,    1,   -9 }, // 'y'
	  {  1088,   9,   9,  12,    1,   -9 }, // 'z'
	  {  1099,   4,  11,   5,    0,  -11 }, // '{'
	  {  1105,   1,  15,   4,    1,  -13 }, // '|'
	  {  1107,   4,  11,   6,    0,  -11 } // '}'
};
const GFXfont Orbitron_Light_16 PROGMEM = {
(uint8_t  *)Orbitron_Light_16Bitmaps,(GFXglyph *)Orbitron_Light_16Glyphs,0x20, 0x7E, 16};