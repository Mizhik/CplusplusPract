// Перший цикл сортирує по зростанню
// Другий цикл сортирує по спаданню
#include<iostream>
using namespace std;

int main() {
	int temp;
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	//ñîðòèðîâêà ïî âîçðîñòàíèþ
	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}*/
	//ñîðòèðîâêà ïî ñïàäàíèþ
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j+1] > a[j]) {
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
}
