#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

#define maxn 200001
int dp[maxn];
int main() {
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }
    dp[0] = abs(data[0] - data[1]);
    int maxVal = dp[0];
    int index = 0;
    for (int i = 1; i < n; ++i) {
        if (i = n - 1) {
            dp[i] = abs(data[n - 1] - data[n - 2]);
        } else {
            dp[i] = max(abs(data[i - 1] - data[i]),abs(data[i + 1] - data[i]));
        }
        if (dp[i] >= maxVal) {
            index = i;
            maxVal = dp[i];
        }
    }
    if (index) {
        if (index == n - 1) {
            data[index] = data[index - 1];
        } else {
            data[index] = (data[index + 1] - data[index - 1])/2 + data[index - 1];
        }
    } else {
        data[index] = data[index + 1];
    }

    dp[0] = abs(data[0] - data[1]);
    int nextmaxVal = dp[0];
    for (int i = 1; i < n; ++i) {
        if (i = n - 1) {
            dp[i] = abs(data[n - 1] - data[n - 2]);
        } else {
            dp[i] = min(abs(data[i - 1] - data[i]),abs(data[i + 1] - data[i]));
        }
        nextmaxVal = min(nextmaxVal, dp[i]);
    }
    cout << nextmaxVal << endl;
    return 0;
}