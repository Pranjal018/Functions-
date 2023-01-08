#include<stdio.h>
void funct(int age,float ht);
void main(){
    int age;
    float ht;
    printf("enter age and height:");
    scanf("%d%d",&age,&ht);
    funct(age,ht);
}
void funct(int age,float ht)
{
if(age>25)
{
    printf("age should be less than 25\n");
}
if(ht<5)
{
    printf("height should be more than 5\n");
}
}