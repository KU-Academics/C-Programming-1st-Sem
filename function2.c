//with no return type but with argument

#include <stdio.h>
void add(int, int);
//void add(int x, int y);
int main()
{
    int x, y;
    printf("enter two numbers: ");
    scanf("%d%d", x, y);
    add(x, y);
    return 0;
}
//function definition section
void add(int a, int b)
{
    //int sum = a+b;
    printf("the sum is %d.", a + b);
}