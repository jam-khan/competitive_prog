#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;


int main() {

    int x, y, z;

    cin >> x >> y >> z;

    int a, b, c;

    a = (int) sqrt((x * y) / z);
    b = (int) sqrt((y * z) / x);
    c = (int) sqrt((x * z) / y);

    cout << 4 * (a + b + c);

}