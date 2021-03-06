#include "Font.h"

const uint8_t alphabet[40]= {
0B11111100, // [0] => "0"
0B01100000, // [1] => "1"
0B11011010, // [2] => "2"
0B11110010, // [3] => "3"
0B01100110, // [4] => "4"
0B10110110, // [5] => "5"
0B10111110, // [6] => "6"
0B11100000, // [7] => "7"
0B11111110, // [8] => "8"
0B11110110, // [9] => "9"
0B11101110, // [10] => "A"
0B00111110, // [11] => "b"
0B10011100, // [12] => "C"
0B01111010, // [13] => "d"
0B10011110, // [14] => "E"
0B10001110, // [15] => "F"
0B11110110, // [16] => "g" (9)
0B00101110, // [17] => "h"
0B00100000, // [18] => "i"
0B01111000, // [19] => "J"
0B01101110, // [20] => "K"(H)
0B00011100, // [21] => "L"
0B11101100, // [22] => "M"
0B00101010, // [23] => "n"
0B00111010, // [24] => "o"
0B11001110, // [25] => "P"
0B11100110, // [26] => "q"
0B00001010, // [27] => "r"
0B10110110, // [28] => "S" (5)
0B00011110, // [29] => "t"
0B00111000, // [30] => "u"
0B01111100, // [31] => "V"
0B01111100, // [32] => "W" (V) //do not use
0B01101110, // [33] => "X" (H) //do not use
0B01110110, // [34] => "Y"
0B11011000, // [35] => "Z"
0B00000000, // [36] => blank
0B00000010, // [37] => -
0B00000001  // [38] => .
};