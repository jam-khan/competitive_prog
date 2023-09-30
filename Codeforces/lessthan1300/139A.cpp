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
    cin >> n;

    int days[7];
    int total = 0;
    for (int i = 0; i < 7; i++){
        cin >> days[i];
        total += days[i];
    }
    int i;
    while (n > 0)
        for (i = 0; i < 7; i++) {
            n -= days[i];
            if (n <= 0) break;
        }
    
    cout << i + 1;

    return 0;
}