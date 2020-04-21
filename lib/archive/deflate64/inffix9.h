/* inffix9.h -- table for decoding deflate64 fixed codes
 * Generated automatically by makefixed9().
 */
#ifndef ZLIB_INFFIX9_H
#define ZLIB_INFFIX9_H
#include "inftree9.h"
/* WARNING: this file should *not* be used by applications.
   It is part of the implementation of this library and is
   subject to change. Applications should only use zlib.h.
 */

static const code lenfix[512] = {
    {96, 7, 0},    {0, 8, 80},    {0, 8, 16},    {132, 8, 115}, {130, 7, 31},
    {0, 8, 112},   {0, 8, 48},    {0, 9, 192},   {128, 7, 10},  {0, 8, 96},
    {0, 8, 32},    {0, 9, 160},   {0, 8, 0},     {0, 8, 128},   {0, 8, 64},
    {0, 9, 224},   {128, 7, 6},   {0, 8, 88},    {0, 8, 24},    {0, 9, 144},
    {131, 7, 59},  {0, 8, 120},   {0, 8, 56},    {0, 9, 208},   {129, 7, 17},
    {0, 8, 104},   {0, 8, 40},    {0, 9, 176},   {0, 8, 8},     {0, 8, 136},
    {0, 8, 72},    {0, 9, 240},   {128, 7, 4},   {0, 8, 84},    {0, 8, 20},
    {133, 8, 227}, {131, 7, 43},  {0, 8, 116},   {0, 8, 52},    {0, 9, 200},
    {129, 7, 13},  {0, 8, 100},   {0, 8, 36},    {0, 9, 168},   {0, 8, 4},
    {0, 8, 132},   {0, 8, 68},    {0, 9, 232},   {128, 7, 8},   {0, 8, 92},
    {0, 8, 28},    {0, 9, 152},   {132, 7, 83},  {0, 8, 124},   {0, 8, 60},
    {0, 9, 216},   {130, 7, 23},  {0, 8, 108},   {0, 8, 44},    {0, 9, 184},
    {0, 8, 12},    {0, 8, 140},   {0, 8, 76},    {0, 9, 248},   {128, 7, 3},
    {0, 8, 82},    {0, 8, 18},    {133, 8, 163}, {131, 7, 35},  {0, 8, 114},
    {0, 8, 50},    {0, 9, 196},   {129, 7, 11},  {0, 8, 98},    {0, 8, 34},
    {0, 9, 164},   {0, 8, 2},     {0, 8, 130},   {0, 8, 66},    {0, 9, 228},
    {128, 7, 7},   {0, 8, 90},    {0, 8, 26},    {0, 9, 148},   {132, 7, 67},
    {0, 8, 122},   {0, 8, 58},    {0, 9, 212},   {130, 7, 19},  {0, 8, 106},
    {0, 8, 42},    {0, 9, 180},   {0, 8, 10},    {0, 8, 138},   {0, 8, 74},
    {0, 9, 244},   {128, 7, 5},   {0, 8, 86},    {0, 8, 22},    {65, 8, 0},
    {131, 7, 51},  {0, 8, 118},   {0, 8, 54},    {0, 9, 204},   {129, 7, 15},
    {0, 8, 102},   {0, 8, 38},    {0, 9, 172},   {0, 8, 6},     {0, 8, 134},
    {0, 8, 70},    {0, 9, 236},   {128, 7, 9},   {0, 8, 94},    {0, 8, 30},
    {0, 9, 156},   {132, 7, 99},  {0, 8, 126},   {0, 8, 62},    {0, 9, 220},
    {130, 7, 27},  {0, 8, 110},   {0, 8, 46},    {0, 9, 188},   {0, 8, 14},
    {0, 8, 142},   {0, 8, 78},    {0, 9, 252},   {96, 7, 0},    {0, 8, 81},
    {0, 8, 17},    {133, 8, 131}, {130, 7, 31},  {0, 8, 113},   {0, 8, 49},
    {0, 9, 194},   {128, 7, 10},  {0, 8, 97},    {0, 8, 33},    {0, 9, 162},
    {0, 8, 1},     {0, 8, 129},   {0, 8, 65},    {0, 9, 226},   {128, 7, 6},
    {0, 8, 89},    {0, 8, 25},    {0, 9, 146},   {131, 7, 59},  {0, 8, 121},
    {0, 8, 57},    {0, 9, 210},   {129, 7, 17},  {0, 8, 105},   {0, 8, 41},
    {0, 9, 178},   {0, 8, 9},     {0, 8, 137},   {0, 8, 73},    {0, 9, 242},
    {128, 7, 4},   {0, 8, 85},    {0, 8, 21},    {144, 8, 3},   {131, 7, 43},
    {0, 8, 117},   {0, 8, 53},    {0, 9, 202},   {129, 7, 13},  {0, 8, 101},
    {0, 8, 37},    {0, 9, 170},   {0, 8, 5},     {0, 8, 133},   {0, 8, 69},
    {0, 9, 234},   {128, 7, 8},   {0, 8, 93},    {0, 8, 29},    {0, 9, 154},
    {132, 7, 83},  {0, 8, 125},   {0, 8, 61},    {0, 9, 218},   {130, 7, 23},
    {0, 8, 109},   {0, 8, 45},    {0, 9, 186},   {0, 8, 13},    {0, 8, 141},
    {0, 8, 77},    {0, 9, 250},   {128, 7, 3},   {0, 8, 83},    {0, 8, 19},
    {133, 8, 195}, {131, 7, 35},  {0, 8, 115},   {0, 8, 51},    {0, 9, 198},
    {129, 7, 11},  {0, 8, 99},    {0, 8, 35},    {0, 9, 166},   {0, 8, 3},
    {0, 8, 131},   {0, 8, 67},    {0, 9, 230},   {128, 7, 7},   {0, 8, 91},
    {0, 8, 27},    {0, 9, 150},   {132, 7, 67},  {0, 8, 123},   {0, 8, 59},
    {0, 9, 214},   {130, 7, 19},  {0, 8, 107},   {0, 8, 43},    {0, 9, 182},
    {0, 8, 11},    {0, 8, 139},   {0, 8, 75},    {0, 9, 246},   {128, 7, 5},
    {0, 8, 87},    {0, 8, 23},    {77, 8, 0},    {131, 7, 51},  {0, 8, 119},
    {0, 8, 55},    {0, 9, 206},   {129, 7, 15},  {0, 8, 103},   {0, 8, 39},
    {0, 9, 174},   {0, 8, 7},     {0, 8, 135},   {0, 8, 71},    {0, 9, 238},
    {128, 7, 9},   {0, 8, 95},    {0, 8, 31},    {0, 9, 158},   {132, 7, 99},
    {0, 8, 127},   {0, 8, 63},    {0, 9, 222},   {130, 7, 27},  {0, 8, 111},
    {0, 8, 47},    {0, 9, 190},   {0, 8, 15},    {0, 8, 143},   {0, 8, 79},
    {0, 9, 254},   {96, 7, 0},    {0, 8, 80},    {0, 8, 16},    {132, 8, 115},
    {130, 7, 31},  {0, 8, 112},   {0, 8, 48},    {0, 9, 193},   {128, 7, 10},
    {0, 8, 96},    {0, 8, 32},    {0, 9, 161},   {0, 8, 0},     {0, 8, 128},
    {0, 8, 64},    {0, 9, 225},   {128, 7, 6},   {0, 8, 88},    {0, 8, 24},
    {0, 9, 145},   {131, 7, 59},  {0, 8, 120},   {0, 8, 56},    {0, 9, 209},
    {129, 7, 17},  {0, 8, 104},   {0, 8, 40},    {0, 9, 177},   {0, 8, 8},
    {0, 8, 136},   {0, 8, 72},    {0, 9, 241},   {128, 7, 4},   {0, 8, 84},
    {0, 8, 20},    {133, 8, 227}, {131, 7, 43},  {0, 8, 116},   {0, 8, 52},
    {0, 9, 201},   {129, 7, 13},  {0, 8, 100},   {0, 8, 36},    {0, 9, 169},
    {0, 8, 4},     {0, 8, 132},   {0, 8, 68},    {0, 9, 233},   {128, 7, 8},
    {0, 8, 92},    {0, 8, 28},    {0, 9, 153},   {132, 7, 83},  {0, 8, 124},
    {0, 8, 60},    {0, 9, 217},   {130, 7, 23},  {0, 8, 108},   {0, 8, 44},
    {0, 9, 185},   {0, 8, 12},    {0, 8, 140},   {0, 8, 76},    {0, 9, 249},
    {128, 7, 3},   {0, 8, 82},    {0, 8, 18},    {133, 8, 163}, {131, 7, 35},
    {0, 8, 114},   {0, 8, 50},    {0, 9, 197},   {129, 7, 11},  {0, 8, 98},
    {0, 8, 34},    {0, 9, 165},   {0, 8, 2},     {0, 8, 130},   {0, 8, 66},
    {0, 9, 229},   {128, 7, 7},   {0, 8, 90},    {0, 8, 26},    {0, 9, 149},
    {132, 7, 67},  {0, 8, 122},   {0, 8, 58},    {0, 9, 213},   {130, 7, 19},
    {0, 8, 106},   {0, 8, 42},    {0, 9, 181},   {0, 8, 10},    {0, 8, 138},
    {0, 8, 74},    {0, 9, 245},   {128, 7, 5},   {0, 8, 86},    {0, 8, 22},
    {65, 8, 0},    {131, 7, 51},  {0, 8, 118},   {0, 8, 54},    {0, 9, 205},
    {129, 7, 15},  {0, 8, 102},   {0, 8, 38},    {0, 9, 173},   {0, 8, 6},
    {0, 8, 134},   {0, 8, 70},    {0, 9, 237},   {128, 7, 9},   {0, 8, 94},
    {0, 8, 30},    {0, 9, 157},   {132, 7, 99},  {0, 8, 126},   {0, 8, 62},
    {0, 9, 221},   {130, 7, 27},  {0, 8, 110},   {0, 8, 46},    {0, 9, 189},
    {0, 8, 14},    {0, 8, 142},   {0, 8, 78},    {0, 9, 253},   {96, 7, 0},
    {0, 8, 81},    {0, 8, 17},    {133, 8, 131}, {130, 7, 31},  {0, 8, 113},
    {0, 8, 49},    {0, 9, 195},   {128, 7, 10},  {0, 8, 97},    {0, 8, 33},
    {0, 9, 163},   {0, 8, 1},     {0, 8, 129},   {0, 8, 65},    {0, 9, 227},
    {128, 7, 6},   {0, 8, 89},    {0, 8, 25},    {0, 9, 147},   {131, 7, 59},
    {0, 8, 121},   {0, 8, 57},    {0, 9, 211},   {129, 7, 17},  {0, 8, 105},
    {0, 8, 41},    {0, 9, 179},   {0, 8, 9},     {0, 8, 137},   {0, 8, 73},
    {0, 9, 243},   {128, 7, 4},   {0, 8, 85},    {0, 8, 21},    {144, 8, 3},
    {131, 7, 43},  {0, 8, 117},   {0, 8, 53},    {0, 9, 203},   {129, 7, 13},
    {0, 8, 101},   {0, 8, 37},    {0, 9, 171},   {0, 8, 5},     {0, 8, 133},
    {0, 8, 69},    {0, 9, 235},   {128, 7, 8},   {0, 8, 93},    {0, 8, 29},
    {0, 9, 155},   {132, 7, 83},  {0, 8, 125},   {0, 8, 61},    {0, 9, 219},
    {130, 7, 23},  {0, 8, 109},   {0, 8, 45},    {0, 9, 187},   {0, 8, 13},
    {0, 8, 141},   {0, 8, 77},    {0, 9, 251},   {128, 7, 3},   {0, 8, 83},
    {0, 8, 19},    {133, 8, 195}, {131, 7, 35},  {0, 8, 115},   {0, 8, 51},
    {0, 9, 199},   {129, 7, 11},  {0, 8, 99},    {0, 8, 35},    {0, 9, 167},
    {0, 8, 3},     {0, 8, 131},   {0, 8, 67},    {0, 9, 231},   {128, 7, 7},
    {0, 8, 91},    {0, 8, 27},    {0, 9, 151},   {132, 7, 67},  {0, 8, 123},
    {0, 8, 59},    {0, 9, 215},   {130, 7, 19},  {0, 8, 107},   {0, 8, 43},
    {0, 9, 183},   {0, 8, 11},    {0, 8, 139},   {0, 8, 75},    {0, 9, 247},
    {128, 7, 5},   {0, 8, 87},    {0, 8, 23},    {77, 8, 0},    {131, 7, 51},
    {0, 8, 119},   {0, 8, 55},    {0, 9, 207},   {129, 7, 15},  {0, 8, 103},
    {0, 8, 39},    {0, 9, 175},   {0, 8, 7},     {0, 8, 135},   {0, 8, 71},
    {0, 9, 239},   {128, 7, 9},   {0, 8, 95},    {0, 8, 31},    {0, 9, 159},
    {132, 7, 99},  {0, 8, 127},   {0, 8, 63},    {0, 9, 223},   {130, 7, 27},
    {0, 8, 111},   {0, 8, 47},    {0, 9, 191},   {0, 8, 15},    {0, 8, 143},
    {0, 8, 79},    {0, 9, 255}};

static const code distfix[32] = {
    {128, 5, 1},  {135, 5, 257},  {131, 5, 17},  {139, 5, 4097},
    {129, 5, 5},  {137, 5, 1025}, {133, 5, 65},  {141, 5, 16385},
    {128, 5, 3},  {136, 5, 513},  {132, 5, 33},  {140, 5, 8193},
    {130, 5, 9},  {138, 5, 2049}, {134, 5, 129}, {142, 5, 32769},
    {128, 5, 2},  {135, 5, 385},  {131, 5, 25},  {139, 5, 6145},
    {129, 5, 7},  {137, 5, 1537}, {133, 5, 97},  {141, 5, 24577},
    {128, 5, 4},  {136, 5, 769},  {132, 5, 49},  {140, 5, 12289},
    {130, 5, 13}, {138, 5, 3073}, {134, 5, 193}, {142, 5, 49153}};

#endif
