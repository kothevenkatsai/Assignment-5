//4. Write a program to print the first N odd natural numbers
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i+=2)
        printf("%d ",i);
}
