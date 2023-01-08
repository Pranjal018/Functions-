#include<stdio.h>
int fact(int);
void  main(){
int n,f;
printf("ENTER A NUMbER :");
scanf("%d",&n);
f=fact(n);
printf("FACTORIAL =%d",f);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
