#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() { 
    
    int s, n;
    cin >> s >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        s -= x;
        if (s > 0)
            s += y;

    }

    cout << ((s <= 0) ? "NO" : "YES");

    return 0; 

}