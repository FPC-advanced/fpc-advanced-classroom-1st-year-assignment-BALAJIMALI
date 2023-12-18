//  Write a program to find borga(x) given x.

#include <stdio.h>
#include <math.h>

int input(int x);
float factorial(float z);
float borga_x(int x);
void output(int x, float result);

int main()
{
    int x=0;
    x=input(x);
    float result=borga_x(x);
    output(x,result);
}
int input(int x)
{
    printf("Enter the value of x : \n");
    scanf("%d",&x);
    return x;
}
float factorial(float z)
{
    float a=1;
    for(float i=1;i<=z;i++)
    {
        a=a*i;
    }
    return a;
}
float borga_x(int x)
{
    float result = 1.0;
    float term = 1.0;
    int n = 1.0;

    while (term >= 0.000001) 
    {
        term *= (float)(x) / ((2 * n) * (2 * n + 1));
        result += term;
        n++;
    }

    return result;
}
void output(int x, float result)
{
    printf("borga(%d) = %f",x,result);
}