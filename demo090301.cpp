#include<iostream>
#include<string>
using namespace std;
inline int countOne(int n, int x) {
    int cnt = 0;
    for (;n > 0;n /= 10) {
        if (n % 10 == x) {
            cnt++;
        }
    }
    return cnt;
}
inline int count(int n, int x) {
    int cnt = 0;
    for (int i = 1;i <= n;i++) {
        cnt += countOne(i, x);
    }
    return cnt;
}
class Solution {
public:
    string CountNumber(int n) {
        string res;
        for (int i = 0; i < 9; ++i) {
            res.push_back(count(n, i) + '0');
            res.push_back(' ');
        }
        res.push_back(count(n, 9));
        return res;
    }
};