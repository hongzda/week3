#include "Str.h"
#include <string.h>

Str::Str(int leng) {
	len = leng;
	str = new char[len];
}

Str::Str(char *neyong) {
	len = strlen(neyong);
	str = new char[len];
	for(int i = 0; i < len; i++) {
		str[i] = neyong[i];
	}
}

Str::~Str() {
	delete(str);
}

int Str::length(void) {
	return len;
}

char* Str::contents(void) {
	return str;
}

int Str::compare(class Str& a) {
	int result = strcmp(str, a.contents());
	if (result > 0) return 1;
	else if (result < 0) return -1;
	else return 0;
}

int Str::compare(char *a) {
	int result = strcmp(str, a);
	if (result > 0) return 1;
	else if (result < 0) return -1;
	else return 0;
}

void Str::operator=(char *a) {
	if (strlen(a) > len) {
		delete(str);
		str = new char[strlen(a)];
	}
	len = strlen(a);
	strcpy(str, a);
//	for(int i = 0; i < len; i++) {
//		str[i] = a[i];
//	}
}

void Str::operator=(class Str& a) {
	if (a.length() > len) {
		delete(str);
		str = new char[a.length()];
	}
	len = a.length();
	strcpy(str, a.contents());
}

