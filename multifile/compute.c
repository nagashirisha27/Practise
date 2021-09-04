#include "complex.h"

complex_t complex_sum(complex_t C1, complex_t C2){
    complex_t out;
    out.real=C1.real+C2.real;
    out.img=C1.img+C2.img;
    return out;
}

complex_t complex_difference(complex_t C1, complex_t C2){
    complex_t out;
    out.real=C1.real-C2.real;
    out.img=C1.img-C2.img;
    return out;
}

complex_t complex_multiply(complex_t C1, complex_t C2){
    complex_t out;
    out.real=C1.real*C2.real-C1.img*C2.img;
    out.img=C1.real*C2.img+C1.img*C2.real;
    return out;
}

complex_t complex_divide(complex_t C1, complex_t C2){
    complex_t out;
    if(C2.real==0 && C2.img==0){out.img=0;out.real=0;return out;}
    float a=C1.real;float b=C1.img;
    float c=C2.real;float d=C2.img;
    out.real=(a*c+b*d)/(c*c+d*d);
    out.img=(b*c-a*d)/(c*c+d*d);
    return out;
}