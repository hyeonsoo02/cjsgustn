#include <stdio.h>
#include <windows.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';
    char lineFeed = '\n';

    printf("%c,%c,%c,%c", c1, lineFeed, c2, lineFeed);
    
    system("pause");
    return 0;
}