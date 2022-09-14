#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

struct TreeNode {
    char color;
    TreeNode *next;
    TreeNode(char x) : color(x), next(nullptr) {}
    TreeNode(char x, TreeNode *next) : color(x), next(next) {}
};
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<int, TreeNode*> lookup(n);
    for (int i = 0; i < n; ++i) {
        lookup[i] = new TreeNode(s[i]);
    }
    int x = n - 1;
    int index1, index2;
    while (x--) {
        cin >> index1 >> index2;
        lookup[index1]->next = lookup[index2];
    }
    return 0;
}