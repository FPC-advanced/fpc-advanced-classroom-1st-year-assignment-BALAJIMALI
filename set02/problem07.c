#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
Triangle input_triangle(){
    
    Triangle a;
    printf("Enter the base of the triangle :\n");
    scanf("%f",&a.base);
    printf("Enter the altitude of the triangle :\n");
    scanf("%f",&a.altitude);
    return a;
}
    
void find_area(Traingle *t)
{

    t->area=0.5*t->base*t->altitude;
}   
void output(Triangle t){
    printf("The aera of trianglewith base %f and altitude %f is %f" ,t.base,t.altitude,t.area );
} 

