#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    vector<int> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }
    for (auto x : data) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}