#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main() {
    int p, q;
    cin >> p >> q;
    vector<int> data1(p);
    for (int i = 0; i < p; ++i) {
        cin >> data1[i];
    }
    vector<int> data2(q);
    unordered_set<int> lookup;
    for (int i = 0; i < q; ++i) {
        cin >> data2[i];
        lookup.insert(data2[i]);
    }
    for (int i = 0; i < p; ++i) {
        if (lookup.find(data1[i]) == lookup.end()) {
            data2.emplace_back(data1[i]);
            lookup.insert(data1[i])
        }
    }
    sort(data2.begin() + q,data2.end());
    for (auto x : data2) {
        cout << x << " ";
    }
    return 0;
}