#include <iostream>
#include <Windows.h>

using namespace std;

int Number() {
	int x;
	do
	{
			cin >> x;
			if (x >= 7)
				cout << " ������ �����, ������ ���� " << endl;
	} 
	while (x >= 7);
	return x;


}
int ExpandAndSum(int x) {
	int sum=0;
	for (int i = x;i > 0;i--){
		sum = i + sum;
	}
	return sum;
}

int main() {
	SetConsoleOutputCP(1251);
	cout << " ������ �����: ";
	int x = Number();
	int sum = ExpandAndSum(x);
	cout << sum << " - ���� ���� ����������� �����";


}