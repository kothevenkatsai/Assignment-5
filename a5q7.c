//7. Write a program to print the first N even natural numbers in reverse order
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2*n;i>0;i-=2)
        printf("%d ",i);
}
