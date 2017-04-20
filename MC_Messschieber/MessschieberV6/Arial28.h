

/*
 *
 * Arial28
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial28.h
 * Date                : 18.06.2014
 * Font size in bytes  : 3399
 * Font width          : 14
 * Font height         : 20
 * Font first char     : 45
 * Font last char      : 58
 * Font used chars     : 13
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef ARIAL28_H
#define ARIAL28_H

#define ARIAL28_WIDTH 14
#define ARIAL28_HEIGHT 20

const static uint8_t Arial28[] PROGMEM = {
    0x0D, 0x47, // size
    0x0E, // width
    0x14, // height
    0x2D, // first char
    0x0D, // char count
    
    // char widths
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xE0, 0xFC, 0x1E, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06, 0x1E, 0xFC, 0xE0, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x30, 0x70, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x70, 0x30, 0x00, // 48
    0x60, 0x70, 0x30, 0x38, 0x1C, 0x1C, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x30, 0x3C, 0x0E, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x60, 0x30, 0x18, 0x0E, 0x07, 0x03, 0x00, 0xC0, 0xE0, 0xF0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 50
    0x18, 0x1C, 0x0E, 0x07, 0x03, 0x03, 0x03, 0x03, 0x87, 0xC6, 0xFC, 0x78, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0E, 0xFC, 0xF8, 0x00, 0x30, 0x70, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x70, 0x30, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x38, 0x1C, 0x0E, 0xFF, 0xFF, 0x00, 0x70, 0x78, 0x7C, 0x67, 0x63, 0x61, 0x60, 0x60, 0x60, 0x60, 0xFF, 0xFF, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, // 52
    0x80, 0xFC, 0xBF, 0x83, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x83, 0x83, 0x03, 0x00, 0xC3, 0xC3, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFC, 0x00, 0x30, 0x70, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x70, 0x10, 0x00, // 53
    0xC0, 0xF8, 0x3C, 0x0E, 0x06, 0x83, 0x83, 0x83, 0x83, 0x07, 0x0E, 0x1C, 0x18, 0x7F, 0xFF, 0x86, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x07, 0xFE, 0xF8, 0x00, 0x10, 0x30, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x70, 0x30, 0x00, // 54
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0xE3, 0x33, 0x1B, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0x78, 0xFE, 0x86, 0x03, 0x03, 0x03, 0x03, 0x03, 0x86, 0xFE, 0x78, 0x00, 0xF0, 0xFC, 0x0E, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0E, 0xFC, 0xF0, 0x00, 0x30, 0x70, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x70, 0x30, 0x00, // 56
    0xF0, 0xFC, 0x0E, 0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06, 0x0E, 0xFC, 0xE0, 0x81, 0x87, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x08, 0x0C, 0xC6, 0xFF, 0x3F, 0x10, 0x30, 0x70, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x30, 0x10, 0x00 // 57
    
};

#endif
