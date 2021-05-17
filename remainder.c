#include <stdio.h>
#include <stdlib.h>
int main ()
{
    //initialising the variables
    int a,b ;
    float remainder;

    //taling input from the user
    printf("enter first no: ");
    scanf("%d",&a);
    printf("enter second no: ");
    scanf("%d",&b);

    //finding the remainder    
    if (a > b) 
    { 
    remainder = a % b ;
    }
    else
    {
    remainder= b % a;
    }
    printf("remainder is %f\n",remainder);
    
    return 0;


}