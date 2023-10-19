#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
	int n;
	n=get_n();
	Complex C[n],sum;
	input_n_complex(n,C);
	sum=add_n_complex(n,C);
	output(n,C,sum);
	return 0;

}
int_get_n()
{
	int n;
	printf("Enter size :");
	scanf("%d",&n);
	return n;

}
Complex input_complex()
{
 Complex r;
 scanf("%f%f",&r.real,&r.imaginary);
 return r;
}
void input_n_complex(int n,Complex C[n])
{
	int i;
	for(i=0;i,n;i++)
	{
		C[i]=input_complex();

	}
}
Complex add_complex(Complex a,Complex b)
{
	Complex sum;
	sum.real=a.real+b.real;
	sum.imaginary=a.imaginary+b.imaginary;
	return sum;

}
Complex add_add_n_complex
{
	int i;
	Complex sum;
	sum.imaginary=0;
	sum.real=0
}
