#include<stdio.h>
#include"lib.h"
int fact(int);
int main()
{
    int num,result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=fact(num);
    printf("Factorial of the number is: %d",result);
    return 0;
}
