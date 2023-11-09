#include<stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main(){
    
    char a,b;
    int index;
    input_string(a,b);
    index=sub_str_index(a,b);
    output(a,b,index);
}
void input_string(char* a, char* b){
  
    printf("Enter the string : \n");
    scanf("%s",a);
    printf("Enter the substring : \n");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring){
  
}
void output(char *string, char *substring, int index){

}