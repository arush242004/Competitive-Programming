#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    vector<long long int> x_coordinate_list;
    vector<long long int> y_coordinate_list;
    while (t > 0) {
        long long int x, y;
        cin >> x >> y;
        x_coordinate_list.push_back(x);
        y_coordinate_list.push_back(y);
        t -= 1; 
    }
    vector<long long int> elements;
    for (int i = 0; i < x_coordinate_list.size(); i++) {
        long long int n = max(x_coordinate_list[i], y_coordinate_list[i]);
        long long int a_nn = n*n - (n - 1);
        if (x_coordinate_list[i] == y_coordinate_list[i]) {
            elements.push_back(a_nn);
            }
        else if (n%2 == 0) {
            long long int d = x_coordinate_list[i] - y_coordinate_list[i];
            elements.push_back(a_nn + d);
            }
        else {
            long long int d = x_coordinate_list[i] - y_coordinate_list[i];
            elements.push_back(a_nn - d);
            }
        }
    int k = 0;
    while (k < elements.size()) {
    cout << elements[k] << "\n";
    k += 1;
    }
}