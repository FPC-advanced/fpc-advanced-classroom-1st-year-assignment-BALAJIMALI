#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main ()
  {
    int a ,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
  }
int input()
{
  int x;
   printf("Enter the value:");
   scanf("%d",&x);
   return x;
}
int find_gcd(int a, int b){
  int i,GCD;
  for(i=2;i<=a || i<=b;i++)
  {
    if(a % i==0 && b % i==0){
        GCD=i;
    }
    return GCD;
  }
}
void output(int a, int b, int gcd){
  printf("Comman factor = %d",a,b,gcd);
  
} 