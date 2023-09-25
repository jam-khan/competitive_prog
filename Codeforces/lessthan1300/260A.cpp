#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    string a, b;
    int n;

    cin >> a >> b >> n;
    int b_size = b.length();

    string result = a;

    for (int i = 0; i < n; i++) {

        int temp;
        if (result.length() < 9) {
            temp = stoi(result);
        } else {
            temp = stoi(result.substr(result.length() - 9));
        }
        

        if ((temp * 10) % stoi(b) == 0) {
            result = result + "0";
        }
        else if (stoi(b) - ((temp * 10) % stoi(b)) < 10) {
            result = result + to_string(stoi(b) - (temp * 10) % stoi(b));
        }
        else 
            break;
    }

    if (result == a) {
        cout << "-1";
    } else {
        cout << result;
    }
    
    return 0;
}


