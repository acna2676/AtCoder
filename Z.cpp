#include <iostream>
#include <vector>

#include <bits/stdc++.h>
using namespace std;

bool sort_pairs(const pair<int, int> &x, const pair<int, int> &y) {
    return x.second < y.second;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> p;
    for(int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end(), sort_pairs);

    for(pair<int, int> t : p) {
        int x, y;
        tie(x, y) = t;
        cout << x << " " << y << endl;
    }
}
