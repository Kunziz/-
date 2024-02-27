#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
int *array = new int [n];

        for (auto i = 0; i < n; i++) {
            array[i] = rand()%1000;
}


        sort(array, array+n);
        for (auto i = 0; i < n; i++) {
            cout << array[i] << "\t";
        }}

