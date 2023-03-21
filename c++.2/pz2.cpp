#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int N = 5;
    int arr[N][N];


    srand(time(NULL)); 
    for (int* i = (int*)arr, *end = (int*)arr + N * N; i < end; i++) {
        *i = rand() % 101 - 50;
    }

    cout << "�����: " << endl;
    for (int* i = (int*)arr, *end = (int*)arr + N * N; i < end; i++) {
        cout << *i << "\t";
        if ((i - (int*)arr + 1) % N == 0) { 
            cout << endl;
        }
    }

    
    cout << "�������� �� ������i� �i������i: ";
    for (int* i = (int*)arr, *end = (int*)arr + N * N; i < end; i += N + 1) {
        cout << *i << " ";
    }
    cout << endl;

   
    cout << "�������� �� ���i��i� �i������i: ";
    for (int* i = (int*)arr + N - 1, *end = (int*)arr + N * N - 1; i < end; i += N - 1) {
        cout << *i << " ";
    }
    cout << endl;

   
    int even_count = 0, odd_count = 0;
    for (int* i = (int*)arr, *end = (int*)arr + N * N; i < end; i++) {
        (*i % 2 == 0) ? even_count++ : odd_count++;
    }

    
    cout << "�i���i��� ������ �������i�: " << even_count << endl;
    cout << "�i���i��� �������� �������i�: " << odd_count << endl;

    return 0;
}