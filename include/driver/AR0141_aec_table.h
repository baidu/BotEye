/******************************************************************************
 * Copyright 2017-2019 Baidu Robotic Vision Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/*
 * [NOTE] This file is automatically generated by exposure_table_ar0141.py
 * Do NOT modify this file directly!
 */
#ifndef INCLUDE_DRIVER_AR0141_AEC_TABLE_H_
#define INCLUDE_DRIVER_AR0141_AEC_TABLE_H_

namespace XPDRIVER {
namespace XP_SENSOR {

const uint32_t kAR0141_AEC_steps = 234;
// Each row in kAR0141_AEC_LUT is [gain_reg_val, exp_reg_val]
const int16_t kAR0141_AEC_LUT[234][2] = {
  {0, 1},
  {1, 1},
  {2, 1},
  {3, 1},
  {5, 1},
  {6, 1},
  {7, 1},
  {8, 1},
  {10, 1},
  {12, 1},
  {13, 1},
  {15, 1},
  {16, 1},
  {1, 2},
  {2, 2},
  {4, 2},
  {5, 2},
  {6, 2},
  {7, 2},
  {9, 2},
  {1, 3},
  {10, 2},
  {11, 2},
  {3, 3},
  {14, 2},
  {15, 2},
  {16, 2},
  {6, 3},
  {7, 3},
  {18, 2},
  {19, 2},
  {20, 2},
  {11, 3},
  {13, 3},
  {22, 2},
  {14, 3},
  {3, 5},
  {24, 2},
  {25, 2},
  {26, 2},
  {18, 3},
  {6, 5},
  {19, 3},
  {29, 2},
  {1, 7},
  {31, 2},
  {21, 3},
  {22, 3},
  {11, 5},
  {12, 5},
  {24, 3},
  {5, 7},
  {25, 3},
  {26, 3},
  {7, 7},
  {28, 3},
  {17, 5},
  {22, 4},
  {30, 3},
  {1, 11},
  {32, 3},
  {6, 9},
  {33, 3},
  {3, 11},
  {27, 4},
  {1, 13},
  {35, 3},
  {17, 7},
  {11, 9},
  {37, 3},
  {32, 4},
  {38, 3},
  {9, 11},
  {28, 5},
  {29, 5},
  {7, 13},
  {22, 7},
  {5, 15},
  {9, 13},
  {37, 4},
  {7, 15},
  {5, 17},
  {39, 4},
  {35, 5},
  {40, 4},
  {15, 13},
  {33, 6},
  {9, 17},
  {38, 5},
  {35, 6},
  {15, 15},
  {40, 5},
  {13, 17},
  {17, 15},
  {29, 9},
  {43, 5},
  {31, 9},
  {9, 23},
  {15, 19},
  {35, 8},
  {9, 25},
  {39, 7},
  {1, 39},
  {35, 9},
  {38, 8},
  {19, 19},
  {33, 11},
  {40, 8},
  {38, 9},
  {33, 12},
  {13, 29},
  {43, 8},
  {11, 33},
  {27, 17},
  {11, 35},
  {9, 39},
  {1, 59},
  {6, 47},
  {35, 14},
  {2, 61},
  {8, 47},
  {6, 53},
  {5, 57},
  {3, 65},
  {15, 41},
  {13, 45},
  {44, 12},
  {3, 73},
  {10, 55},
  {6, 67},
  {23, 33},
  {39, 17},
  {8, 67},
  {5, 79},
  {12, 61},
  {11, 65},
  {7, 79},
  {5, 89},
  {31, 31},
  {30, 33},
  {46, 17},
  {41, 21},
  {19, 57},
  {1, 131},
  {11, 85},
  {10, 91},
  {45, 21},
  {35, 33},
  {13, 89},
  {35, 35},
  {28, 49},
  {17, 83},
  {3, 153},
  {12, 107},
  {23, 67},
  {1, 187},
  {14, 109},
  {17, 99},
  {47, 28},
  {9, 143},
  {13, 127},
  {24, 79},
  {23, 85},
  {9, 161},
  {44, 37},
  {24, 89},
  {12, 157},
  {0, 283},
  {13, 161},
  {15, 155},
  {25, 99},
  {42, 49},
  {25, 105},
  {42, 52},
  {12, 199},
  {19, 151},
  {3, 311},
  {17, 179},
  {10, 241},
  {35, 85},
  {25, 133},
  {15, 221},
  {44, 63},
  {39, 79},
  {42, 72},
  {14, 257},
  {19, 209},
  {11, 303},
  {9, 337},
  {47, 70},
  {30, 149},
  {14, 307},
  {31, 153},
  {19, 257},
  {10, 387},
  {43, 96},
  {9, 427},
  {24, 229},
  {35, 149},
  {43, 108},
  {37, 143},
  {23, 269},
  {25, 255},
  {12, 469},
  {42, 130},
  {46, 116},
  {38, 163},
  {42, 142},
  {24, 317},
  {44, 140},
  {27, 299},
  {43, 154},
  {36, 214},
  {22, 401},
  {23, 395},
  {46, 156},
  {27, 357},
  {33, 292},
  {21, 487},
  {39, 229},
  {40, 226},
  {25, 447},
  {37, 274},
  {42, 228},
  {30, 407},
  {35, 331},
  {41, 259},
  {40, 278},
  {46, 229},
  {46, 236},
  {37, 347},
  {43, 278},
  {35, 407},
  {47, 257}
};

}  // namespace XP_SENSOR
}  // namespace XPDRIVER

#endif  // INCLUDE_DRIVER_AR0141_AEC_TABLE_H_
