#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int list[N];
    int num;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        cin >> num;
        list[i] = num;
        sum += num;
    }
    int average = sum / N;

    for(int j = 0; j < N; j++) {
        cout << list[j] - average << endl;
    }
}
