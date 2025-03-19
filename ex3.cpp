#include <iostream>
using namespace std;

void generateBinaryStrings(int n, string str) {
	if (n > 0) {
		generateBinaryStrings(n - 1, str + '0');
		generateBinaryStrings(n - 1, str + '1');
	} else 
		cout << str << endl;
}

int main() {
	int n;
	cin >> n;
	generateBinaryStrings(n, "");
}