#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    int p;
    int price;
    string text = "";
    cin >> p;

    // パターン1
    if(p == 1) {
        cin >> price;
    }

    // パターン2
    if(p == 2) {
        cin >> text;
        cin >> price;
    }

    int N;
    cin >> N;

    cout << text << "!" << endl;
    cout << price * N << endl;
}
