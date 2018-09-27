<<<<<<< HEAD
#include <stdio.h>
double g (double x)
{
	return 1/(1+x*x);
}
double ht(double (*f)(double), float a, float b)
{
	int n=4,i;
	float s,h;
	h=(b-a)/n;
	for (i=0;i<=n;i++)
	{
		if ((i==0)|| (i==n)) s+=f(a+i*h)/2;
		else s+=f(a+i*h);
	}
	return s*h;
}
double p(double (*f)(double), float a, float b)
{
	int n=2,i;
	float s,h;
	h=(b-a)/(2*n);
	s=f(a)+f(b);
	for (i=1;i<=(2*n-1);i++)
	{
			if((i%2)==1) s+=4*f(a+i*h);
			else s+=2*f(a+i*h);
	}
	return (h/3)*s;
}
int main ()
{
	float a,b;
	printf("Nhap can duoi"); scanf("%f",&a);
	printf("Nhap can tren"); scanf("%f",&b);
	printf("Theo CT hinh thang, tich phan co gia tri: %.3f\n", ht(g,a,b));
	printf("Theo CT Parabol, tich phan co gia tri: %.3f\n", p(g,a,b));
}
=======
#include <stdio.h>
double g (double x)
{
	return 1/(1+x*x);
}
double ht(double (*f)(double), float a, float b)
{
	int n=4,i;
	float s,h;
	h=(b-a)/n;
	for (i=0;i<=n;i++)
	{
		if ((i==0)|| (i==n)) s+=f(a+i*h)/2;
		else s+=f(a+i*h);
	}
	return s*h;
}
double p(double (*f)(double), float a, float b)
{
	int n=2,i;
	float s,h;
	h=(b-a)/(2*n);
	s=f(a)+f(b);
	for (i=1;i<=(2*n-1);i++)
	{
			if((i%2)==1) s+=4*f(a+i*h);
			else s+=2*f(a+i*h);
	}
	return (h/3)*s;
}
int main ()
{
	float a,b;
	printf("Nhap can duoi"); scanf("%f",&a);
	printf("Nhap can tren"); scanf("%f",&b);
	printf("Theo CT hinh thang, tich phan co gia tri: %.3f\n", ht(g,a,b));
	printf("Theo CT Parabol, tich phan co gia tri: %.3f\n", p(g,a,b));
}
>>>>>>> 7378ebe09706541edb1c2b853c74eeccd89bd7b2
