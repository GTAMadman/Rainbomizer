/* Will move this data to the config file at a later point */

#include <vector>
#include <unordered_map>

struct Position
{
    float x;
    float y;
    float z;
    float heading;
};

std::unordered_map<int, std::vector<int>> threadFinishes = {
    {11, {18188}},
    {12, {13692}},
    {13, {14682}},
    {14, {15979}},
    {15, {12908}},
    {16, {20304}},
    {17, {23785}},
    {18, {15274}},
    {19, {35970}},
    {20, {32422}},
    {21, {6337}},
    {22, {41291}},
    {23, {19361}},
    {24, {40660}},
    {25, {18182}},
    {26, {41389}},
    {27, {23183}},
    {28, {11352}},
    {29, {20115}},
    {30, {52043}},
    {31, {15574}},
    {32, {10527}},
    {33, {15510}},
    {34, {15889, 15973}},
    {35, {48953, 49381, 49433}},
    {36, {5520}},
    {37, {67765}},
    {38, {20103}},
    {39, {13609}},
    {41, {32513}},
    {42, {30343}},
    {43, {17066}},
    {44, {18326}},
    {45, {813}},
    {46, {16397}},
    {47, {11942}},
    {48, {1957, 2617}},
    {49, {24446}},
    {50, {21029}},
    {51, {18160}},
    {52, {21206}},
    {53, {27975}},
    {54, {8013}},
    {55, {12781}},
    {56, {26588}},
    {57, {20684}},
    {58, {14568}},
    {59, {31204, 31291}},
    {60, {19158}},
    {61, {12306}},
    {62, {9169}},
    {63, {14730}},
    {64, {23169}},
    {65, {12885}},
    {66, {15909}},
    {67, {7659}},
    {68, {26031}},
    {69, {25110}},
    {70, {5117}},
    {71, {24495}},
    {72, {17206}},
    {73, {9384}},
    {74, {26926}},
    {75, {14457}},
    {76, {10715}},
    {77, {26934}},
    {78, {269}},
    {79, {10459}},
    {80, {21894}},
    {81, {29924}},
    {82, {4130}},
    {83, {30015}},
    {84, {19542}},
    {85, {16387}},
    {86, {14129}},
    {87, {319}},
    {88, {45880}},
    {89, {12838}},
    {90, {31283}},
    {91, {12440}},
    {92, {15339}},
    {93, {7980}},
    {94, {5058}},
    {95, {13261}},
    {96, {23694}},
    {97, {22827}},
    {98, {18813}},
    {99, {13180}},
    {100, {13735}},
    {101, {44516}},
    {102, {38947}},
    {103, {52419}},
    {104, {6740}},
    {105, {12906}},
    {106, {18881}},
    {107, {3159}},
    {108, {2997}},
    {109, {30259}},
    {110, {32590}},
    {111, {18535}},
    {112, {41521}},
};

