#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N;
    map<int, int> score; // 名前→成績
    cin >> N;
    vector<int> l(N);
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        l[i] = num;
    }
    for(int i = 0; i < N; i++) {
        if(score.count(l[i])) {
            score[l[i]] += 1;
        } else {
            score[l[i]] = 1;
        }
    }

    int max = 0;
    int key = 0;
    for(auto p : score) {
        if(max < p.second) {
            key = p.first;
            max = p.second;
        }
    }

    cout << key << " " << max << endl; // Aliceの成績
}
