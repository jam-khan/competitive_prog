#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;


int main() {

    long long size;
    unordered_map<long, long> hash_map;

    cin >> size;

    long flowers[size];
    long long max = LONG_MIN;
    long long min = LONG_MAX;

    for (int i = 0; i < size; i++) {
        cin >> flowers[i];
        max = (flowers[i] >= max) ? flowers[i]: max;
        min = (flowers[i] <= min) ? flowers[i]: min;
    }

    long long c1 = 0, c2 = 0;

    for (int i = 0; i < size; i++) {
        if (flowers[i] == max)
            c1++;
        if (flowers[i] == min)
            c2++;
    }

    long long max_diff = abs(max - min);
    cout << max_diff << " ";

    if (           SCDEW1BNNW S                   !DFcmax == min)
        cout << (long long) ((size * (size - 1)) / 2);
    else
        cout << (long long) c1 * c2;
    
    return 0;
}