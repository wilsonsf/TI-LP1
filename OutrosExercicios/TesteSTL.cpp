#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

template <class T>
void imprimeVector(vector<T> &v1);

int main () {
	vector<int> *v1 = new vector<int>();
	vector<int*> *v2 = new vector<int*>();

	v1->push_back(1);
	v1->push_back(2);

	v2->push_back(new int(9));

	cout << **v2->begin() << endl;


	imprimeVector(*v1);

	imprimeVector(*v2);



	if (v1) 
		delete v1;
	if (v2)
		delete v2;


	return EXIT_SUCCESS;
}

template <class T>
void imprimeVector(vector<T> &v1) {

	for (typename vector<T>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " - ";
	}
	cout << endl;
}