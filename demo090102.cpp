#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> data;
    int x;
    while (cin >> x) {
        data.emplace_back(x);
    }
    int n;
    cin >> n;
    int size = data.size();
    vector<vector<int>> dp(size, vector<int>(2));
    dp[0][0] = 1;
    dp[0][1] = n - data[0];
    for (int i = 1; i < size; ++i) {
        if (data[i] > dp[i - 1][1]) {
            dp[i][1] = n - data[i];
            dp[i][0] = dp[i - 1][0] + 2 * i + 1;
        } else {
            dp[i][1] = dp[i - 1][1] - data[i];
            dp[i][0] = dp[i - 1][0] + 1;
        }
    }
    cout << dp[size - 1][0] << endl;
    return 0;
}