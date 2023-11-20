#include <stdio.h>

int array_size();
void input_array(int n, int a[n]);
int sum_even_array(int n,int a[n],int sum);
void output (int sum);
int main ()
{
    int n, sum =0;
    n=array_size();
    int a[n];
    input_array(n ,a);
    sum=sum_even_array(n ,a, sum);
    output(sum);
    return 0;
}
int array_size()
{
    int n;
    printf("enter size of the array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("Enter the value of the array\n");

    int  i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d \n",&a[i]);
    }
}
int sum_even_array(int n, int a[n] , int sum)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[1];
    }
    return sum;
}
void output(int sum)
{
    printf("the sum of the values of the array %d + %d + %d  is %d", sum);
}


