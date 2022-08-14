//6. Write a program to print the first N even natural numbers
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=2*n;i+=2)
        printf("%d ",i);
}
