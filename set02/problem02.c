//  Write a program to find if a triangle is scalene.s

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main ()
{
    int a,b,c,isscalene;
    a=input_side();
    
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
}
int input_side(){
    int x;
    printf("Enter the sides of triangle: ");
    scanf("%d",&x);
    return x;

}
int check_scalene(int a, int b, int c){
if (a == b || b == c || a == c) {
        return 0; 

    }
    else
    {
        return 1;
    }
}
    

void output(int a, int b, int c, int isscalene)
{
        if (isscalene==0) 
        {
        printf("The triangle with sides %d, %d, %d is not scalene.\n", a, b, c);
    }
    else
    {
        printf("it is an scalene");
    }
    
 
}

