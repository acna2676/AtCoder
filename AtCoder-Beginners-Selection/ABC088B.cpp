#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max(vector<int> &v) {
    int maxVal = INT_MIN; // 整数最小値
    int max_index = 0;
    for(int i = 0; i < (int)v.size(); ++i) {
        if(v[i] > maxVal) {
            maxVal = v[i];
            max_index = i;
        }
    }
    v.erase(v.begin() + max_index);

    return maxVal;
}

int main() {
    int N;
    int A_point = 0;
    int B_point = 0;
    cin >> N;
    vector<int> points(N);

    for(int i = 0; i < N; i++) {
        cin >> points[i];
    }
    for(int i = 0; i < N; i++) {

        int point = max(points);
        if(i % 2 == 0) {
            A_point += point;
        } else {
            B_point += point;
        }
    }
    cout << A_point - B_point << endl;
    return 0;
}
