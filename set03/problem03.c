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
  
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            result++;
        }
        else
        {
            continue;
        }
    }
    return result;
}

void output(int n, int result){
    if(result == 1){
        printf("The number %d is prime.\n", n);
    }
    else {
        printf("The number %d is not prime.\n", n);
    }
}
