#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int N = 3;

   
    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
    }

    
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() % 101 - 50;
        }
    }

    
    cout << "�����: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "�������� �� ������i� �i������i: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    
    cout << "�������� �� ���i��i� �i������i: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i][N - i - 1] << " ";
    }
    cout << endl;

    
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] % 2 == 0) {
                even_count++;
            }
            else {
                odd_count++;
            }
        }
    }

   
    cout << "�i���i��� ������ �������i�: " << even_count << endl;
    cout << "�i���i��� �������� �������i�: " << odd_count << endl;

    
    for (int i = 0; i < N; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}