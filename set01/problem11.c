#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("The first complex number is: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("The second complex number is: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex a, b, sum;
    printf("For the first complex number:\n");
    a = input_complex();
    printf("For the second complex number:\n");
    b = input_complex();
    sum = add_complex(a, b);
    output(a, b, sum);
    return 0;
}
