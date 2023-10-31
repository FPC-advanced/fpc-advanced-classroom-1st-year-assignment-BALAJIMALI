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
    float x, espsilon; 
    x = n/2;
    espsilon = 0.000001;
    while ((x * x - n)> epsilon ||(n - x *x)>esplion)

    {
        x = 0.5 * (x + n / x);
        
    }
    return x;
}
void output(float n,float sqrroot)
{
    printf("The square root of %.1f is %.1f\n", n, sqrroot);
}
