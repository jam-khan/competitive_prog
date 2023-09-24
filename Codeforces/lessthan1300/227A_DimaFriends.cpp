#include <stdio.h>
#include <iostream>

using namespace std;

int main() {


    int numFriends;
    cin >> numFriends;

    int total = 0;
    int temp;
    for (int i = 0; i < numFriends; i++) {
        cin >> temp;
        total += temp;
    }
    int ways = 0;
    for (int i = 1; i <= 5; i++) {
        if ((i + total) % (numFriends + 1) != 1)
            ways++;
    }
    cout << ways;

    return 0;

}