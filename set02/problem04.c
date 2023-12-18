//  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_composite_numbers(n, a);
    output(sum);
}
int is_composite(int num) {
    return 0;
}
int input_array_size()
{
 int x;
 printf("enter the array size:");
 scanf("%d",&x);
 return x;

}
void input_array(int n, int a[n])
{
  printf("Enter the element of  the array: ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[n]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
void output(int sum)
{
 printf("Sum of composite number  in the array %d",sum);
}
