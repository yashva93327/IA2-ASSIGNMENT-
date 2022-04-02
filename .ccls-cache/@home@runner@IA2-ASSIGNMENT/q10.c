#include <stdio.h>
struct _complex
{
float real,imaginary;
};
typedef struct _complex Complex;
Complex input()
{
Complex Complex;
printf("Enter the complex number\n");
scanf("%f%f", &Complex.real,&Complex.imaginary);
return Complex;
}
Complex add(Complex a, Complex b)
{
Complex sum;
sum.real = a.real + b.real;
sum.imaginary = a.imaginary + b.imaginary;
return sum;
}
void output(Complex a, Complex b, Complex c)
{
printf("%.2f + %.2fi + %.2f + %.2fi is %.2f + %.2fi\n",
a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
Complex a,b,c;
a=input();
b=input();
c=add(a,b);
output(a,b,c);
}