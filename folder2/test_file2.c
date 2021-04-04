#include <stdio.h>
#include <conio.h>

void main()
{
    int x,factorial=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x!=1){
        factorial = factorial*x;
        --x;
    }
    printf("Factorial = %d",factorial);

}
