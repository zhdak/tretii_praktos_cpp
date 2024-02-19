#include <iostream>
#include <locale>
using namespace std;

const int STROKI = 3;
const int ELEMS = 5;


int main() {
    setlocale(LC_ALL, "Russian");

    double arr[STROKI][ELEMS];
    double averages[STROKI] = { 0 }; 


    cout << "Введите элементы массива " << STROKI << "x" << ELEMS << ":\n";
    for (int i = 0; i < STROKI; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < ELEMS; ++j) {
            cin >> arr[i][j];
            averages[i] += arr[i][j]; 
        }
        averages[i] /= ELEMS; 

    cout << "Средние значения для каждой строки:\n";
    for (int i = 0; i < STROKI; ++i) {
        cout << "Строка " << i + 1 << ": " << averages[i] << endl;
    }

    return 0;
}
