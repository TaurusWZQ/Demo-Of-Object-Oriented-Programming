#include<stdio.h>
#include<iostream>
using namespace std;
#define LIMIT 80
int main() {
    int c1 = 250;
    int c2 = (c1/100)*LIMIT;
    cout << c2 << endl;
}