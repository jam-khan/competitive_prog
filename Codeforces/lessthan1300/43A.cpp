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

    string first = "";
    string second = "";
    cin >> first;
    int count = 1;

    for (int i = 1; i < n; i++) {
        string temp;
        cin >> temp;
        if (temp != first) {
            second = temp;
            count--;
        } 
        else
            count++;
    }

    cout << ((count < 0) ? second: first);

    return 0;

}