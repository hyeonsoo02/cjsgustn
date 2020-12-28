#include <stdio.h>
#include <windows.h>

int main()
{
    float a = 0.1f;

    double b = 3867.215820;

    long double c = 9.3275131;

    printf("%f,%f,%Lf\n", a,b,c);

    system("pause");
    return 0;

}