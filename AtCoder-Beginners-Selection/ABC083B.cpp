#include <climits>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int result = 0;

    for(int num = 1; num < N + 1; num++) {
        int sum = num / 10000 + (num / 1000) % 10 + (num / 100) % 10 +
                  (num / 10) % 10 + (num / 1) % 10;
        if(sum >= A && sum <= B) {
            // cout << num << endl;
            result += num;
        }
    }

    cout << result << endl;
    return 0;
}
