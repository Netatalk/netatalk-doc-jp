/*
DO NOT EDIT BY HAND!!!

This file is generated by
 contrib/shell_utils/make-casetable.pl UnicodeData.txt utf16_casetable.h utf16_case.c

UnicodeData.txt is got from
http://www.unicode.org/Public/UNIDATA/UnicodeData.txt
*/

#include <stdint.h>
#include <atalk/unicode.h>
#include "utf16_casetable.h"

/*******************************************************************
 Convert a wide character to upper case.
*******************************************************************/
ucs2_t toupper_w(ucs2_t val)
{
    if ( val <= 0x02BF)
        return upper_table_1[val];

    if ( val >= 0x0340 && val <= 0x05BF)
        return upper_table_2[val-0x0340];

    if ( val >= 0x1D40 && val <= 0x1D7F)
        return upper_table_3[val-0x1D40];

    if ( val >= 0x1E00 && val <= 0x1FFF)
        return upper_table_4[val-0x1E00];

    if ( val >= 0x2140 && val <= 0x21BF)
        return upper_table_5[val-0x2140];

    if ( val >= 0x24C0 && val <= 0x24FF)
        return upper_table_6[val-0x24C0];

    if ( val >= 0x2C00 && val <= 0x2D3F)
        return upper_table_7[val-0x2C00];

    if ( val >= 0xA640 && val <= 0xA6BF)
        return upper_table_8[val-0xA640];

    if ( val >= 0xA700 && val <= 0xA7BF)
        return upper_table_9[val-0xA700];

    if ( val >= 0xFF40 && val <= 0xFF7F)
        return upper_table_10[val-0xFF40];

	return (val);
}

/*******************************************************************
 Convert a surrogate pair to upper case.
*******************************************************************/
uint32_t toupper_sp(uint32_t val)
{
    if ( val >= 0xD801DC00 && val <= 0xD801DC7F)
        return upper_table_sp_1[val-0xD801DC00];

    if ( val >= 0xD806DCC0 && val <= 0xD806DCFF)
        return upper_table_sp_2[val-0xD806DCC0];

	return (val);
}

/*******************************************************************
 Convert a wide character to lower case.
*******************************************************************/
ucs2_t tolower_w(ucs2_t val)
{
    if ( val <= 0x007F)
        return lower_table_1[val];

    if ( val >= 0x00C0 && val <= 0x027F)
        return lower_table_2[val-0x00C0];

    if ( val >= 0x0340 && val <= 0x057F)
        return lower_table_3[val-0x0340];

    if ( val >= 0x1080 && val <= 0x10FF)
        return lower_table_4[val-0x1080];

    if ( val >= 0x1E00 && val <= 0x1FFF)
        return lower_table_5[val-0x1E00];

    if ( val >= 0x2100 && val <= 0x21BF)
        return lower_table_6[val-0x2100];

    if ( val >= 0x2480 && val <= 0x24FF)
        return lower_table_7[val-0x2480];

    if ( val >= 0x2C00 && val <= 0x2CFF)
        return lower_table_8[val-0x2C00];

    if ( val >= 0xA640 && val <= 0xA6BF)
        return lower_table_9[val-0xA640];

    if ( val >= 0xA700 && val <= 0xA7BF)
        return lower_table_10[val-0xA700];

    if ( val >= 0xFF00 && val <= 0xFF3F)
        return lower_table_11[val-0xFF00];

	return (val);
}

/*******************************************************************
 Convert a surrogate pair to lower case.
*******************************************************************/
uint32_t tolower_sp(uint32_t val)
{
    if ( val >= 0xD801DC00 && val <= 0xD801DC3F)
        return lower_table_sp_1[val-0xD801DC00];

    if ( val >= 0xD806DC80 && val <= 0xD806DCBF)
        return lower_table_sp_2[val-0xD806DC80];

	return (val);
}

/* EOF */
