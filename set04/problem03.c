#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,result;
    input_n_and_r(&n,&r);
    result=nCr(n,r);
    output(n,r,result);
    return 0;
}
void input_n_and_r(int *n, int *r)
{
    printf("Enter the value for n : \n");
    scanf("%d",n);
    printf("Enter the value for r : \n");
    scanf("%d",r);
}
int nCr(int n, int r)
{
   if(n < r || n < 0 || r < 0)
   {
    return 0;
   }
    if (r == 0 || r == n)
    {
        return 1;
    }
   return nCr (n - 1, r -1) + nCr(n-1,r);
}

void output(int n, int r, int result)
{
    printf("for n = %d and r = %d, nCr = %d \n",n,r,result);
}