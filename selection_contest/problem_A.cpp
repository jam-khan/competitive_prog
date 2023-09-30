#include <stdio.h>
#include <iostream>

using namespace std;


int main() {


    long long n, X, Y, Z;

    cin >> n >> X >> Y >> Z;

    long long valid_students = 0;


    for(long long i = 0; i < n; i++) { 
        long long temp;
        cin >> temp;
        if (temp >= X)
            valid_students++;
    }
    
    long long team = (valid_students / 3);
    long long max_contests = (Z / Y), ans = 0;
    if (max_contests < team)
        team = max_contests;

    if (team == 0)
        cout << ans;
    else {
        
        if (max_contests < team)
            team = max_contests;
        
        if (Z >= team * Y){
            ans += 1;
            Z = Z - (team * Y);
        }

        if (Z != 0)
            ans += (long long) Z / Y;

        cout << ans;
        
    }

    

    return 0;
}