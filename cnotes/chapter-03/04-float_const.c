#include<stdio.h>

int main()
{
	float f = 0.314f;
	double d = 0.14;
	long double ld = 0.1441;

	double x = 1.;
	double y = .1;

	double sd = 1.2e3;

	printf("%f\n",f);
	printf("%f\n",d);
	printf("%Lf\n", ld);
	printf("%f\n", x);
	printf("%f\n", y);
	printf("%f\n", sd);
}