std::unordered_map<int, std::vector<Position>> missionEndPos = {
    {11, {{2487.309, -1668.372, 13.34375, 82}}},
    {12, {{2469.135, -1686.625, 13.51536, 290}}},
    {13, {{2511.352, -1672.14, 13.45318, 179}}},
    {14, {{2517.524, -1678.497, 14.39124, 324}}},
    {15, {{2067.618, -1695.689, 13.32862, 90}}},
    {16, {{2244.478, -1664.06, 15.47656, 357}}},
    {17, {{2511, -1671, 13.43502, 222}}},
    {18, {{2509.892, -1672.469, 13.40501, 90}}},
    {19, {{1784.509, -1891.628, 13.39262, 90}}},
    {27, {{782.6021, -1631.989, 13.38281, 293}}},
    {28, {{2339.673, -1310.77, 24.23408, 358}}},
    {29, {{2072.752, -1694.358, 13.55468, 272}}},
    {30, {{2822.374, -1540.315, 10.92188, 87}}},
    {24, {{2741, -2001, 13.55469, 79}}},
    {25, {{2471.343, -1684.306, 13.50781, 238}}},
    {26, {{2452.29, -1971.682, 13.55391, 153}}},
    {31, {{1643.42, -1524.69, 13.55915, 179}}},
    {32, {{808.299, -1630.424, 13.38281, 254}}},
    {33, {{837.5789, -2041.428, 12.86719, 180}}},
    {34,
     {{790.9901, -1627.732, 13.38281, 315}, {2486.6, -1649.9, 13.48291, 177}}},
    {22, {{2401.667, -1727.867, 13.30494, 90}}},
    {23, {{2177.401, -2310.665, 13.54688, 358}}},
    {36, {{369.9428, -2031.885, 7.449804, 180}}},
    {21, {{1921.775, -1128.17, 25.02432, 119}}},
    {20, {{2502.485, -1673.656, 13.23248, 253}}},
    {37, {{2170.596, -1515.468, 23.88962, 356}}},
    {38, {{-2011.787, -2501.225, 32.80458, 79}}},
    {39, {{-2044.09, -2524.197, 31.06681, 48}}},
    {43, {{-74.2582, -1130.526, 1.078125, 135}}},
    {41, {{870.0452, -30.13162, 63.19531, 244}}},
    {42, {{863.5229, -31.23377, 62.73661, 70}}},
    {44, {{872.7509, -33.05381, 63.0262, 246}}},
    {46, {{-1092.561, -1633.628, 76.36719, 273}}},
    {45, {{-2042.129, -2528.791, 30.625, 284}}},
    {48,
     {{-544.6729, -189.5346, 78.23786, 270},
      {1559.762, 17.44868, 23.91306, 0}}},
    {47, {{-2029.833, 168.0107, 28.83594, 167}}},
    {49, {{-2028, 177, 28.83594, 267}}},
    {51, {{-1741.792, 939.731, 24.89063, 39}}},
    {50, {{-2049.642, 241.7405, 36.57036, 186}}},
    {58, {{-2248.923, -2563.239, 31.92188, 64}}},
    {59,
     {{-2031.254, 161.408, 28.83594, 270}, {-1714.317, 823.3755, 24.33674, 0}}},
    {65, {{-2624.28, 1410.93, 7.09375, 194}}},
    {66, {{-2615.042, 1396.73, 6.89646, 50}}},
    {60, {{-2127.08, -87.75, 35.32031, 0}}},
    {52, {{362.4723, -1841.22, 7.835938, 180}}},
    {61, {{-2597.769, 1388.272, 7.182868, 226}}},
    {64, {{-1617.116, 1411.717, 7.175041, 260}}},
    {62, {{-1683.84, 692.2088, 28.59375, 141}}},
    {53, {{-2150.164, 642.3383, 52.10408, 0}}},
    {54, {{-1741.706, 1425.384, 7.1875, 179}}},
    {55, {{-1571.402, -2742.089, 48.64283, 55}}},
    {56, {{-1508.647, 1296.052, 1.397049, 270}}},
    {57, {{-2430.707, 1563.727, -0.1896497, 359}}},
    {63, {{-2029.619, 157.4262, 28.6026, 0}}},
    {72, {{-2244.444, 136.8633, 35.32031, 88}}},
    {73, {{-2244.444, 136.8633, 35.32031, 90}}},
    {74, {{-2244.669, 132.1672, 35.32031, 92}}},
    {67, {{-2032.471, 176.6342, 28.84293, 267}}},
    {68, {{-2027.2, 179.5, 28.83594, 277}}},
    {69, {{-2026.848, 179.5464, 28.83594, 277}}},
    {70, {{-2027.2, 179.5, 28.83594, 275}}},
    {75, {{-684.8021, 948.1096, 12.13281, 124}}},
    {76, {{-2033.795, 180.8299, 28.84293, 277}}},
    {77, {{-389.8034, 2230.742, 42.42969, 270}}},
    {78, {{-696.0359, 948.1198, 12.27593, 33}}},
    {79, {{299.7123, 2501.5, 17.20164, 270}}},
    {80, {{186.461, 1049.241, 21.73349, 343}}},
    {81, {{-791.178, 2425.34, 157.1627, 256}}},
    {82, {{402.8737, 2531.582, 16.55586, 224}}},
    {84, {{1900.727, 951.1923, 10.82031, 172}}},
    {85, {{1028.168, 741.3518, 10.80376, 232}}},
    {86, {{1913.682, 962.0125, 10.82031, 100}}},
    {88, {{2187, 1680, 11.1035, 90}}},
    {89, {{987.2789, 2136.401, 10.96968, 263}}},
    {90, {{2171.511, 1687.368, 10.82031, 94}}},
    {87, {{2025.8, 1007.87, 10.82031, 279}}},
    {32, {{1867.3, 2260.578, 10.78308, 0}}},
    {93, {{-1314.073, 2555.269, 87.30537, 182}}},
    {94, {{-368.226, 2182.37, 42.27187, 89}}},
    {91, {{1477.343, 1464.649, 11.74907, 179}}},
    {92, {{1477.343, 1464.649, 11.74907, 179}}},
    {96, {{1910.191, 962.3119, 10.82031, 84}}},
    {97, {{2029.545, 2735.628, 10.82031, 68}}},
    {98, {{-613.74, 1980.77, -0.6202381, 148}}},
    {99, {{1014.013, 1902.325, 10.82031, 58}}},
    {100, {{388.007, 2532.546, 16.53906, 270}}},
    {101, {{2024.139, 1007.851, 10.82031, 270}}},
    {102, {{1246.182, -813.2, 84.14775, 180}}},
    {103, {{291.6821, 2532.902, 17.54247, 180}}},
    {104, {{2512.818, -1672.532, 13.50762, 240}}},
    {105, {{1180.579, -1158.793, 23.85726, 25}}},
    {106, {{2002.105, -1129.403, 25.44721, 179}}},
    {107, {{2512.407, -1672.111, 13.4917, 78}}},
    {108, {{2506.091, -1670.815, 13.15381, 256}}},
    {109, {{1807.57, -2120.72, 13.55435, 17}}},
    {110, {{2494.483, -1684.639, 13.5106, 3}}},
};

