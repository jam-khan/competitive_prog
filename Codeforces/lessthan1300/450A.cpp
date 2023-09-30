#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {


    int n;
    double m;
    cin >> n >> m;

    int a[n];
    double maxc = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        maxc = max(maxc,  ceil(a[i] / m));
    }

    int last_kid = 0;
    for (int i = 0; i < n; i++)
        last_kid = ( ceil(a[i] / m) == maxc) ? i : last_kid;
    
    cout << (last_kid + 1);

    return 0;
}