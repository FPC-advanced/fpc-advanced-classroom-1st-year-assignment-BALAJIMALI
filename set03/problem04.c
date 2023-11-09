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
}
int find_fibo(int n){
   if(n<=1)
   return n;
   return fibo(n-1) + fibo(n-2);
}
void output(int n, int fibo){
  printf("fibo(%d)is=%d",n,fibo);
}
