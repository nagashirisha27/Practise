
#include "char_type.h"

char_type_t find_char_type(const char input_char)
{
    if(input_char >= 65 && input_char <= 90)  
    {  
        if(input_char=='A' || input_char=='E'||input_char=='I'||input_char=='O'||input_char=='U')
            printf("Character is upper case and a vowel");  
        else
            printf("Character is upper case and consonant");
    }  
    else if(input_char >= 97 && input_char <= 122)  
    {  
        if(input_char=='a' || input_char=='e'||input_char=='i'||input_char=='o'||input_char=='u')
            printf("Character is lower case and a vowel"); 
        else
            printf("Character is is upper case and consonant");
    }  
    else if(input_char >= 48 && input_char <= 57)  
    {  
        printf("Character is a Number");  
    }  
    else if( (input_char >= 0  && input_char <= 47) ||  (input_char >= 58 && input_char <= 64) ||  (input_char >= 91 && input_char <= 96) ||  (input_char >= 123 && input_char <= 127))  
    {  
        printf("Character is a Symbol");  
    }  
    return 0;
}