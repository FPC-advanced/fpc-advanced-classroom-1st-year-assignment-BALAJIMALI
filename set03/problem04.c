#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);
int main(){
   int n,fibo;
   n=input();
   fibo=input();
   find_fibo(n);
   output(n,fibo);
}
int input(){
  int x;
  printf("Enter th number :");
  scanf("%d",&x);
}
int find_fibo(int n){
   
}
void output(int n, int fibo){
  printf("fibo(%d)is=%d",n,fibo);
}
