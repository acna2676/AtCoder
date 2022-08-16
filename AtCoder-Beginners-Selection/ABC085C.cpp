#include <climits>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int result = 0;
    int count_10000 = -1;
    int count_5000 = -1;
    int count_1000 = -1;

    for(int i = 0; i < N + 1; i++) {
        for(int j = 0; j < N - i + 1; j++) {
            for(int l = 0; l < N - (i + j) + 1; l++) {

                int sum = 10000 * i + 5000 * j + 1000 * l;
                if(Y == sum && (i + j + l) == N) {
                    // cout << i << endl;
                    count_10000 = i;
                    count_5000 = j;
                    count_1000 = l;
                }
            }
        }
    }

    cout << count_10000 << " " << count_5000 << " " << count_1000 << endl;
    return 0;
}
