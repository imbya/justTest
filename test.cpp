#include <iostream>
using namespace std;
void swap(int& a, int b) {
	int t;
	t = a++;
	a = b;
	b = t;
}


int main() {
	int a = 7, b = 8;
	swap(a, b);
	cout << a << " " << b;
}
