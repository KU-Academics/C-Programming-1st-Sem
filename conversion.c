#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 8;
    int b= 3;
    float res = (10.0/b); //implicit type of conversion
    float c = (float)a / b; //explicit type conversion.type conversion
    printf("%f\n",c);
    printf("%f",res);

    return 0;


}