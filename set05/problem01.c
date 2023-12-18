// Write a program to find the distance between two points.

#include <stdio.h>
#include <math.h>

struct  _point
{
   float x;
   float y;
};

typedef struct  _point point;
 
 point input();
 void dist(point a, point b,float *res);
 void output( point a, point b, float res);

 int main()
 {
    point a,b;
    float res;
    printf("Enter the first point coordinates\n");
    a=input();
    b=input();
    dist(a,b,&res);
    output(a,b,res);
 }
 point input()
 {
    point a;
    printf("Enter the x-coordinate : \n");
    scanf("%f",&a.x);
    printf("Enter the y-coordinate : \n");
    scanf("Enter the y coordinate : \n");
    scanf("%f",&a.y);
    return a;
 }
 void dist (point a, point b, float *res){
    float dx=a.x -b.x;
    float dy=a.y - b.y;
    *res =sqrt (( dx *dx) +(dy * dy ));
 }
void output (point a, point b, float res )
{
    printf("THe Distance betwwen (%f,%f) and (%f ,%f) is %f",a.x,a.y,b.x,b.y,res);
}