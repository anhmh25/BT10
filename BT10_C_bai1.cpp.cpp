#include<iostream>
#include <cstring>
using namespace std;

struct String {
	int n;
	char* ptr;
	String(const char* str) {
		n = strlen(str);
		ptr = new char[n];
		for (int i = 0; i < n; i++) {
			*(ptr + i) = *(str + i);
		}
	}
	~String() {
		delete ptr;
	}
	void print() {
		for (int i = 0; i < n; i++)cout << *(ptr + i);
	}
	void append(const char* str) {
		int len = strlen(str);
		char* temp = new char[n + len];
		for (int i = 0; i < n; i++) {
			temp[i] = ptr[i];
		}
		for (int i = 0; i <len; i++) {
			temp[i+n] = str[i];
		}
		temp[n + len] = NULL;
		ptr = temp;
		cout << ptr << endl;
	}
};

int main() {
	String greeting("Hi");
	greeting.print();
	cout << endl;
	greeting.append(" there");
	return 0;
}

