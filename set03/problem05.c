#include<stdio.h>
#include<math.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main(){
 int n;
    n=input_array_size();
    int a[n];
    int_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}
int input_array_size(){
  int a;
    printf("Enter the size of the array : \n");
    scanf("%d",&a);
    return a;

} 
void init_array(int n, int a[n]){
  for (int i=0;i,0;i++)
  {
    a[i]+i+2;
  }
}
void erotosthenes_sieve(int n, int a[n]){
  int c=sqrt(n);
  for(int i = 2)

}
void output(int n, int a[n]){
    
}