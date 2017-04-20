

/*
 *
 * Arial38
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial38.h
 * Date                : 18.06.2014
 * Font size in bytes  : 5554
 * Font width          : 15
 * Font height         : 27
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

#ifndef ARIAL38_H
#define ARIAL38_H

#define ARIAL38_WIDTH 15
#define ARIAL38_HEIGHT 27

const static uint8_t Arial38[] PROGMEM = {
    0x15, 0xB2, // size
    0x0F, // width
    0x1B, // height
    0x2D, // first char
    0x0D, // char count
    
    // char widths
    0x0B, 0x03, 0x0B, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
    0x12, 0x12, 0x12, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, // 46
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFF, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0x00, 0xF0, 0xF8, 0xFC, 0x1E, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x1E, 0xFC, 0xFC, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0x7F, 0xFF, 0xF8, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, // 48
    0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0x78, 0x3C, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0xC0, 0xF8, 0xFC, 0x3E, 0x0E, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0E, 0x3E, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x7C, 0x3F, 0x0F, 0x03, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x78, 0x3C, 0x1C, 0x0E, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, // 50
    0x60, 0x78, 0x7C, 0x3E, 0x0E, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x1E, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x38, 0x38, 0x3C, 0x3C, 0x7E, 0xE7, 0xE7, 0xC1, 0x00, 0x00, 0x18, 0x78, 0xF8, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xFF, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0x7C, 0x3E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x3E, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, // 52
    0x00, 0x80, 0xFC, 0xFF, 0x7F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x30, 0x3F, 0x3F, 0x3F, 0x1C, 0x0C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0x1C, 0x7C, 0xF8, 0xF0, 0xC0, 0x00, 0x38, 0xF8, 0xF8, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xFF, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, // 53
    0x00, 0xE0, 0xF0, 0xF8, 0x3C, 0x1E, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0E, 0x3E, 0x7C, 0x78, 0x60, 0xFE, 0xFF, 0xFF, 0x70, 0x38, 0x1C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1E, 0x3C, 0x78, 0xF8, 0xE0, 0x80, 0x07, 0x3F, 0xFF, 0xF0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xFF, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00, // 54
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xC7, 0xE7, 0x77, 0x3F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0xFE, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF8, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0xF0, 0xF8, 0xFC, 0x1E, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x1E, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0xC1, 0xE7, 0xEF, 0x7E, 0x7C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x7C, 0x7E, 0xEF, 0xC7, 0x83, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xC1, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE1, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00, // 56
    0xC0, 0xF0, 0xFC, 0x3E, 0x1F, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x0E, 0x1C, 0xF8, 0xF0, 0xC0, 0x00, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xE0, 0x70, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0xF0, 0xF0, 0xC1, 0x81, 0x03, 0x03, 0x03, 0x03, 0x03, 0x81, 0x81, 0xC0, 0xF8, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00 // 57
    
};

#endif