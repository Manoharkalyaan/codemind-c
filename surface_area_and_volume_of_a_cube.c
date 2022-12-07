#include<stdio.h>
int main()
{
    float side;
    scanf("%f",&side);
    float sa,v;
    sa=6*side*side;
    v=side*side*side;
    printf("Surface area = %0.2f and Volume = %0.2f",sa,v);
}