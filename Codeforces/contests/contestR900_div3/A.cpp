#include <stdio.h>
#include <iostream>

using namespace std;


int main() {

    int t;
    cin >> t;

    int answers[t];
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        // cout << n << k;
        bool found = false;
        for (int j = 0; j < n; j++){
            int temp;
            cin >> temp;
             
            if (temp == k) {
                found = true;
            }
        }
        if (!found)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;

}