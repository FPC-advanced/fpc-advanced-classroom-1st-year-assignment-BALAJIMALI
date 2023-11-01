#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
   char a[50], reverse_a[50];
    input_string(a);
    str_reverse(a, reverse_a);
    output(a, reverse_a);
    return 0;
}
void input_string(char *a)
{
 
    printf("Enter a string: ");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str){
  int length =0;
  for (int i = 0; str[i] != '\0';i++)
 {
    length++;
 }
 int start = 0;
 int end = length - 1;
  
   for (int i = end; i >= 0 ; i--)  
   {
    if (str[i] != '\0')
    {
        rev_str[start]=str[i];
        start++;
    }
    
   }
   rev_str[start] ='\0';
   
}
void output(char *a, char *reverse_a){
 printf("Enter a string: %s\n",a);
 printf("Reversed string: %s\n",reverse_a);
}
