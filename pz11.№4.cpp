#include <iostream>

using namespace std;

int Number() {
	int x;
	cout << " Enter number: ";
	cin >> x;
	return x;
}

int main() {
	int A = Number();
	int temp=0;
	int a[5];
	cout << "Enter array: ";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		if (A < a[i])
			temp++;
	}
	cout << "Number elements of the given array greater than A -  " << temp << endl;
	system("pause");
}

