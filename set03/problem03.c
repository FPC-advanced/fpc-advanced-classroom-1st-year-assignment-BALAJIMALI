#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result = is_prime(n);
  output(n,result);
}

int input_number(){
 int x;
 printf("Enter the value =: ");
 scanf("%d",&x);
 return x;
}

int is_prime(int n){
  int i;
  
  if (n <= 1) {
      return 0;
  }

  for (i = 2; i <= n/2; i++) {
    if (n % i == 0) {
        return 0;
    }
  }
  return 1;
}

void output(int n, int result){
    if(result == 1){
        printf("The number %d is prime.\n", n);
    }
    else {
        printf("The number %d is not prime.\n", n);
    }
}
