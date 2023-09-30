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
    int x, y;

    int P[n][2];
    int ans = 0;

    for (int i = 0; i < n; i++)
        cin >> P[i][0] >> P[i][1];
    
    for(int i = 0; i < n; i++){
        int left = 0, right = 0, top = 0, bottom = 0;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            
            if (P[i][1] == P[j][1]){
                if (P[i][0] < P[j][0]) right++;
                if (P[i][0] > P[j][0]) left++;
            }

            if (P[i][0] == P[j][0]) {
                if (P[i][1] < P[j][1]) top++;
                if (P[i][1] > P[j][1]) bottom++;
            }
            
        }
        if (left >= 1 && right >= 1 && top >= 1 && bottom >= 1)
            ans++;
    }

    cout << ans;

    return 0;
}