#include "string_finder.h"

ret_code_t extract_string(const char *in_string, char *out_string, const char start_delimiter, const char end_delimiter)
{
    int start=0;
    int st_in=0;
    int end=0;
    int en_in=0;
    int i=0;
    if(in_string==NULL || in_string[i]==' ')return NULL_PTR;
    while(in_string[i] != '\0')
    {
        if(in_string[i]=='$'){start=1;st_in=i;}
        if(in_string[i]==';'){end=1;en_in=i;}
        i++;
        
    }
    
    if(start==1 && end==1){
        int j=0;
        int t=0;
        
    for(j=st_in;j<=en_in;j++)
    {
        
        out_string[t]=in_string[j];
        
        t++;
    }
    out_string[t]='\0';
    
    
    int k=0;
    
    
    return SUCCESS;
    }
    else if(start==0)return START_DELIMITER_NOT_FOUND;
    else if(end==0)return END_DELIMITER_NOT_FOUND;
    else return DELIMITER_NOT_FOUND;

}