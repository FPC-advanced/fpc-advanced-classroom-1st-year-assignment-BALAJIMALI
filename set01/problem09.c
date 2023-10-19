#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n=input();
    float sqrroot= square_root(n);
    output(n,sqrroot);
    return 0;

}
float input()
{
    float n;
    printf("%f",&n);
    return n;
}
float square_root(float n)
{
    float x = n/2;
    float esplion =   1;
    while ((x * x - n)> esplion ||(n - x *x)>esplion)

    {
        x = 0.5 * (x + n / x);
        
    }
    return x;
}
void output(float n,float sqrroot)
{
    printf("The square root of %.1f is %.1f\n", n, sqrroot);
}
