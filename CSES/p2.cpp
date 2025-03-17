#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int input_n;
    vector<int> input;
    cin >> input_n;
    for (int i = 0; i < input_n - 1; i++) {
        int given_n;
        cin >> given_n;
        input.push_back(given_n);
    }
    sort (input.begin(), input.end());
    for (int i = 0; i < input_n; i++) {
        if (input[i] == i + 1) {
            continue;
        }
        else {
            cout << i + 1 << "\n";
            break;
        }
    }
}
