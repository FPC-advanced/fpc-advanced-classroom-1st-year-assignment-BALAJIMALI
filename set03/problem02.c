#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
    int result;
   float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2,&x3 ,&y3);
    result = is_triangle(x1, y1, x2, y2,x3,y3);
    output(x1, y1, x2, y2, x3, y3 , result);
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%f %f", x1, y1);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%f %f", x2, y2);
    printf("Enter the x and y coordinates of the third point: ");
    scanf("%f %f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int result;
  float d1= sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
  float d2= sqrt(((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2)));
  float d3= sqrt(((x1-x3)*(x1-x3)) + ((y1-y3)*(y1-y3)));

  if(d1 + d2 > d3 && d2 + d3 > d1 && d1 +d3 > d3 ){
    return 1;
  }
  else{
    return 0;
  }
  return result;
  
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if (result == 1)
   { printf("The points (%f,%f), (%f,%f) and (%f,%f) do  from triangle \n",x1,x2,x3,y1,y2,y3,result);
}
else
{
   printf("The points (%f,%f), (%f,%f) and (%f,%f) do not from triangle \n",x1,x2,x3,y1,y2,y3,result);
}
}