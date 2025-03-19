#include <iostream>
using namespace std;

bool isSorted(int a[], int n) {
	if (n == 0) return true;
	
	if (a[n - 1] > a[n]) {
		return false;
	}
	
	return isSorted(a, n - 1);
}

int main() {
	int n, a[100];
	cout << "Enter n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter element " << i << " : "; cin >> a[i];
	}
	
	if (isSorted(a, n)) {
		cout << "The array is sorted";
	} else
		cout << "The array is NOT sorted";
}