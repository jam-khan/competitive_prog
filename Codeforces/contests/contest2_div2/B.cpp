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
        int n, m;
        long long k;
        cin >> n >> m >> k;

        long long max_j = LLONG_MIN, min_j = LLONG_MAX, max_g = LLONG_MIN, min_g = LLONG_MAX, sum_j = 0, sum_g = 0;

        for (int j = 0; j < n; j++) {
            long long temp;
            cin >> temp;
            sum_j += temp;
            max_j = max(max_j, temp);
            min_j = min(min_j, temp);
        }

        for (int j = 0; j < m; j++) {
            long long temp;
            cin >> temp;
            sum_g += temp;
            max_g = max(max_g, temp);
            min_g = min(min_g, temp);
        }

        if (k % 2 == 1){
            if (min_j < max_g) {
                sum_j -= min_j;
                sum_j += max_g;
            }
        } else {
            if (min_g < max_j) {
                sum_j -= max_j;
                sum_j += min_g;
            }
        }

        cout << sum_j << endl;
    }

    return 0;
}   