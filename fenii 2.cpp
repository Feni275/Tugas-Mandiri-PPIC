#include "stdio.h"
main () {
	float d, v, r, phi;
	d=15;
	phi=3.14;
	r=d/2;
	v=phi*r*r*r*4/3;
	printf("hasil :%.2f",v);
	return 0;
}