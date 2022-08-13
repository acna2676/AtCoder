#include <bits/stdc++.h>
// #include <iostream>
// #include <string.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    int num_list[N];
    string op;
    int num;

    // ここにプログラムを追記
    for(int i = 0; i < N; i++) {
        cin >> op >> num;
        if(op == "+") {
            A += num;
        }
        if(op == "-") {
            A -= num;
        }
        if(op == "*") {
            A *= num;
            // cout << "###";
        }
        if(op == "/") {
            A /= num;
        }
        // cout << A << endl;

        num_list[i] = A;
    }

    for(int j = 0; j < N; j++)
        cout << j + 1 << ":" << num_list[j] << endl;
}
