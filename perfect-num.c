#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int num;
    for(i=0;i<5;i++)
    {
        scanf("%d",&num);
    }

    int *p;
    p=&num;
for(j=0;j<5;j++)
{
    for(i=1;i<*p;i++)
    {
        if(*p%i==0)
            sum=sum+*p;
            //printf("%d is a perfect number!",*p);

    }
    if(num==sum)
        printf("%d is a perfect number!",*p);
    sum=0;
}
return 0;
}