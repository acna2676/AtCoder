#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int result = 1;

    // ここにプログラムを追記
    for(int i = 0; i < S.length(); i++) {

        if(S[i] == '+') {
            result++;
        }
        if(S[i] == '-') {
            result--;
        }
    }
    cout << result << endl;
}
