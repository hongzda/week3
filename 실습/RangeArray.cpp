#include "RangeArray.h"

RangeArray::RangeArray(int l, int h) : Array(h-l+1) {
	low = l;
	high = h;
	//cout << "RangeArray constructor" << endl;
}

RangeArray::~RangeArray() {
	//cout << "RangeArray destructor" << endl;
}

int RangeArray::baseValue() {
	return low;
}

int RangeArray::endValue() {
	return high;
}

int& RangeArray::operator[](int i) { //left value
	Array::operator[](i-low);
}

int RangeArray::operator[](int i) const { //right value
	Array::operator[](i-low);
}
