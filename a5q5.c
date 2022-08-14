//5. Write a program to print the first N odd natural numbers in reverse order.
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2*n-1;i>0;i-=2)
        printf("%d ",i);
}
