#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int q, val;
    cin >> q;
    vector<int> help;
    while (q--) {
        cin >> val;
        if (!(val%2))
            cout << val << endl;
        while (val) {
            int cur = val % 10;
            val /= 10;
            help.emplace_back(cur);
        }
        for (int i = 0; i < help.size(); ++i) {
            if (help[i])
        }
    }


    return 0;
}