#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int size) {
	if(size <= 0) {
		cout << "Error: size must be greater than zero" << endl;
	}
	data = new int[size];
	len = size;
	//cout << "Array constructor" << endl;
}

Array::~Array() {
	delete(data);
	//cout << "Array destructor" << endl;
}

int Array::length() {
	return len;
}

int& Array::operator[](int i) { //left value
	static int tmp;
	if(i < 0 || i >= len) {
		cout << " Array bound error!" << endl;
		return tmp;
	}
	else return data[i];
}

int Array::operator[](int i) const { //right value
	if(i < 0 || i >= len) {
		cout << " Array bound error!" << endl;
		return 0;
	}
	else return data[i];
}

void Array::print() {
	int i;
	cout << "[";
	for(i = 0; i < len-1; i++) {
		cout << data[i] << " ";
	}
	cout << data[i];
	cout << "]" << endl;
}
