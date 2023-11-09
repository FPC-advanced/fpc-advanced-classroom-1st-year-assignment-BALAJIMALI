#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);
int main(){
   int n,fibo;
   n=input();
   fibo=find_fibo(n);
   output(n,fibo);
   return 0;
}
int input(){
  int x;
  printf("Enter the nth number you want in fibonacci series : \n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int n){
     int a[n];
    for(int i=2;i<=n;i++)
    {
        a[0]=0,a[1]=1;
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}
void output(int n, int fibo){
  printf("fibo(%d)is = %d \n",n,fibo);
}
