#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


int main() {

    int size;

    cin >> size;

    int inputs[size];

    for (int i = 0; i < size; i++) {
        cin >> inputs[i]; 
    }

    for (int i = 0; i < size; i++) {

        cout << inputs[i] << endl;

    }

    return 0;

}