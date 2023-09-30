#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


int main() {

    long long t, m;
    int a, b, c;

    cin >> t >> m;
    cin >> a >> b >> c;

    int N[t];
    N[0] = a;
    for (long long i = 1; i < t; i++){
        double part1 = ((1 - b ^ i) / (1 - b)) * c;
        double part2 = a * b ^(i);

        N[i] = ((long long) (part1 + part2)) % 256;




        // N[i] = ((a * (b ^ i)) + (c * ((1 - b ^(i)) / (1 - b)))) % 256;
        cout << N[i] << endl;
    }
    
    int F[t];
    int S[m];

    for (long i = 0; i < t; i++)
        cin >> F[i];
    
    for (long i = 0; i < m; i++)
        cin >> S[i];
    
    vector<long long> positions;
    for (long long i = 0; i < t - m; i++){
        long long match = 0;
        for (long long x = 0; x < m; x++){
            if (F[i + x] != ((N[i + x] + S[x])% 256))
                break;
            match++;
        }
        if (match == m)
            positions.push_back(i);
    }

    cout << positions.size();

    if (positions.size() > 0) {
        cout << endl;
        for (int i = 0; i < positions.size(); i++){
            cout << positions[i] + 1 << " ";
        }
    }

    return 0;


}