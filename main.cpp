/*
	main.cpp
	Maltseva S.A., 04.01.2023
*/

#include "Prism.h"
#include <cstdio>

// main function
int main()
{
	const Prism * p, * q, * r;
	Box a(0.5, 2), b(5, 0.2);
	Cube c(0.5);
	p = &a, q = &b, r = &c;
	printf("Squares: %3.3f %3.3f %3.3f\n",
	p->Square(), q->Square(), r->Square());
	printf("Volumes: %3.3f %3.3f %3.3f\n",
	p->Volume(), q->Volume(), r->Volume());

	return 0;
}
