#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;

    unordered_map<int, int> record;
    record[1] = 0;
    record[2] = 0;
    record[3] = 0;
    record[4] = 0;
    record[5] = 0;
    record[6] = 0;
    record[7] = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        record[temp]++;
    }

    int mini1 = min(record[1], min(record[2], record[4]));
    record[1] -= mini1;
    record[2] -= mini1;
    record[4] -= mini1;

    int mini2 = min(record[1], min(record[2], record[6]));
    record[1] -= mini2;
    record[2] -= mini2;
    record[6] -= mini2;

    int mini3 = min(record[1], min(record[3], record[6]));
    record[1] -= mini3;
    record[3] -= mini3;
    record[6] -= mini3;

    if (3 * (mini1 + mini2 + mini3) != n) {
        cout << -1;
    } else {

        for (int i = 0; i < mini1; i++)
            cout << "1 2 4" << endl;
        
        for (int i = 0; i < mini2; i++) 
            cout << "1 2 6" << endl;
        
        for (int i = 0; i < mini3; i++)
            cout << "1 3 6" << endl;

    }

    return 0;

}