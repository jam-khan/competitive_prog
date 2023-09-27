
#include <stdio.h>
#include <iostream>

using namespace std;


int main() {

    long t;
    cin >> t;

    long sizes[t];
    long long maxi = 0;
    for (long i = 0; i < t; i++) {
        cin >> sizes[i];
        maxi = (sizes[i] > maxi) ? sizes[i]: maxi;
    }

    long long a[maxi];
    a[0] = 6LL;
    a[1] = 8LL;
    for (long long i = 2; i < maxi; i++) {
        a[i] = a[i - 1] + 1;
    }


    // for (int j = 2; j < maxi; j++) {
    //     // if (a[j] <= a[j - 1])
    //     //     cout << j << " ";
    //     if (((3 * a[j]) % (a[j - 1] + a[j - 2])) == 0)
    //         cout << j << " ";
    //     cout << endl;

    // }
    
    for(long long i = 0; i < t; i++) {
        for(long long j = 0; j < sizes[i]; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;

}