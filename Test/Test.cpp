#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int s1(char* str1, char* str2) {
	return strcmp(str1, str2);
}

int s2(char* str1) {
	return atoi(str1);
}

char* s3(int value) {
	char* arr = new char[50];
	_itoa_s(value, arr, 5, 10);
	return arr;
}

char* s4(char* str1) {
	_strupr_s(str1, 50);
	return str1;
}

char* s5(char* str1) {
	_strlwr_s(str1, 50);
	return str1;
}

char* s6(char* str1) {
	_strrev(str1);
	return str1;
}


int main()
{
	char* str1 = new char[50] {"Hello"};
	char* str2 = new char[50] {"World"};
	char* str3 = new char[50] {"YEad"};
	int s = 2;
	cout << s1(str1, str2) << endl;
	cout << s2(str1) << endl;
	cout << s3(s) << endl;
	cout << s4(str3) << endl;
	cout << s5(str3) << endl;
	cout << s6(str3) << endl;
}
