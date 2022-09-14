#include<iostream>
using namespace std;
#include<cmath>

inline long long getAns(long long n) {
    long long sum = 0;
    for (int i = n; i >= 1; --i) {
        sum += (log(n)/log(2) + 1);
    }
    return sum;
}
int main() {
    long long n;
    cin >> n;
    cout << getAns(n) << endl;
    return 0;
}