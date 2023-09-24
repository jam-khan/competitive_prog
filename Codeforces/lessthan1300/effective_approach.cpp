#include <iostream>
#include <stdlib.h>
#include <unordered_set>

#include <unordered_map>

using namespace std;


int main() {
    long size;
    cin >> size;

    unordered_set<long> querySet;
    unordered_map<long, long> occurrenceCountLeft, occurrenceCountRight;

    long arr[size];
    long i = 0;
    while (i < size) {
        cin >> arr[i];
        i++;
    }


    long querySize;
    cin >> querySize;

    long queries[querySize];

    long j = 0;

    while (j < querySize) {
        cin >> queries[j];

        occurrenceCountLeft[queries[j]]++;
        occurrenceCountRight[queries[j]]++;
        j++;
    }

    // Linear search time
    long s, k, r;
    long long total_left = 0, total_right = 0;


    for (long i = 0; i < size; i++) {
        if (occurrenceCountLeft.find(arr[i]) != occurrenceCountLeft.end()){
            total_left += occurrenceCountLeft[arr[i]] * (i + 1);
            occurrenceCountLeft.erase(arr[i]);
        }
    }

    for (long i = size - 1; i >= 0; i--) {
        if (occurrenceCountRight.find(arr[i]) != occurrenceCountRight.end()) {
            total_right += occurrenceCountRight[arr[i]] * (size - i);
            occurrenceCountRight.erase(arr[i]);
        }
    }
    
    cout << total_left << " " << total_right;

    return 0;
}