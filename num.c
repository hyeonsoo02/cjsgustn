#include <stdio.h>
#include <windows.h> 

int main(){
    unsigned char a = 200;

    unsigned short b = 60000;

    unsigned int c = 4123456789;

    unsigned long d = 4123456789;

    unsigned long long e = 12345678901234567890;
    
    printf("%u,%u,%u,%lu,%llu", a,b,c,d,e);

    system("pause");
    return 0;
}