#include<stdio.h>
#include<stdlib.h>
int main(){
    float per;
    printf("enter your percentage: ");
    scanf("%f",&per);
    if(per>=90 && per<100){
        printf("your grade =A\n");
    }    
    else if(per>=80 && per<90){
        printf("your grade=A-\n");
    }
    else if(per>=70 && per<80){
        printf("your grade=B\n");
    }
    
    else if(per>=60 && per<70){
        printf("your grade=B-\n");
    }
    else if(per>=50 && per<60){
        printf("your grade=C\n");
    }
    else if (per<50 && per>=0) {
        printf("you have failed the exam\n");
    }
    else {
        printf("Error: Invalid Input\n");
    }
    return 0;
}    
    