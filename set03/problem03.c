#include <stdio.h>

int input_number();
int is_prime(int n);
void ouput(int n, int result);
int main(){
  int n,result;
  n=input_number();
  ouput(n,result);
}
int input_number(){
 int x;
 printf("Enter the value =: ");
 scanf("%d",&x);
 return x;
}
int is_prime(int n){
  int i;
  int result =1;

  for ( i = 2; i <=n/2; i++)
  {
    if (n% i == 0)
    {
        result ++;
        return result;
    }
    
  }
  
}
void ouput(int n, int result){
 printf("The number is prime %d",result);
}