#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        long long a, b, n;
        
        cin >> a >> b >> n;

        long long total = 0;
        for (int j = 0; j < n; j++) {
            long long temp;
            cin >> temp;
            total += min(a - 1, temp);

        }
        cout << total + b << endl;
    }

    return 0;
}