#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
    int result;
   float x1, y1, x2, y2, x3, y3;
    input(&x1, &y1, &x2, &y2);
    result = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, x3, y3 , result);
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%f %f", x1, y1);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%f %f", x2, y2);
    printf("Enter the x and y ")
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){

}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){

}
