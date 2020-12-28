#include <stdio.h>
#include <windows.h>

int main()
{
    char c1 = 0x61;
    char c2 = 0x62;

    printf("%c,%d,0x%x,%c,%d,0x%x\n", c1, c1, c1, c2, c2, c2);
 
    system("pause");
    return 0;
}