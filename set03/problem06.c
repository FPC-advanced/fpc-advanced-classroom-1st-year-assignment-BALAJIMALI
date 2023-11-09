#include<stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main(){
    
    char a[],b[100];
    int index;
    input_string(a,b);
    index=sub_str_index(a,b);
    output(a,b,index);
}