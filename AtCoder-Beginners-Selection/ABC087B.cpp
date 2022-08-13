#include <iostream>
using namespace std;
int main() {
    // 整数の入力
    int A, B, C, X, sum, count;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;
    count = 0;
    for(int i = 0; i < A + 1; i++) {
        for(int j = 0; j < B + 1; j++) {
            for(int l = 0; l < C + 1; l++) {
                sum = 500 * i + 100 * j + 50 * l;

                if(sum == X) {
                    count += 1;
                }
                sum = 0;
            }
        }
    }

    cout << count << endl;
    return 0;
}
