#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("enter any number : ");
    scanf("%d",&n);

    for (size_t i = 0; i <=10; i++)
    {
        printf("%d * %d  = %d\n",n,i,n*i);
    }
    return 0;

}