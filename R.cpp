#include <bits/stdc++.h>
// #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data(5);
    for(int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
    // ここにプログラムを追記
    for(int j = 0; j < data.size() - 1; j++) {
        if(data[j] == data[j + 1]) {
            cout << "YES";
            break;
        }
        if(j == data.size() - 2) {
            cout << "NO";
        }
    }
}
