#include <iostream>

void add5(int, int);

int main(void){
	int a = 3;
	int b = 4;
	add5(a,b);
	std::cout << "a is :" << a << " b is : " << b;
	return 0;
}

void add5(int a, int b){
	a = a + 5;
	b = b + 5;
}