#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string DNA_sequence;
    cin >> DNA_sequence;
    long long int seq_length = DNA_sequence.length();
    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < seq_length; i++) {
        if (DNA_sequence[i] == DNA_sequence[i - 1]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 1;
        }
    }
    cout << max_length << "\n";
}
