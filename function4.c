#include<stdio.h>
int factorial(int num);
int main(){
int n,f;
print("ENTER A NUMER :");
scanf("%d",&n);
f=factorial(n);
printf("FACTORIAL =%d",n,factorial);
}
int factorial(int num)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
