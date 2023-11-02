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
    float i,n;
    printf("n: ");
}
void output(float n,float sqrroot)
{
    printf("The square root of %.1f is %.1f\n", n, sqrroot);
}
