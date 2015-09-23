#include "maxmin.h"

void maxmin(int v[], int n, int &max, int &min){
	if (n == 0) {
		return;
	}

	int pos = n-1;
	if (v[pos] > max) {
		max = v[pos];
	}
	if (v[pos] < min) {
		min = v[pos];
	}
	maxmin(v,n-1,max,min);
}