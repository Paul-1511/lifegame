//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleCyber();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2023 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define CYBER_STYLE_PROPS_COUNT  17

// Custom style name: Cyber
static const GuiStyleProp cyberStyleProps[CYBER_STYLE_PROPS_COUNT] = {
    { 0, 0, 0x2f7486ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x024658ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0x51bfd3ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0x82cde0ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0x3299b4ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0xb6e1eaff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0xeb7630ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0xffbc51ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0xd86f36ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x134b5aff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x02313dff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x17505fff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x0000000e },    // DEFAULT_TEXT_SIZE 
    { 0, 17, 0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, 0x81c0d0ff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x00222bff },    // DEFAULT_BACKGROUND_COLOR 
    { 0, 20, 0x00000015 },    // DEFAULT_TEXT_LINE_SPACING 
};

// WARNING: This style uses a custom font: "IosevkaFixed-Medium.ttf" (size: 14, spacing: 0)

#define CYBER_STYLE_FONT_ATLAS_COMP_SIZE 4391

// Font atlas image pixels data: DEFLATE compressed
static unsigned char cyberFontData[CYBER_STYLE_FONT_ATLAS_COMP_SIZE] = { 0xed,
    0x9d, 0x79, 0x94, 0x15, 0xc5, 0xbd, 0xc7, 0xef, 0x0c, 0x8b, 0xa3, 0x0c, 0x3b, 0xc8, 0x80, 0x8a, 0x1a, 0x96, 0x51, 0x16,
    0x37, 0x40, 0x05, 0x54, 0xf0, 0x89, 0xb8, 0xb3, 0xa8, 0x18, 0x50, 0x04, 0x64, 0x51, 0x51, 0x51, 0x71, 0x01, 0x95, 0x87,
    0x89, 0x01, 0x79, 0x26, 0xe6, 0x19, 0x75, 0x44, 0x83, 0xa8, 0x51, 0x11, 0x10, 0x11, 0x90, 0x28, 0x88, 0xec, 0x20, 0xcb,
    0xb0, 0x23, 0xc3, 0xce, 0x30, 0xcc, 0x30, 0x0c, 0xab, 0x80, 0x28, 0x88, 0x78, 0x72, 0xde, 0xe7, 0x9d, 0xee, 0x0b, 0x27,
    0x27, 0xb9, 0xdf, 0x5f, 0xcf, 0xed, 0x9b, 0xcb, 0x92, 0x58, 0xf3, 0xf9, 0x63, 0xce, 0xa9, 0xba, 0xd5, 0x5d, 0x5d, 0xdf,
    0xee, 0xea, 0xea, 0xae, 0x6f, 0xfd, 0x9a, 0x88, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xa0, 0x12, 0xa5, 0x63, 0xd2,
    0x9e, 0x20, 0x83, 0x8e, 0x34, 0x12, 0xbf, 0x9e, 0xc3, 0xaf, 0xc8, 0xa2, 0xbd, 0xb1, 0xad, 0xcb, 0xa9, 0x24, 0x52, 0x53,
    0xc9, 0xa4, 0x14, 0x11, 0x32, 0x28, 0x29, 0x72, 0x4b, 0x50, 0x5b, 0xd4, 0xc0, 0xa3, 0x17, 0x75, 0x64, 0xfa, 0xe9, 0x9c,
    0x21, 0x8f, 0xc3, 0x3e, 0xc6, 0xc9, 0x34, 0x33, 0xf3, 0xc6, 0xd0, 0x54, 0xa4, 0x96, 0xe5, 0x4b, 0xba, 0xc7, 0xa4, 0x96,
    0xe7, 0x12, 0x9f, 0x4c, 0xf9, 0xfb, 0xfb, 0x8c, 0x3d, 0xa4, 0x52, 0xde, 0x68, 0x95, 0xca, 0x46, 0x89, 0x74, 0xca, 0xc9,
    0x12, 0x75, 0xcd, 0x12, 0x89, 0x33, 0x83, 0x96, 0x31, 0x69, 0x05, 0x5c, 0xc4, 0x38, 0x71, 0xfc, 0xa5, 0x58, 0x4f, 0x03,
    0x46, 0xd1, 0x85, 0xd4, 0xb8, 0xb7, 0x15, 0xe1, 0x4d, 0x66, 0x32, 0x81, 0xea, 0xec, 0xe3, 0xb4, 0x98, 0xbc, 0x14, 0xa6,
    0xb3, 0x88, 0x55, 0x22, 0x27, 0xc2, 0x42, 0x6e, 0x14, 0xa9, 0x19, 0xe4, 0x70, 0x87, 0xd8, 0xce, 0x32, 0x1e, 0x93, 0x75,
    0xea, 0xc8, 0x20, 0xe6, 0x31, 0x80, 0x11, 0xe2, 0xec, 0xf3, 0xf4, 0x5c, 0x44, 0x0f, 0xa1, 0xe7, 0x59, 0x1c, 0x66, 0x74,
    0x4c, 0xea, 0x95, 0x4c, 0xf4, 0x79, 0x5d, 0xfe, 0x3e, 0xcb, 0x68, 0xe1, 0x5b, 0xf8, 0x52, 0x9c, 0xc3, 0x8b, 0x59, 0x48,
    0x11, 0x9d, 0xc4, 0xef, 0x6f, 0x62, 0x37, 0x6f, 0xc4, 0xa4, 0xa6, 0x91, 0xcd, 0x02, 0xb6, 0xf3, 0xeb, 0x13, 0xa0, 0x7f,
    0x1e, 0xf5, 0xf8, 0x84, 0x2e, 0x31, 0xe9, 0x23, 0x39, 0x42, 0x3e, 0xdf, 0xb3, 0x43, 0x5e, 0x4f, 0x0f, 0x02, 0x9b, 0x39,
    0x3f, 0x26, 0x7d, 0x26, 0x97, 0xb1, 0x8e, 0xce, 0xbc, 0x2f, 0xca, 0x54, 0x66, 0x0f, 0x11, 0x96, 0x71, 0xa9, 0xc8, 0x9b,
    0x47, 0x2b, 0x71, 0x0d, 0xcc, 0xa3, 0xaf, 0x3c, 0x8e, 0x2a, 0x6c, 0x92, 0xe7, 0x4b, 0x45, 0xba, 0xf3, 0x37, 0x66, 0xd2,
    0x88, 0x14, 0xa9, 0xe7, 0x1e, 0xe6, 0x0b, 0x3d, 0x23, 0x0c, 0xe0, 0xd1, 0x50, 0xed, 0x78, 0x86, 0x71, 0x4d, 0x44, 0x78,
    0x9b, 0xde, 0x31, 0x69, 0x77, 0xfa, 0xe7, 0x44, 0x13, 0x56, 0xc7, 0xe4, 0xd4, 0x66, 0x0a, 0x2f, 0x08, 0xfd, 0xaf, 0x66,
    0x14, 0x11, 0xae, 0x61, 0xe9, 0x09, 0xd0, 0x7f, 0x2d, 0xb5, 0xf9, 0x90, 0x8e, 0xe2, 0xd7, 0xeb, 0xa8, 0xcb, 0x08, 0xee,
    0x16, 0x39, 0x97, 0x90, 0xc7, 0x2c, 0x5e, 0x11, 0xe7, 0xba, 0xd7, 0xf6, 0x6b, 0x79, 0x9f, 0x9b, 0x64, 0x9f, 0x96, 0x4f,
    0x3b, 0x76, 0x51, 0x56, 0xe4, 0x4d, 0xe7, 0x9a, 0x98, 0xb4, 0x9b, 0x59, 0x24, 0x74, 0x3c, 0x96, 0xb7, 0xd8, 0xe8, 0xe1,
    0x9f, 0x65, 0xad, 0xbc, 0x9b, 0xd9, 0x7d, 0x56, 0x6d, 0xd6, 0x91, 0x9e, 0x94, 0xf6, 0x4d, 0xa5, 0x88, 0xb3, 0x63, 0x52,
    0x1f, 0xe0, 0x4d, 0xff, 0xfc, 0xdb, 0x25, 0xcb, 0xf4, 0x16, 0xfa, 0x47, 0x69, 0xcc, 0xb2, 0x13, 0xa0, 0xff, 0x59, 0x94,
    0xa4, 0x2a, 0x65, 0x42, 0xe9, 0xdf, 0x82, 0x65, 0xbc, 0xc1, 0x39, 0xa2, 0x2f, 0x7d, 0x9e, 0x8d, 0x0c, 0xa5, 0x95, 0x71,
    0x87, 0x7e, 0x9a, 0xff, 0x33, 0xc6, 0x13, 0x19, 0xa4, 0x89, 0x7b, 0xc9, 0xe3, 0xe6, 0x91, 0x94, 0xe0, 0x5b, 0x32, 0x44,
    0xfa, 0x95, 0xa4, 0x52, 0x5f, 0xde, 0x51, 0x3d, 0x6e, 0xa5, 0x86, 0x54, 0xed, 0xbc, 0x24, 0xb5, 0xef, 0x15, 0xf2, 0x8a,
    0xf5, 0xf4, 0xef, 0xc8, 0x8a, 0x90, 0xfa, 0xa7, 0x33, 0x8d, 0x07, 0x4f, 0x80, 0xfe, 0x16, 0x9f, 0xf0, 0x33, 0x45, 0x1c,
    0x64, 0x0f, 0x57, 0x89, 0xd6, 0x9f, 0x0c, 0x74, 0x30, 0xda, 0xa0, 0x35, 0x1b, 0xd8, 0xc4, 0x39, 0xe2, 0x0e, 0x9c, 0xcf,
    0x5a, 0x7e, 0x4d, 0x77, 0x6a, 0xc6, 0x55, 0x83, 0xe9, 0xb4, 0x0e, 0xc8, 0x9d, 0xcf, 0xd5, 0xa7, 0xdc, 0xf8, 0xfa, 0x45,
    0x06, 0x4a, 0xfd, 0x77, 0x32, 0x92, 0x9a, 0xa1, 0xf4, 0x3f, 0x8b, 0x1c, 0x06, 0x24, 0xbd, 0x7e, 0x35, 0x38, 0x3d, 0xc4,
    0xaf, 0xed, 0xeb, 0xdf, 0xbb, 0x66, 0x0e, 0xf0, 0x03, 0x0f, 0x88, 0x9c, 0x15, 0xf4, 0xe5, 0x15, 0x46, 0x70, 0xad, 0x18,
    0x9d, 0x8d, 0xa1, 0x31, 0x5b, 0xd9, 0x25, 0x47, 0x80, 0xb1, 0xcc, 0x0d, 0x54, 0x78, 0x9a, 0x18, 0x31, 0x9c, 0x6c, 0x72,
    0xb8, 0x58, 0xea, 0x3f, 0xce, 0x1f, 0xb3, 0xec, 0x0c, 0xa1, 0xff, 0x3c, 0x9e, 0x48, 0x7a, 0xed, 0x52, 0x19, 0x22, 0xae,
    0x65, 0x9b, 0x4f, 0xa9, 0xc9, 0x20, 0x39, 0xce, 0x3a, 0x8f, 0x86, 0x64, 0x71, 0x3d, 0x9b, 0x62, 0x72, 0xea, 0xb2, 0x8e,
    0x0e, 0xfc, 0x49, 0xea, 0x7f, 0x3b, 0x53, 0xfc, 0xe7, 0xb3, 0x8f, 0xe3, 0xdc, 0xff, 0x78, 0xee, 0x0c, 0xdd, 0xd6, 0x27,
    0x93, 0x5f, 0x91, 0x2f, 0xd3, 0xdb, 0x32, 0x9b, 0x14, 0x5a, 0xb2, 0x22, 0x6e, 0xfd, 0xeb, 0x93, 0x6f, 0x8e, 0x30, 0x13,
    0x27, 0x9d, 0x83, 0xbc, 0x90, 0x94, 0x2d, 0x5d, 0xcb, 0x06, 0x56, 0xf3, 0x06, 0x33, 0x62, 0x72, 0x06, 0x92, 0xc5, 0x85,
    0x6c, 0x62, 0x93, 0xb8, 0xd3, 0xa6, 0xb1, 0x90, 0x0d, 0x7c, 0xc4, 0x76, 0x31, 0x46, 0x52, 0xf4, 0xf7, 0xc7, 0x4d, 0x9a,
    0x6a, 0xec, 0x37, 0xde, 0x24, 0x9c, 0x3c, 0x1e, 0x97, 0xcf, 0x16, 0xde, 0x93, 0xf4, 0x64, 0x36, 0x53, 0xc4, 0xcd, 0x71,
    0xeb, 0x7f, 0x1b, 0x87, 0x29, 0xa0, 0x80, 0xa9, 0x49, 0xae, 0x61, 0x99, 0xa4, 0x9d, 0x55, 0xf7, 0x02, 0x4b, 0xe4, 0x68,
    0x2a, 0xfa, 0xc4, 0xab, 0x7b, 0xf8, 0x14, 0x73, 0x64, 0xa6, 0x38, 0x9b, 0x5d, 0x9c, 0x6b, 0xe4, 0xbd, 0x66, 0xb4, 0xf5,
    0xc9, 0x64, 0x56, 0xc0, 0x1d, 0xa9, 0x9c, 0xff, 0x56, 0xec, 0x3f, 0x89, 0x30, 0x63, 0xc9, 0x44, 0x79, 0x88, 0x95, 0xf2,
    0x0c, 0xe8, 0xcb, 0xba, 0xc0, 0x77, 0x80, 0x27, 0xe7, 0xdd, 0xea, 0x9e, 0xff, 0x38, 0x8d, 0x83, 0xef, 0x76, 0x65, 0x4e,
    0xc0, 0x5e, 0xba, 0x89, 0xf7, 0x02, 0x29, 0x0c, 0xa2, 0xfa, 0x29, 0xd7, 0x1e, 0xf5, 0xc5, 0x9b, 0x1f, 0x87, 0xc3, 0xe1,
    0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0x23, 0xf9, 0xa4, 0x50, 0x27, 0xd0, 0x3b, 0x58,
    0x4d, 0xb8, 0xe3, 0x4a, 0x53, 0xdd, 0xa7, 0xbc, 0xf1, 0x3e, 0x5f, 0xbd, 0x6d, 0x4d, 0x3b, 0x5a, 0xa6, 0xaa, 0xe1, 0x78,
    0xac, 0x64, 0xd6, 0xae, 0x9c, 0x7c, 0x43, 0x3e, 0x8d, 0x9e, 0x71, 0xa6, 0x46, 0xa9, 0x4a, 0x1f, 0xb9, 0x9d, 0x86, 0x3e,
    0x75, 0x84, 0x6b, 0xe9, 0xf6, 0x80, 0xb9, 0x51, 0xcb, 0xa1, 0x59, 0x81, 0xf6, 0x34, 0x31, 0x6b, 0x90, 0x26, 0xd3, 0xbd,
    0x96, 0xa9, 0x66, 0xce, 0xb5, 0xa4, 0x72, 0x81, 0xdc, 0x57, 0x9a, 0xdf, 0x96, 0xaa, 0x54, 0xe9, 0x80, 0x96, 0x8e, 0xdd,
    0xfa, 0x0c, 0x96, 0x50, 0x64, 0xfa, 0x76, 0x3d, 0xef, 0x56, 0xec, 0x7b, 0xea, 0x66, 0x1c, 0x20, 0x9b, 0x6c, 0xc3, 0x73,
    0xf0, 0x1e, 0x4f, 0x4b, 0x17, 0x90, 0x57, 0x62, 0x0d, 0xdf, 0xc4, 0xe4, 0x94, 0x64, 0x1e, 0x0b, 0xd8, 0x46, 0x5b, 0x31,
    0x17, 0x36, 0x87, 0x85, 0xe4, 0x73, 0x9d, 0xf0, 0x26, 0x1c, 0xe2, 0xd5, 0x38, 0x53, 0xbd, 0xb3, 0xa8, 0x07, 0x5b, 0x78,
    0x5c, 0xb4, 0x56, 0x53, 0x3e, 0xf7, 0x89, 0x9d, 0x55, 0xab, 0xc3, 0x74, 0x3e, 0x97, 0x5e, 0x9f, 0x32, 0xac, 0xe0, 0x6b,
    0x0a, 0xb9, 0x47, 0xcc, 0x99, 0x6e, 0xe4, 0x1d, 0x56, 0xf0, 0x90, 0x6c, 0xe9, 0xef, 0x78, 0x4a, 0xb6, 0x57, 0x7b, 0xf6,
    0xb2, 0x94, 0x2d, 0x5c, 0x24, 0xf7, 0xb5, 0x9c, 0x05, 0x14, 0x09, 0x6f, 0x67, 0xb4, 0x54, 0xae, 0xf0, 0x5b, 0x36, 0xe3,
    0x7b, 0xbf, 0xad, 0x47, 0xc6, 0xf5, 0x1e, 0xda, 0x9b, 0x65, 0x6f, 0xc5, 0xd7, 0x46, 0xfe, 0x38, 0xe9, 0xda, 0x68, 0xc6,
    0xec, 0x80, 0x37, 0xfd, 0x45, 0x01, 0xef, 0xfa, 0x1f, 0xe6, 0xed, 0x98, 0xb4, 0x4b, 0xfd, 0x73, 0xa2, 0x1d, 0x13, 0x85,
    0x3f, 0x76, 0x86, 0xef, 0x6f, 0x9c, 0x23, 0xb6, 0x74, 0x9a, 0x74, 0xfb, 0xa9, 0xd4, 0x73, 0xf8, 0x9a, 0x31, 0xc6, 0xec,
    0x63, 0x05, 0x2e, 0xf3, 0xb9, 0x50, 0xe6, 0x76, 0x22, 0x57, 0xf4, 0x1a, 0xcd, 0xfc, 0x99, 0xe6, 0x16, 0x2c, 0x8c, 0xc9,
    0x69, 0xed, 0xb7, 0x79, 0x63, 0xb2, 0xc5, 0xb6, 0x2e, 0xe4, 0x3b, 0x3e, 0x31, 0xf4, 0xff, 0x94, 0x08, 0x7d, 0xf8, 0x50,
    0xe4, 0xdd, 0xc5, 0x17, 0xbe, 0x4f, 0x6d, 0x9c, 0x51, 0xea, 0x56, 0xb1, 0xaf, 0x66, 0xcc, 0x0d, 0x79, 0x0f, 0xb8, 0xd9,
    0x3f, 0x0b, 0x62, 0x69, 0x40, 0x81, 0x9c, 0x37, 0x6f, 0xc6, 0x7c, 0x9a, 0x1a, 0x3e, 0xb8, 0x77, 0xe5, 0xd5, 0x7f, 0x8c,
    0xa9, 0xdc, 0x22, 0x9c, 0xbe, 0xbb, 0xa8, 0xce, 0xcb, 0xfc, 0x3e, 0x26, 0xa7, 0x3b, 0xc3, 0x88, 0x50, 0x9d, 0x6d, 0xff,
    0xd2, 0x1d, 0xae, 0x35, 0x9b, 0x69, 0x60, 0x7a, 0xf0, 0x26, 0xf8, 0xbc, 0x6a, 0xcc, 0xc5, 0x0f, 0x92, 0x5a, 0x46, 0x7d,
    0x3a, 0x13, 0x85, 0x26, 0x59, 0x3c, 0x46, 0x0e, 0xab, 0xc4, 0xef, 0xbb, 0xf2, 0x36, 0x5b, 0x02, 0xf4, 0xef, 0x22, 0xaf,
    0xd7, 0x07, 0x4c, 0x57, 0x43, 0xb4, 0x54, 0x55, 0xe1, 0x13, 0x0a, 0xab, 0x7f, 0x1f, 0xf2, 0x0c, 0x0f, 0xec, 0xc7, 0x3c,
    0xc2, 0x67, 0xd4, 0x12, 0x7b, 0xc0, 0x77, 0x29, 0x74, 0x12, 0x5a, 0xfe, 0xc4, 0x6e, 0x72, 0xb8, 0xc4, 0xb8, 0xda, 0xf6,
    0xca, 0x7b, 0xe0, 0x7d, 0xec, 0x22, 0x47, 0x8c, 0x26, 0x1a, 0xb3, 0x81, 0xca, 0x3c, 0xc2, 0x92, 0x38, 0x57, 0x55, 0xe8,
    0xb5, 0x19, 0x11, 0x6e, 0x60, 0x1d, 0x7f, 0x08, 0xed, 0xda, 0xbd, 0x8a, 0x95, 0xbc, 0x45, 0x45, 0x99, 0x57, 0x9b, 0xbd,
    0x5c, 0x29, 0xf5, 0x9f, 0x4c, 0x4b, 0xa9, 0xff, 0x9b, 0xdc, 0xcd, 0x7a, 0xe9, 0x42, 0x6d, 0x4f, 0x01, 0xa3, 0x29, 0x92,
    0x4e, 0xf7, 0xe2, 0xf4, 0xaf, 0x22, 0x7c, 0x82, 0xcd, 0xd8, 0xcd, 0x28, 0x46, 0x09, 0xdd, 0x34, 0x97, 0xf2, 0x09, 0x2f,
    0x8a, 0xf4, 0x0b, 0x28, 0x24, 0x8d, 0x1c, 0xea, 0x89, 0xbe, 0x6c, 0xa8, 0x7f, 0xef, 0x8c, 0xf5, 0xaf, 0xb6, 0x63, 0x15,
    0x69, 0x74, 0x14, 0x5e, 0x9f, 0x68, 0x7f, 0x3a, 0x56, 0xde, 0x9d, 0xc7, 0x32, 0x8e, 0x7c, 0xb9, 0x72, 0xa0, 0x3f, 0xeb,
    0xf9, 0x9e, 0xdf, 0xc5, 0xb9, 0xaa, 0x42, 0xaf, 0xcd, 0x88, 0x8e, 0x49, 0x07, 0xb3, 0x28, 0x94, 0x9f, 0xa5, 0x1d, 0x2b,
    0x84, 0xc2, 0xc7, 0x18, 0xce, 0x60, 0xa9, 0x49, 0x16, 0x5f, 0x72, 0xb5, 0xd4, 0x7f, 0x29, 0x99, 0x8c, 0x14, 0x63, 0x1c,
    0xaf, 0xd4, 0x6c, 0x5a, 0xf2, 0x16, 0xc3, 0x93, 0xa6, 0xff, 0x37, 0x34, 0xa7, 0x79, 0x88, 0xf3, 0xbd, 0x2c, 0x07, 0x44,
    0x6a, 0x67, 0xb6, 0x92, 0xc7, 0x11, 0x43, 0x4b, 0xcf, 0x85, 0x1d, 0xdb, 0x2f, 0xf7, 0xf0, 0x7b, 0xec, 0x0c, 0xa3, 0xc7,
    0xfe, 0x98, 0xce, 0x22, 0xf5, 0x3a, 0x16, 0x92, 0xc2, 0x8d, 0xcc, 0x33, 0xfa, 0x8c, 0x1d, 0xf2, 0xde, 0xad, 0x57, 0x55,
    0x04, 0xad, 0xcd, 0x38, 0x3d, 0xd4, 0xd5, 0x5f, 0x4a, 0xae, 0x49, 0xfb, 0xbb, 0xd7, 0x24, 0xd3, 0xd0, 0x7f, 0x12, 0xd7,
    0xb1, 0x52, 0xec, 0xfb, 0x67, 0xf2, 0xd8, 0x2f, 0xaf, 0xb3, 0xa8, 0x92, 0xa7, 0x71, 0x38, 0xa1, 0xfe, 0x7f, 0xc7, 0xbf,
    0xd4, 0xff, 0x77, 0xe4, 0x73, 0x22, 0x5c, 0x14, 0x70, 0x87, 0x55, 0xd7, 0x7f, 0x13, 0xe6, 0x90, 0x4a, 0x1b, 0x31, 0x2e,
    0xbb, 0x8a, 0x05, 0xa4, 0x70, 0x83, 0x18, 0x1b, 0x79, 0xcf, 0x25, 0x7b, 0xe5, 0x53, 0x5e, 0xb4, 0x0e, 0x8d, 0x58, 0x2f,
    0xf7, 0xff, 0x5b, 0x73, 0xf5, 0xd4, 0xf1, 0x5c, 0x9b, 0x91, 0x98, 0x37, 0xb6, 0x2d, 0x43, 0xe9, 0x4d, 0x21, 0x43, 0x84,
    0x26, 0xf3, 0x28, 0x49, 0x2b, 0xa6, 0x9b, 0x4a, 0x5e, 0x4b, 0xae, 0xcc, 0x9b, 0x41, 0x0a, 0xd7, 0x33, 0xd3, 0x28, 0xd5,
    0x59, 0x68, 0x10, 0x46, 0xff, 0xd3, 0xf9, 0x8a, 0x4d, 0xec, 0xe0, 0xae, 0x50, 0xfa, 0xa7, 0x30, 0x9a, 0x3c, 0x0a, 0x65,
    0x1b, 0xfc, 0x85, 0x5c, 0xb6, 0x4a, 0xb7, 0xd7, 0x8d, 0x46, 0x4f, 0x52, 0x86, 0x39, 0x6c, 0x60, 0xbb, 0x5c, 0xf1, 0x56,
    0x81, 0x9d, 0x71, 0xfa, 0x3f, 0x93, 0xbb, 0x36, 0x23, 0x31, 0x6f, 0x6c, 0x03, 0x72, 0xc8, 0x20, 0x5d, 0xf4, 0x4c, 0x7d,
    0xfd, 0x11, 0x66, 0x05, 0xf6, 0x8b, 0xbc, 0xf6, 0x1c, 0xa2, 0x80, 0x75, 0xb4, 0x90, 0xcf, 0x33, 0x53, 0xc8, 0x65, 0x9b,
    0xf0, 0x55, 0x47, 0x4b, 0x2d, 0x15, 0x23, 0xdb, 0x66, 0xfc, 0x14, 0xca, 0x0f, 0x5a, 0x3e, 0x21, 0x27, 0x5a, 0x39, 0xb3,
    0x7f, 0x4c, 0x0f, 0xec, 0x39, 0x23, 0x46, 0x2f, 0x7f, 0xaa, 0xf9, 0x73, 0x13, 0xf3, 0xc6, 0xf6, 0x25, 0x87, 0x4d, 0x81,
    0x4e, 0xf4, 0xf0, 0x94, 0xff, 0x45, 0x39, 0x05, 0x1d, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1,
    0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0x91, 0x0c, 0x32, 0x02, 0x3c, 0x99, 0x96, 0xef, 0xb0, 0xa2, 0xef, 0xd9, 0xab, 0x2a,
    0x7c, 0x7c, 0x51, 0xdf, 0xa1, 0x76, 0x4c, 0x9c, 0x49, 0x75, 0x11, 0xcb, 0xad, 0x84, 0xbf, 0x9d, 0x92, 0x54, 0x13, 0x35,
    0xb3, 0xe6, 0xaa, 0xcb, 0xf9, 0xb5, 0xab, 0x2e, 0x9c, 0x5e, 0x69, 0x54, 0x31, 0xea, 0x66, 0x7b, 0x36, 0x4b, 0x50, 0x9d,
    0x0c, 0x73, 0xf6, 0xc1, 0x2a, 0x95, 0x16, 0x58, 0x2a, 0x85, 0xba, 0x7e, 0x4d, 0x62, 0xe7, 0xac, 0xa3, 0x2d, 0x74, 0x66,
    0x88, 0x56, 0x2d, 0x7b, 0x74, 0x46, 0x33, 0x43, 0x1c, 0x6f, 0xc5, 0xa3, 0x6e, 0x9a, 0x2a, 0x62, 0x86, 0x20, 0xdd, 0xf7,
    0xd3, 0xa4, 0x16, 0xb3, 0xf6, 0xfd, 0x08, 0x8b, 0xa4, 0x53, 0x30, 0xc8, 0x77, 0xe8, 0xcd, 0x3b, 0xd6, 0x13, 0x1e, 0x87,
    0x5a, 0x64, 0x73, 0x80, 0xb5, 0xbc, 0x24, 0xf7, 0xf4, 0x39, 0x05, 0xfc, 0x8f, 0x98, 0xb1, 0xdd, 0x40, 0x84, 0xe7, 0x78,
    0x47, 0xd4, 0x4c, 0xcf, 0x22, 0x0d, 0xe1, 0x2b, 0xdf, 0x11, 0x87, 0x98, 0xcf, 0x6f, 0xcf, 0x0f, 0x9c, 0x2e, 0xeb, 0x56,
    0x86, 0xa5, 0xfe, 0xf1, 0xdc, 0x23, 0x6a, 0x70, 0x98, 0x45, 0x6c, 0x93, 0x33, 0xa0, 0x76, 0x29, 0xcf, 0x7d, 0xe9, 0x95,
    0xba, 0x59, 0xce, 0x73, 0xcf, 0x23, 0x9b, 0x6d, 0xa2, 0xd4, 0x6d, 0x47, 0x5b, 0xe8, 0xaf, 0x21, 0x5a, 0xf5, 0x61, 0xdf,
    0x6b, 0x53, 0x85, 0x6f, 0x85, 0xfe, 0x1f, 0x1c, 0xad, 0xf5, 0x6a, 0x6a, 0xc7, 0xe4, 0xfd, 0x97, 0xef, 0x42, 0x68, 0x63,
    0x3a, 0x3b, 0x83, 0x5b, 0xb9, 0x38, 0xdf, 0x61, 0x3d, 0xe9, 0x71, 0x09, 0x8e, 0xf3, 0xd1, 0xcf, 0xd0, 0xbf, 0x1a, 0x85,
    0xe2, 0xfa, 0xb7, 0xf5, 0xf7, 0x3c, 0x64, 0x03, 0xf9, 0x51, 0xea, 0xff, 0x23, 0x77, 0xca, 0xba, 0x45, 0x8f, 0xa7, 0x11,
    0x6b, 0x8c, 0x33, 0xb0, 0x01, 0x85, 0x66, 0x2b, 0xa8, 0x52, 0xd1, 0x56, 0x68, 0x21, 0x63, 0x2e, 0x5e, 0xe7, 0x3b, 0x59,
    0x9a, 0x18, 0x6e, 0x4f, 0xdd, 0x42, 0x76, 0xab, 0x36, 0xf1, 0xbd, 0x14, 0xad, 0x99, 0x2c, 0x4a, 0x0d, 0x3a, 0xea, 0xce,
    0x2d, 0x94, 0x11, 0x74, 0x56, 0x71, 0x15, 0x5f, 0x19, 0x71, 0xf7, 0x8a, 0x6b, 0xe5, 0xe2, 0x7c, 0x27, 0xc9, 0xd4, 0xff,
    0xcf, 0xd2, 0x17, 0x6d, 0xeb, 0x3f, 0x9b, 0xeb, 0x99, 0xc0, 0x1a, 0xa9, 0xff, 0x14, 0xc6, 0xca, 0xba, 0x45, 0x8f, 0x47,
    0xb9, 0xa5, 0xa2, 0xfa, 0x97, 0xe4, 0x67, 0xb3, 0x15, 0x54, 0xa9, 0x68, 0x2b, 0xd4, 0x90, 0x67, 0x4d, 0x23, 0x36, 0x05,
    0xcc, 0x66, 0x87, 0xd5, 0xbf, 0x34, 0xfb, 0x28, 0xc9, 0x33, 0xfc, 0x56, 0x94, 0xba, 0x9f, 0xfe, 0xbc, 0xc7, 0xe5, 0x6c,
    0x96, 0x7b, 0xea, 0xc9, 0x02, 0xf2, 0x8b, 0x99, 0x8b, 0x3f, 0xc2, 0x68, 0xe9, 0x14, 0xf4, 0x8e, 0xfc, 0x2c, 0xfa, 0x88,
    0x78, 0x7e, 0xed, 0xd9, 0xc2, 0xbb, 0x8c, 0x4b, 0x9a, 0xfe, 0x07, 0xd8, 0x27, 0x5b, 0xcb, 0xd6, 0xff, 0x25, 0xde, 0xe2,
    0x23, 0xf2, 0xa5, 0xfe, 0x7f, 0x61, 0x3e, 0x8d, 0x42, 0xea, 0xbf, 0x85, 0x7a, 0xf4, 0x97, 0x1e, 0xf3, 0x20, 0xfd, 0xa7,
    0x52, 0x9f, 0xc1, 0xd2, 0xcf, 0x18, 0xe1, 0x7d, 0x96, 0x72, 0x45, 0x92, 0xf4, 0xf7, 0xa2, 0x5d, 0x37, 0x64, 0xac, 0xbc,
    0xd3, 0xdc, 0xc8, 0x4b, 0x6c, 0xa0, 0x17, 0x8b, 0x0c, 0x6f, 0xcf, 0xb7, 0xf4, 0x2f, 0x66, 0xfc, 0x77, 0x84, 0x6b, 0xa4,
    0x53, 0xd0, 0x3b, 0xf2, 0xb3, 0x79, 0x59, 0xd4, 0xa7, 0x3d, 0x73, 0x69, 0x45, 0x8f, 0xa4, 0xe9, 0x0f, 0x85, 0x32, 0x72,
    0xa7, 0xad, 0xff, 0xc3, 0xe4, 0xd2, 0x93, 0x3d, 0x52, 0xff, 0x31, 0x3c, 0xc3, 0x33, 0x21, 0xf5, 0x3f, 0xc8, 0x64, 0x86,
    0x8b, 0x08, 0xa4, 0xc1, 0xfa, 0xef, 0x64, 0x03, 0xd9, 0x62, 0x24, 0x17, 0x1d, 0xff, 0xdd, 0xcb, 0x76, 0xe9, 0xf5, 0x4c,
    0x44, 0xff, 0x57, 0xe9, 0x46, 0xae, 0x1c, 0x4f, 0xd6, 0x63, 0x38, 0x73, 0x18, 0xea, 0x97, 0x55, 0x0e, 0x9d, 0x03, 0xc2,
    0x39, 0x1b, 0xa6, 0xff, 0xaf, 0x2f, 0xf5, 0x4f, 0xbc, 0xff, 0x1f, 0x22, 0xaf, 0xbe, 0xd6, 0x72, 0x35, 0x89, 0xad, 0xff,
    0x93, 0xdc, 0x47, 0x0d, 0xbe, 0x97, 0xfa, 0x7f, 0xca, 0xf9, 0xcc, 0x4a, 0xa0, 0xff, 0x8f, 0x04, 0xb4, 0x82, 0xd5, 0xff,
    0x5b, 0xab, 0x23, 0xa2, 0xb4, 0x14, 0x2b, 0x9d, 0x8a, 0xd3, 0xbf, 0xbe, 0x6c, 0xd5, 0xbb, 0x19, 0x21, 0x62, 0x67, 0x46,
    0xc7, 0xf8, 0xf3, 0x19, 0xcc, 0x6c, 0x5e, 0x91, 0xb9, 0x8f, 0x32, 0x85, 0xed, 0xc6, 0x9a, 0xb3, 0xe2, 0x5a, 0xb9, 0x03,
    0x33, 0x49, 0xe1, 0xd6, 0x24, 0xe9, 0xff, 0x88, 0xef, 0xe1, 0x1c, 0x26, 0x22, 0x34, 0x47, 0x5b, 0x7f, 0xb9, 0x70, 0x12,
    0xda, 0xfa, 0xf7, 0xf3, 0xff, 0x1f, 0x34, 0xf4, 0x8f, 0xf0, 0xb5, 0xac, 0xb5, 0x77, 0x3c, 0xd7, 0x08, 0x67, 0x6e, 0x90,
    0xfe, 0xc7, 0x4a, 0x59, 0xad, 0x30, 0x51, 0x7e, 0xd9, 0xa1, 0x83, 0x1f, 0x8f, 0xfd, 0x4a, 0x31, 0x6a, 0xb4, 0x5b, 0xa8,
    0x39, 0xcb, 0x48, 0xa5, 0xad, 0xf4, 0x87, 0xd6, 0xe2, 0x90, 0xb9, 0x96, 0xab, 0x80, 0xce, 0x2c, 0x97, 0x91, 0xaf, 0x53,
    0xd9, 0xc4, 0x65, 0x4c, 0xa0, 0x5b, 0x42, 0xfa, 0xa7, 0xb3, 0x92, 0x5c, 0x5e, 0x0a, 0xa5, 0x7f, 0x26, 0x05, 0x1c, 0x66,
    0xa7, 0xef, 0x00, 0xff, 0xe7, 0x95, 0x8f, 0xab, 0x59, 0xcb, 0x4a, 0xf1, 0x24, 0x1d, 0x6d, 0xfd, 0x8e, 0x22, 0x36, 0xfc,
    0x11, 0xdf, 0xc3, 0x98, 0x2d, 0xf4, 0xef, 0x5f, 0x8c, 0xfe, 0x4f, 0xc8, 0x51, 0xd4, 0x24, 0x23, 0xaa, 0x66, 0x90, 0xfe,
    0xa5, 0xf9, 0x92, 0xcd, 0x6c, 0xa7, 0x8d, 0xb1, 0xa7, 0x2b, 0x58, 0x27, 0x7c, 0x80, 0xe9, 0xcc, 0x66, 0x23, 0xdb, 0x68,
    0x17, 0x42, 0xff, 0x54, 0xc6, 0x92, 0x4b, 0xa1, 0xf4, 0x80, 0xa6, 0xb0, 0xc7, 0xf8, 0x82, 0x45, 0xc4, 0x5f, 0xa3, 0x30,
    0x49, 0xae, 0x54, 0xbd, 0x95, 0x05, 0xfe, 0xca, 0xbe, 0xe5, 0x09, 0x7b, 0x9c, 0xd3, 0x93, 0xba, 0xca, 0xb8, 0xa2, 0x19,
    0x9d, 0xff, 0x44, 0x91, 0x58, 0x54, 0xcd, 0x77, 0xf8, 0x5d, 0x02, 0xb1, 0x0b, 0x13, 0xf1, 0x6c, 0x96, 0x4b, 0xc0, 0x37,
    0xeb, 0x38, 0xde, 0x9c, 0xc7, 0x24, 0x06, 0xb9, 0x76, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e,
    0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0xff, 0x76, 0x94, 0x3d, 0xea, 0xc9, 0xd4, 0x6e, 0x4a, 0x2b, 0x8e, 0x64, 0x3a, 0x15,
    0xa9, 0x28, 0x3c, 0x47, 0xa5, 0xcd, 0x37, 0xe5, 0xe5, 0xfd, 0x12, 0x25, 0x0c, 0x9f, 0x82, 0x4e, 0xbf, 0xc1, 0x9f, 0x01,
    0xd2, 0x71, 0x2c, 0xde, 0xe5, 0x02, 0x39, 0xcb, 0x30, 0x90, 0xc5, 0x4c, 0xa4, 0xae, 0xe1, 0xaf, 0x8c, 0x18, 0x31, 0x1b,
    0x16, 0xf2, 0xa9, 0xf9, 0xed, 0x30, 0xed, 0x26, 0x7d, 0x94, 0x6c, 0x26, 0x88, 0x2f, 0x5a, 0x47, 0x5b, 0xa1, 0xae, 0x3c,
    0xa2, 0x14, 0xfe, 0xc0, 0x7c, 0x7a, 0x8b, 0xf9, 0xb1, 0xa0, 0xda, 0x79, 0x2e, 0x4f, 0x6b, 0x96, 0xb9, 0x84, 0x74, 0x05,
    0x94, 0x88, 0x2b, 0xf2, 0x67, 0x94, 0x3b, 0x7d, 0x37, 0xe5, 0x15, 0x72, 0xae, 0x32, 0x1a, 0xb1, 0x33, 0x57, 0xcc, 0x99,
    0x7e, 0x46, 0x1e, 0x2b, 0x45, 0x94, 0x8b, 0x26, 0xe6, 0x37, 0x88, 0xa7, 0xb1, 0x92, 0x43, 0x5c, 0x26, 0x72, 0x2e, 0x61,
    0xbf, 0xe1, 0xa2, 0x09, 0xa2, 0x33, 0x39, 0xe2, 0x5c, 0xf3, 0xe2, 0x12, 0xd6, 0xa4, 0xaf, 0x88, 0x66, 0xd8, 0xde, 0xf0,
    0x48, 0x78, 0x65, 0x36, 0x52, 0x87, 0x67, 0x45, 0x34, 0xbf, 0x63, 0x1e, 0x8b, 0xd8, 0xd9, 0xc4, 0xa6, 0x6c, 0xa2, 0x2e,
    0x4f, 0xf9, 0x6d, 0x17, 0xab, 0xf2, 0x12, 0x56, 0xf8, 0xbe, 0xc1, 0x58, 0x47, 0xa6, 0x57, 0x6a, 0x80, 0x39, 0xa7, 0x6a,
    0x91, 0x2b, 0x7c, 0x13, 0x51, 0x7a, 0xf3, 0xa3, 0x38, 0xd3, 0x82, 0x66, 0x34, 0x63, 0xe3, 0xcb, 0xec, 0xa6, 0x3a, 0x59,
    0x01, 0x3e, 0xa1, 0x51, 0xfc, 0xb7, 0xd0, 0xff, 0x36, 0x63, 0x96, 0x6f, 0x9b, 0xf4, 0xd1, 0x44, 0x59, 0x2c, 0xf4, 0x3f,
    0x83, 0x35, 0xdc, 0xc0, 0x1c, 0x7a, 0x84, 0x3e, 0x03, 0x06, 0xf0, 0xa4, 0x48, 0x3d, 0x87, 0x6e, 0x0c, 0x0a, 0xd5, 0xc2,
    0xbd, 0xfc, 0xeb, 0xf1, 0x0c, 0x1a, 0x87, 0xd0, 0xbf, 0x17, 0x5f, 0xd1, 0x86, 0xae, 0x6c, 0x17, 0xbf, 0xaf, 0x41, 0x11,
    0xa9, 0xb2, 0x3d, 0xef, 0xf7, 0xf7, 0xd4, 0x30, 0xb4, 0xfe, 0x2d, 0xcc, 0xbe, 0xa9, 0xaa, 0xfc, 0x72, 0x7a, 0x18, 0xfd,
    0xbd, 0xb8, 0x84, 0xfd, 0xd8, 0xc1, 0x59, 0x46, 0x6e, 0x2d, 0xf6, 0x89, 0xbe, 0xc9, 0xd2, 0x3f, 0xc2, 0x9f, 0x65, 0xec,
    0x5b, 0x5b, 0xff, 0x7b, 0xfd, 0x78, 0xb0, 0xb5, 0x58, 0x9e, 0xc0, 0x7c, 0x69, 0x8a, 0x70, 0x20, 0x78, 0xb1, 0xb7, 0xfe,
    0x57, 0xb6, 0xf0, 0x17, 0x7c, 0xc0, 0x2c, 0x11, 0xe7, 0xd2, 0x76, 0xba, 0x46, 0xfb, 0xeb, 0xa7, 0xa5, 0x9b, 0x28, 0x87,
    0x2c, 0xb2, 0xc4, 0x75, 0x59, 0x99, 0xdb, 0xd9, 0x41, 0x73, 0x11, 0x4f, 0x3a, 0xd8, 0x53, 0x35, 0x89, 0x0f, 0x99, 0x2e,
    0x22, 0x6d, 0x95, 0x64, 0x2a, 0x53, 0x8d, 0x2f, 0x1b, 0x77, 0x62, 0x2a, 0x13, 0x4c, 0xfd, 0xbb, 0xf2, 0x5c, 0x5c, 0xad,
    0x78, 0x25, 0x3f, 0x04, 0x44, 0x8a, 0x1a, 0x26, 0xa2, 0xb2, 0x06, 0xe9, 0x6f, 0x45, 0x92, 0xb5, 0xf4, 0x8f, 0x1c, 0xf5,
    0x4f, 0x24, 0xe7, 0x4b, 0xa3, 0xf7, 0x31, 0xc6, 0x6f, 0x4d, 0xd5, 0xc2, 0xf9, 0x7e, 0x8f, 0x1d, 0xeb, 0x86, 0x6f, 0xe7,
    0x7f, 0x6f, 0xb7, 0x35, 0xb3, 0x42, 0xf4, 0xd7, 0x6d, 0xfd, 0xf8, 0x77, 0xb5, 0x85, 0x27, 0xb7, 0x31, 0x9f, 0x71, 0x90,
    0x91, 0xdc, 0x2f, 0xef, 0xb5, 0x5e, 0xa9, 0x76, 0xb2, 0x76, 0x05, 0xd4, 0xe1, 0x79, 0xa1, 0x66, 0x0a, 0x99, 0x4c, 0xe6,
    0x0e, 0x79, 0xb4, 0x95, 0xb9, 0x54, 0xc6, 0x6d, 0xf4, 0xf4, 0x6f, 0x48, 0x9e, 0xb9, 0x82, 0xe6, 0x9f, 0xd9, 0xc8, 0xbd,
    0x46, 0x4e, 0x0d, 0xf6, 0xcb, 0xad, 0xd8, 0xfa, 0xa7, 0xb1, 0xd7, 0xfc, 0x6a, 0xab, 0xd6, 0x3f, 0x99, 0x9c, 0xcb, 0x4e,
    0x56, 0xf1, 0x81, 0x6c, 0xe1, 0xf1, 0x7e, 0x2c, 0xfb, 0x1d, 0x86, 0xc7, 0x67, 0x1b, 0xd7, 0x87, 0xe8, 0xaf, 0x4b, 0xf1,
    0x85, 0xef, 0x26, 0xea, 0x22, 0xea, 0x50, 0xd3, 0x88, 0xf2, 0x1b, 0x8d, 0x1b, 0xbe, 0x39, 0xa0, 0x76, 0x0d, 0x0d, 0xc7,
    0xe0, 0x18, 0x43, 0x7f, 0x6f, 0x1c, 0xae, 0xf5, 0xdf, 0xca, 0x6a, 0xe9, 0x24, 0x8a, 0x84, 0xf4, 0x6c, 0xfe, 0xd1, 0xe8,
    0x1b, 0x6d, 0xfd, 0xbd, 0x88, 0xe1, 0x77, 0x9d, 0x34, 0xfd, 0x3d, 0x65, 0xd2, 0x03, 0x56, 0x2d, 0x54, 0x31, 0xbe, 0xaa,
    0xaf, 0xdd, 0x3a, 0x76, 0x7f, 0x1d, 0x75, 0xeb, 0xe8, 0x51, 0xb9, 0xad, 0x7f, 0x75, 0x9a, 0x52, 0x96, 0xcb, 0x59, 0x1c,
    0xd2, 0x53, 0x19, 0x5e, 0x7f, 0xd8, 0x1d, 0x10, 0xd1, 0x31, 0x5e, 0xfd, 0x2b, 0xb1, 0xcf, 0x78, 0xc2, 0x09, 0xd2, 0xbf,
    0x2b, 0x1f, 0x9d, 0x44, 0xfd, 0x6d, 0x27, 0xe7, 0x0a, 0x52, 0xb9, 0xd6, 0xf0, 0x64, 0x5a, 0xcf, 0x46, 0x56, 0x7f, 0x1d,
    0x84, 0xad, 0xff, 0x79, 0x6c, 0xe7, 0x39, 0xe6, 0xf1, 0xec, 0x71, 0xd7, 0x7f, 0x2b, 0x99, 0xe4, 0x07, 0x3e, 0x53, 0xc6,
    0xa3, 0x7f, 0x3b, 0x7e, 0x36, 0x9e, 0xbf, 0x83, 0xf4, 0xaf, 0xc2, 0x6e, 0xc3, 0xc7, 0x76, 0x72, 0xf5, 0x5f, 0xc8, 0x1c,
    0xbe, 0x2b, 0xc6, 0x0d, 0x1b, 0x6f, 0x7f, 0x9d, 0x98, 0xfe, 0xde, 0xf8, 0xf4, 0x51, 0xda, 0x8a, 0x71, 0x6b, 0xb0, 0xa7,
    0xf6, 0x10, 0x7b, 0xc4, 0x3b, 0x83, 0x20, 0xfd, 0xbd, 0xf1, 0xdf, 0x6f, 0x78, 0xf7, 0xb8, 0xb5, 0x66, 0x90, 0xfe, 0x11,
    0xe6, 0x70, 0xed, 0x29, 0xa7, 0x7f, 0x74, 0x2c, 0x7d, 0x46, 0xe8, 0x27, 0x8c, 0xb2, 0xa7, 0xec, 0x9b, 0xbb, 0x4e, 0x54,
    0x36, 0xef, 0x67, 0xc7, 0x9b, 0xcf, 0x18, 0x4c, 0x1b, 0x33, 0xd6, 0xee, 0x93, 0xfc, 0x29, 0x26, 0xad, 0x35, 0x6d, 0x7c,
    0x3f, 0xba, 0x7b, 0xe3, 0x9a, 0x2c, 0x86, 0x32, 0x81, 0xd1, 0x7c, 0x70, 0x52, 0xf6, 0xdd, 0xcb, 0x7f, 0xfa, 0xbd, 0xca,
    0x1c, 0x85, 0xf7, 0x8b, 0x49, 0x1b, 0xec, 0x97, 0x38, 0xc7, 0xe9, 0x96, 0x34, 0x4a, 0xd3, 0x95, 0x6e, 0x21, 0x63, 0xda,
    0x3b, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x7e, 0x79, 0x78, 0x0e, 0x4f,
    0x15, 0x23, 0xa6, 0x3b, 0xa3, 0x99, 0xcc, 0xef, 0x79, 0x5d, 0x46, 0x2b, 0x19, 0x62, 0xf8, 0x55, 0x6c, 0x67, 0xa4, 0x57,
    0x46, 0x3b, 0x70, 0x6c, 0x5f, 0xe4, 0x73, 0x3c, 0xc4, 0x6c, 0xfa, 0x8a, 0xbd, 0xf4, 0x67, 0x11, 0x7f, 0x95, 0x5f, 0x6d,
    0x2e, 0x6d, 0x7e, 0xcd, 0xbe, 0x39, 0x03, 0xfd, 0xb7, 0x93, 0xc3, 0xc4, 0xfc, 0xcb, 0x63, 0xbe, 0xcf, 0x72, 0x82, 0x98,
    0x9b, 0xe9, 0xcf, 0x35, 0x47, 0x9d, 0x30, 0xb1, 0xdf, 0xa1, 0x6b, 0xc0, 0x48, 0x52, 0xb9, 0x89, 0x97, 0x45, 0xf4, 0x9f,
    0xe8, 0xbe, 0xde, 0x13, 0xb5, 0x98, 0xea, 0x33, 0xcc, 0xa8, 0x65, 0x25, 0x31, 0x6f, 0x57, 0x56, 0xcc, 0xa8, 0x9d, 0x6b,
    0xb8, 0x66, 0x3d, 0x6f, 0x64, 0x1b, 0x3f, 0xd6, 0x64, 0x85, 0xb8, 0xe6, 0x44, 0xb2, 0xd9, 0x2b, 0xe7, 0x17, 0x87, 0xf0,
    0x0a, 0xcb, 0xe9, 0xce, 0x4f, 0x62, 0x6e, 0xdc, 0xf6, 0xab, 0xd8, 0xce, 0x48, 0xdb, 0x81, 0x63, 0xfb, 0x6c, 0x46, 0x33,
    0x96, 0x4b, 0xc4, 0x7c, 0x5a, 0x7d, 0xf2, 0xa9, 0x49, 0x4f, 0xfe, 0x28, 0xea, 0x7d, 0xb5, 0xf9, 0x6d, 0x72, 0x7b, 0x96,
    0xad, 0x21, 0x6b, 0xfd, 0xf9, 0x5e, 0xe5, 0xa6, 0xfa, 0x0d, 0xbd, 0x39, 0x93, 0xd3, 0xd8, 0x2a, 0xe7, 0xfb, 0xa7, 0x71,
    0x3f, 0xeb, 0x85, 0xd7, 0x22, 0x83, 0xed, 0xa4, 0xd0, 0x4b, 0x7c, 0xed, 0x3c, 0x9d, 0x4c, 0x32, 0x99, 0x6a, 0xc4, 0x6c,
    0x7a, 0x8d, 0x3c, 0x11, 0xa3, 0x46, 0xcd, 0xd0, 0x8e, 0x27, 0x97, 0x86, 0x62, 0x0b, 0xad, 0x58, 0x43, 0x01, 0x6d, 0xd8,
    0x6d, 0xfa, 0x70, 0xe2, 0x9b, 0x5f, 0xf6, 0xe2, 0xec, 0x78, 0xfb, 0xd5, 0x71, 0x76, 0x2c, 0xbf, 0x4a, 0xd4, 0x4d, 0x59,
    0x4d, 0x38, 0x23, 0x6d, 0x07, 0x8e, 0xed, 0xb3, 0x19, 0x2d, 0x1d, 0x36, 0xde, 0x95, 0xba, 0x83, 0x67, 0x84, 0xcb, 0x3b,
    0x51, 0xfd, 0x23, 0x6c, 0xa1, 0x26, 0xc3, 0xe5, 0xb7, 0xa3, 0x3b, 0xf0, 0x02, 0xcb, 0xb9, 0x83, 0x1c, 0xb9, 0xcd, 0xfa,
    0x1c, 0xf6, 0x3d, 0x67, 0xb1, 0x2c, 0xe1, 0x62, 0xc6, 0x18, 0x31, 0x80, 0xba, 0xb0, 0x44, 0x9e, 0x4d, 0xb5, 0x28, 0x94,
    0xe9, 0x7a, 0x86, 0xfe, 0x41, 0x46, 0x88, 0xd4, 0x17, 0xb9, 0x9d, 0x5b, 0xd8, 0x2f, 0x1d, 0x68, 0xc9, 0xd3, 0xdf, 0x6a,
    0xc9, 0x63, 0x11, 0xd3, 0x76, 0x86, 0x70, 0xe0, 0xd8, 0x3e, 0x9b, 0xd1, 0xa6, 0x8b, 0xa5, 0x0e, 0xaf, 0xb1, 0xf5, 0x68,
    0xf4, 0xd3, 0x7f, 0xd4, 0x63, 0x31, 0xfb, 0x98, 0x2a, 0xbf, 0x41, 0x1f, 0x14, 0x63, 0xed, 0x75, 0x7a, 0xb2, 0x45, 0x44,
    0xa1, 0xf5, 0x7e, 0xff, 0x0e, 0x73, 0x79, 0x43, 0x44, 0xc2, 0x8d, 0xf6, 0xd6, 0xfb, 0xe5, 0x97, 0xa0, 0x23, 0xbc, 0x40,
    0x3f, 0x8a, 0xe4, 0xfc, 0xf1, 0x05, 0x14, 0x19, 0xdf, 0xe6, 0xae, 0xca, 0x5e, 0x59, 0x42, 0xeb, 0xff, 0x3c, 0xaf, 0x25,
    0x65, 0x04, 0x90, 0x4c, 0xfd, 0xdb, 0xfa, 0x6e, 0xca, 0x96, 0xac, 0x08, 0xe1, 0xc0, 0xb1, 0x7d, 0x36, 0x96, 0xfe, 0xf5,
    0xe9, 0xe3, 0xf7, 0x74, 0xd9, 0x62, 0x2d, 0xc9, 0xdd, 0x2c, 0x26, 0x53, 0xba, 0x16, 0x5b, 0xf8, 0x35, 0xd0, 0x7e, 0x9e,
    0xeb, 0x59, 0x29, 0xbf, 0x59, 0xec, 0x8d, 0x27, 0x56, 0xf3, 0x14, 0xd9, 0x46, 0x24, 0xc5, 0x2c, 0xde, 0x66, 0x87, 0xf4,
    0x67, 0x5f, 0x4e, 0x21, 0xd3, 0xe4, 0x6a, 0x97, 0x6f, 0x02, 0x62, 0xf2, 0x4e, 0x93, 0x8e, 0x6e, 0xad, 0x7f, 0x36, 0xcd,
    0x4f, 0x39, 0xfd, 0x4b, 0x31, 0xd9, 0x88, 0xb3, 0x66, 0x3b, 0x70, 0x6c, 0x9f, 0x8d, 0xa5, 0x7f, 0x39, 0x16, 0xb1, 0x86,
    0x6d, 0x74, 0x0d, 0xd5, 0xff, 0x97, 0x62, 0x01, 0xb9, 0x7c, 0x28, 0xf5, 0x2f, 0xcd, 0x01, 0xd3, 0x2f, 0xbd, 0x86, 0x16,
    0xcc, 0xa0, 0xa3, 0xc8, 0x69, 0xc0, 0x76, 0xca, 0xd3, 0x5f, 0x46, 0x7a, 0x4e, 0x65, 0x17, 0x4f, 0x88, 0xf4, 0xb6, 0xfc,
    0xcd, 0x70, 0x55, 0x95, 0xe2, 0x66, 0x36, 0xcb, 0x73, 0x49, 0xeb, 0x9f, 0xc5, 0x30, 0xc3, 0x9f, 0x97, 0x0c, 0xfd, 0x13,
    0x47, 0xc7, 0x59, 0xf3, 0xce, 0x19, 0xcb, 0x81, 0xe3, 0xf9, 0x6c, 0xea, 0x85, 0xf4, 0x59, 0x55, 0x92, 0x31, 0xaf, 0x83,
    0xf4, 0xf7, 0xf6, 0x93, 0x7e, 0x02, 0x9f, 0xac, 0x72, 0xe5, 0x1a, 0x35, 0x9b, 0xca, 0x2c, 0x63, 0xbc, 0x1c, 0xd5, 0x5b,
    0x31, 0x23, 0x8b, 0xe4, 0x19, 0x76, 0xb2, 0xf5, 0x0f, 0x1a, 0x7d, 0xd9, 0x84, 0xd5, 0xdf, 0xe2, 0x52, 0x56, 0x91, 0xca,
    0x5a, 0x79, 0x2f, 0x3f, 0x91, 0xd4, 0x25, 0x2f, 0x81, 0x52, 0x73, 0xb9, 0x2e, 0x6e, 0xfd, 0xf5, 0x6f, 0xc3, 0x11, 0xec,
    0x2f, 0x4c, 0x26, 0x35, 0x8b, 0x71, 0xa4, 0x57, 0x10, 0x51, 0x36, 0x13, 0x21, 0x95, 0x59, 0xe4, 0x1b, 0xb1, 0xf7, 0x4f,
    0x24, 0xe7, 0x87, 0x70, 0xe0, 0xff, 0xbd, 0xee, 0x79, 0x5c, 0x1c, 0xb7, 0xfe, 0xe3, 0x43, 0xb9, 0x59, 0x7f, 0x39, 0xa4,
    0xc4, 0xf5, 0xe6, 0xe3, 0x54, 0xe4, 0x42, 0x23, 0xce, 0xb3, 0xd6, 0xff, 0x9e, 0x53, 0xe0, 0x2c, 0x77, 0x24, 0x77, 0x35,
    0xfe, 0x0e, 0x7a, 0x88, 0x98, 0xf2, 0x4a, 0xff, 0xa6, 0x4c, 0x11, 0x2b, 0x09, 0x1c, 0xff, 0xde, 0x64, 0xf2, 0xba, 0xf8,
    0x1a, 0x42, 0x1f, 0xb1, 0x9e, 0x74, 0x28, 0x0f, 0x24, 0x69, 0xd5, 0xa4, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3,
    0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87,
    0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x70, 0x38, 0x1c, 0x0e, 0x87, 0xc3, 0xe1, 0x38, 0x55, 0x88, 0xfe,
    0xb9, 0x76, 0x70, 0xfa, 0x3b, 0x7e, 0xb1, 0xfa, 0xff, 0x3f };

