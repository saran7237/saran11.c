#include<stdio.h>
int main()
{
    int k,s;
    long int i=3,j=4,f;
    printf("Enter the number range");
    scanf("%d",&s);
    printf("fibonacci series");
    printf("%ld %ld",i,j); 
    for(k=2;k<s;k++)
    {
         f=i+j;
         i=j;
         j=f;
         printf("%ld",j);
     }
    return 0;
}#include<stdio.h>
int main()
{
