#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "����i�� �i���i��� �������i� ������: ";
    cin >> n;

    float* arr = new float[n];

    
    srand(time(NULL)); 
    for (float* i = arr; i < arr + n; i++) {
        *i = (rand() % 401 - 200) / 100.0;
    }

    
    cout << "�����: ";
    for (float* i = arr; i < arr + n; i++) {
        cout << *i << " ";
    }
    cout << endl;

    
    int positive_count = 0, negative_count = 0;
    for (float* i = arr; i < arr + n; i++) {
        if (*i > 0) {
            positive_count++;
        }
        else if (*i < 0) {
            negative_count++;
        }
    }

   
    cout << "�i���i��� �������� �������i�: " << positive_count << endl;
    cout << "�i���i��� �i�'����� �������i�: " << negative_count << endl;

    delete[] arr;

    return 0;
}
