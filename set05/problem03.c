#include <stdio.h>
#include <math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);
 
 int main()
 {
    Camel c;
    c=input();
    find_weight(&c);
    output(c);
 }
 Camel input()
 {
    Camel a;
    printf("")
 }