#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> list;
    int i;
    for (i = 0; i < n; i++) {
        int x;
        cin >> x;
        list.push_back(x);
    }
    long long int moves = 0;
    for (i = 0; i < n; i++) {
        if (list[i] < list[i-1]) {
            moves += list[i-1] - list[i];
            list[i] = list[i-1];
        }
        else {
            continue;
        }
    }
    cout << moves << "\n";
}