std::unordered_map<int, Position> missionStartPos
    = {{-1, {700, -3328, 20, 180}},
       {11, {2495.214, -1687.03, 12.5144, 0}},
       {12, {2459.55, -1687.75, 12.56, 0}},
       {13, {2515.07, -1673.98, 12.71, 0}},
       {14, {2515.07, -1673.98, 12.71, 0}},
       {15, {2515.07, -1673.98, 12.71, 0}},
       {16, {2515.07, -1673.98, 12.71, 0}},
       {17, {2515.07, -1673.98, 12.71, 0}},
       {18, {2515.07, -1673.98, 12.71, 0}},
       {19, {2515.07, -1673.98, 12.71, 0}},
       {20, {2515.07, -1673.98, 12.71, 0}},
       {21, {1365.251, -1280.12, 12.5469, 0}},
       {22, {1042.85, -1338.62, 12.55, 0}},
       {23, {1042.85, -1338.62, 12.55, 0}},
       {24, {2459.55, -1687.75, 12.56, 0}},
       {25, {2459.55, -1687.75, 12.56, 0}},
       {26, {2459.55, -1687.75, 12.56, 0}},
       {27, {2070.87, -1703.01, 12.55, 0}},
       {28, {2070.87, -1703.01, 12.55, 0}},
       {29, {2070.87, -1703.01, 12.55, 0}},
       {30, {2070.87, -1703.01, 12.55, 0}},
       {31, {790.54, -1627.91, 12.39, 0}},
       {32, {790.54, -1627.91, 12.39, 0}},
       {33, {790.54, -1627.91, 12.39, 0}},
       {34, {790.54, -1627.91, 12.39, 0}},
       {36, {1801.08, -2117.92, 12.56, 0}},
       {37, {2515.07, -1673.98, 12.71, 0}},
       {38, {2515.07, -1673.98, 12.71, 0}},
       {39, {-2043.34, -2525.99, 29.62, 0}},
       {40, {681.595, -478.7909, 15.3281, 0}},
       {41, {868.3358, -29.5529, 62.3276, 0}},
       {42, {868.3358, -29.5529, 62.3276, 0}},
       {43, {868.3358, -29.5529, 62.3276, 0}},
       {44, {868.3358, -29.5529, 62.3276, 0}},
       {45, {-2043.34, -2525.99, 29.62, 0}},
       {46, {-2198.87, -2261.202, 29.6419, 0}},
       {47, {-922.5121, -1719.395, 76.5703, 0}},
       {48, {-513.9356, -188.314, 77.4599, 0}},
       {49, {-2030.402, 148.8279, 27.8359, 0}},
       {50, {-2030.402, 148.8279, 27.8359, 0}},
       {51, {-2030.402, 148.8279, 27.8359, 0}},
       {52, {-2030.402, 148.8279, 27.8359, 0}},
       {53, {-2154.208, 645.3251, 51.3516, 0}},
       {54, {-2154.208, 645.3251, 51.3516, 0}},
       {55, {-2154.208, 645.3251, 51.3516, 0}},
       {56, {-2154.208, 645.3251, 51.3516, 0}},
       {57, {-2154.208, 645.3251, 51.3516, 0}},
       {58, {-2030.402, 148.8279, 27.8359, 0}},
       {59, {-2030.402, 148.8279, 27.8359, 0}},
       {60, {-2030.402, 148.8279, 27.8359, 0}},
       {61, {-2030.402, 148.8279, 27.8359, 0}},
       {62, {-2030.402, 148.8279, 27.8359, 0}},
       {63, {-2030.402, 148.8279, 27.8359, 0}},
       {64, {-1717.05, 1280.91, 6.23, 0}},
       {65, {-2623.497, 1405.66, 6.1016, 0}},
       {66, {-2623.497, 1405.66, 6.1016, 0}},
       {67, {-2031.261, 179.2488, 27.8359, 0}},
       {68, {-2031.261, 179.2488, 27.8359, 0}},
       {69, {-2031.261, 179.2488, 27.8359, 0}},
       {70, {-2031.261, 179.2488, 27.8359, 0}},
       {71, {-2031.4, -116.5, 1034.1, 0}},
       {72, {-2245.663, 128.8889, 34.3203, 0}},
       {73, {-2245.663, 128.8889, 34.3203, 0}},
       {74, {-2245.663, 128.8889, 34.3203, 0}},
       {75, {-685.2156, 923.2191, 11.1531, 0}},
       {76, {-685.2156, 923.2191, 11.1531, 0}},
       {77, {-685.2156, 923.2191, 11.1531, 0}},
       {78, {-685.2156, 923.2191, 11.1531, 0}},
       {79, {327.448, 2530.095, 15.8066, 0}},
       {80, {327.448, 2530.095, 15.8066, 0}},
       {81, {327.448, 2530.095, 15.8066, 0}},
       {82, {327.448, 2530.095, 15.8066, 0}},
       {83, {415.55, 2533.57, 19.18, 0}},
       {84, {2028.932, 1023.292, 9.8127, 0}},
       {85, {2028.932, 1023.292, 9.8127, 0}},
       {86, {2028.932, 1023.292, 9.8127, 0}},
       {87, {2028.932, 1023.292, 9.8127, 0}},
       {88, {2026.603, 1007.735, 9.8127, 0}},
       {89, {2175.412, 1681.548, 9.8203, 0}},
       {90, {2175.412, 1681.548, 9.8203, 0}},
       {91, {2175.412, 1681.548, 9.8203, 0}},
       {92, {2175.412, 1681.548, 9.8203, 0}},
       {93, {1598.557, 2667.83, 9.8203, 0}},
       {94, {-378.75, 2235.85, 41.42, 0}},
       {95, {2090.0, 1451.0, 9.8, 0}},
       {96, {2026.225, 1007.423, 9.8203, 0}},
       {97, {2026.225, 1007.423, 9.8203, 0}},
       {98, {2026.225, 1007.423, 9.8203, 0}},
       {99, {2026.225, 1007.423, 9.8203, 0}},
       {100, {2026.225, 1007.423, 9.8203, 0}},
       {101, {2026.225, 1007.423, 9.8203, 0}},
       {102, {2026.225, 1007.423, 9.8203, 0}},
       {103, {1253.788, -785.2594, 91.0313, 0}},
       {104, {1253.788, -785.2594, 91.0313, 0}},
       {105, {1253.788, -785.2594, 91.0313, 0}},
       {106, {2495.214, -1687.03, 12.5144, 0}},
       {107, {2515.07, -1673.98, 12.71, 0}},
       {108, {1253.788, -785.2594, 91.0313, 0}},
       {109, {2515.07, -1673.98, 12.71, 0}},
       {110, {2515.07, -1673.98, 12.71, 0}},
       {111, {2515.07, -1673.98, 12.71, 0}},
       {112, {2515.07, -1673.98, 12.71, 0}}};
