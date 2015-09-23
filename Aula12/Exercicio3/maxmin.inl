#ifndef _MAXMIN_INL_
#define _MAXMIN_INL_
template <typename T>
void maxmin(T v[], int n, T &max, T &min){
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

#endif