// Font glyphs rectangles data (on atlas)
static const Rectangle cyberFontRecs[95] = {
    { 4, 4, 5 , 13 },
    { 17, 4, 3 , 10 },
    { 28, 4, 4 , 5 },
    { 40, 4, 6 , 8 },
    { 54, 4, 5 , 12 },
    { 67, 4, 6 , 10 },
    { 81, 4, 6 , 10 },
    { 95, 4, 2 , 5 },
    { 105, 4, 4 , 12 },
    { 117, 4, 5 , 12 },
    { 130, 4, 6 , 5 },
    { 144, 4, 5 , 5 },
    { 157, 4, 3 , 5 },
    { 168, 4, 5 , 2 },
    { 181, 4, 3 , 3 },
    { 192, 4, 5 , 12 },
    { 205, 4, 5 , 10 },
    { 218, 4, 4 , 9 },
    { 230, 4, 5 , 9 },
    { 4, 25, 6 , 10 },
    { 18, 25, 5 , 9 },
    { 31, 25, 5 , 10 },
    { 44, 25, 5 , 10 },
    { 57, 25, 5 , 9 },
    { 70, 25, 5 , 10 },
    { 83, 25, 5 , 9 },
    { 96, 25, 3 , 7 },
    { 107, 25, 3 , 9 },
    { 118, 25, 6 , 7 },
    { 132, 25, 5 , 4 },
    { 145, 25, 5 , 7 },
    { 158, 25, 5 , 10 },
    { 171, 25, 5 , 10 },
    { 184, 25, 6 , 9 },
    { 198, 25, 6 , 9 },
    { 212, 25, 5 , 10 },
    { 225, 25, 5 , 9 },
    { 238, 25, 5 , 9 },
    { 4, 46, 4 , 9 },
    { 16, 46, 5 , 10 },
    { 29, 46, 5 , 9 },
    { 42, 46, 5 , 9 },
    { 55, 46, 5 , 10 },
    { 68, 46, 5 , 9 },
    { 81, 46, 4 , 9 },
    { 93, 46, 6 , 9 },
    { 107, 46, 5 , 9 },
    { 120, 46, 5 , 10 },
    { 133, 46, 6 , 9 },
    { 147, 46, 5 , 11 },
    { 160, 46, 6 , 9 },
    { 174, 46, 5 , 10 },
    { 187, 46, 5 , 9 },
    { 200, 46, 5 , 10 },
    { 213, 46, 6 , 9 },
    { 227, 46, 6 , 9 },
    { 241, 46, 6 , 9 },
    { 4, 67, 6 , 9 },
    { 18, 67, 5 , 9 },
    { 31, 67, 4 , 12 },
    { 43, 67, 5 , 12 },
    { 56, 67, 4 , 12 },
    { 68, 67, 6 , 5 },
    { 82, 67, 5 , 1 },
    { 95, 67, 4 , 4 },
    { 107, 67, 5 , 7 },
    { 120, 67, 5 , 10 },
    { 133, 67, 5 , 7 },
    { 146, 67, 5 , 10 },
    { 159, 67, 5 , 7 },
    { 172, 67, 6 , 9 },
    { 186, 67, 5 , 9 },
    { 199, 67, 5 , 9 },
    { 212, 67, 5 , 9 },
    { 225, 67, 5 , 12 },
    { 238, 67, 5 , 9 },
    { 4, 88, 5 , 9 },
    { 17, 88, 6 , 6 },
    { 31, 88, 5 , 6 },
    { 44, 88, 5 , 7 },
    { 57, 88, 5 , 9 },
    { 70, 88, 5 , 9 },
    { 83, 88, 4 , 6 },
    { 95, 88, 5 , 7 },
    { 108, 88, 6 , 10 },
    { 122, 88, 5 , 7 },
    { 135, 88, 6 , 6 },
    { 149, 88, 6 , 6 },
    { 163, 88, 5 , 6 },
    { 176, 88, 5 , 9 },
    { 189, 88, 5 , 6 },
    { 202, 88, 5 , 12 },
    { 215, 88, 2 , 12 },
    { 225, 88, 4 , 12 },
    { 237, 88, 6 , 3 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo cyberFontGlyphs[95] = {
    { 32, 0, 10, 5, { 0 }},
    { 33, 1, 1, 5, { 0 }},
    { 34, 1, 1, 5, { 0 }},
    { 35, 0, 2, 5, { 0 }},
    { 36, 0, 0, 5, { 0 }},
    { 37, 0, 1, 5, { 0 }},
    { 38, 0, 1, 5, { 0 }},
    { 39, 2, 1, 5, { 0 }},
    { 40, 1, 0, 5, { 0 }},
    { 41, 0, 0, 5, { 0 }},
    { 42, 0, 1, 5, { 0 }},
    { 43, 0, 4, 5, { 0 }},
    { 44, 1, 8, 5, { 0 }},
    { 45, 0, 5, 5, { 0 }},
    { 46, 1, 8, 5, { 0 }},
    { 47, 0, 0, 5, { 0 }},
    { 48, 0, 1, 5, { 0 }},
    { 49, 0, 1, 5, { 0 }},
    { 50, 0, 1, 5, { 0 }},
    { 51, 0, 1, 5, { 0 }},
    { 52, 0, 1, 5, { 0 }},
    { 53, 0, 1, 5, { 0 }},
    { 54, 0, 1, 5, { 0 }},
    { 55, 0, 1, 5, { 0 }},
    { 56, 0, 1, 5, { 0 }},
    { 57, 0, 1, 5, { 0 }},
    { 58, 1, 4, 5, { 0 }},
    { 59, 1, 4, 5, { 0 }},
    { 60, 0, 3, 5, { 0 }},
    { 61, 0, 4, 5, { 0 }},
    { 62, 0, 3, 5, { 0 }},
    { 63, 0, 1, 5, { 0 }},
    { 64, 0, 1, 5, { 0 }},
    { 65, 0, 1, 5, { 0 }},
    { 66, 0, 1, 5, { 0 }},
    { 67, 0, 1, 5, { 0 }},
    { 68, 0, 1, 5, { 0 }},
    { 69, 0, 1, 5, { 0 }},
    { 70, 1, 1, 5, { 0 }},
    { 71, 0, 1, 5, { 0 }},
    { 72, 0, 1, 5, { 0 }},
    { 73, 0, 1, 5, { 0 }},
    { 74, 0, 1, 5, { 0 }},
    { 75, 0, 1, 5, { 0 }},
    { 76, 1, 1, 5, { 0 }},
    { 77, 0, 1, 5, { 0 }},
    { 78, 0, 1, 5, { 0 }},
    { 79, 0, 1, 5, { 0 }},
    { 80, 0, 1, 5, { 0 }},
    { 81, 0, 1, 5, { 0 }},
    { 82, 0, 1, 5, { 0 }},
    { 83, 0, 1, 5, { 0 }},
    { 84, 0, 1, 5, { 0 }},
    { 85, 0, 1, 5, { 0 }},
    { 86, 0, 1, 5, { 0 }},
    { 87, 0, 1, 5, { 0 }},
    { 88, 0, 1, 5, { 0 }},
    { 89, 0, 1, 5, { 0 }},
    { 90, 0, 1, 5, { 0 }},
    { 91, 1, 0, 5, { 0 }},
    { 92, 0, 0, 5, { 0 }},
    { 93, 1, 0, 5, { 0 }},
    { 94, 0, 1, 5, { 0 }},
    { 95, 0, 10, 5, { 0 }},
    { 96, 0, 1, 5, { 0 }},
    { 97, 0, 4, 5, { 0 }},
    { 98, 0, 1, 5, { 0 }},
    { 99, 0, 4, 5, { 0 }},
    { 100, 0, 1, 5, { 0 }},
    { 101, 0, 4, 5, { 0 }},
    { 102, 0, 1, 5, { 0 }},
    { 103, 0, 4, 5, { 0 }},
    { 104, 0, 1, 5, { 0 }},
    { 105, 0, 1, 5, { 0 }},
    { 106, 0, 1, 5, { 0 }},
    { 107, 0, 1, 5, { 0 }},
    { 108, 0, 1, 5, { 0 }},
    { 109, 0, 4, 5, { 0 }},
    { 110, 0, 4, 5, { 0 }},
    { 111, 0, 4, 5, { 0 }},
    { 112, 0, 4, 5, { 0 }},
    { 113, 0, 4, 5, { 0 }},
    { 114, 1, 4, 5, { 0 }},
    { 115, 0, 4, 5, { 0 }},
    { 116, 0, 1, 5, { 0 }},
    { 117, 0, 4, 5, { 0 }},
    { 118, 0, 4, 5, { 0 }},
    { 119, 0, 4, 5, { 0 }},
    { 120, 0, 4, 5, { 0 }},
    { 121, 0, 4, 5, { 0 }},
    { 122, 0, 4, 5, { 0 }},
    { 123, 0, 0, 5, { 0 }},
    { 124, 2, 0, 5, { 0 }},
    { 125, 1, 0, 5, { 0 }},
    { 126, 0, 5, 5, { 0 }},
};

// Style loading function: Cyber
static void GuiLoadStyleCyber(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < CYBER_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(cyberStyleProps[i].controlId, cyberStyleProps[i].propertyId, cyberStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int cyberFontDataSize = 0;
    unsigned char *data = DecompressData(cyberFontData, CYBER_STYLE_FONT_ATLAS_COMP_SIZE, &cyberFontDataSize);
    Image imFont = { data, 256, 128, 1, 2 };

    Font font = { 0 };
    font.baseSize = 14;
    font.glyphCount = 95;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)RAYGUI_MALLOC(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, cyberFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, cyberFontGlyphs, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    Rectangle fontWhiteRec = { 510, 254, 1, 1 };
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
