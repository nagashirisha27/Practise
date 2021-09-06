#include "char_type.h"

char_type_t find_char_type(const char input_char)
{
    char_type_t type;
    if(input_char >= 65 && input_char <= 90)
    {
        if(input_char=='A'||input_char=='E'||input_char=='I'||input_char=='O'||input_char=='U')
          type=UPPER_CASE_VOWEL;
        else
          type=UPPER_CASE_CONSONANT;
    }
    else if(input_char >= 97 && input_char <= 122)
    {
        if(input_char=='a'||input_char=='e'||input_char=='i'||input_char=='o'||input_char=='u')
            type=LOWER_CASE_VOWEL;
        else
            type=LOWER_CASE_CONSONANT;

    }
    else if(input_char >= 48 && input_char <= 57)
        type=NUMBER;
    else
      type=SYMBOL;

    return type;
}   