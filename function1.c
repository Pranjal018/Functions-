#include<stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 1, b = 4, c;
    c = sum(a, b);
     printf("%d",c);
    return 0;
}
