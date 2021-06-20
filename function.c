//with no return type and with no argument
#include <stdio.h>
void add(); //function prototype
int main()
{
    add();
    return 0;
}
//function definition sectionS
void add()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("sum is %d.\n", a + b);
}