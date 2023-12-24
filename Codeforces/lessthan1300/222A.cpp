#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;
    k -= 1;
    vector<int> x;
    unordered_map<int, int> count;

    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        x.push_back(temp);
        if (count.find(temp) != count.end())
            count[temp]++;
        else
            count[temp] = 1;
        

    }

    long long operations = 0;
    long long start = 0;
    while (true) {

        if (count[x[start]] == n){
            cout << operations;
            break;
        }
        
        x.push_back(x[start + k]);
        count[x[start]]--;
        count[x[start + k]]++;
        start++;
        operations++;

        if (start >= n) {
            bool loop = true;
            for (int i = 0; i < n; i++)
                loop = loop && (x[start - n + i] == x[start + i]);
            
            if (loop) {
                cout << -1 << endl;
                break;
            }
        }
    }



    return 0;








}