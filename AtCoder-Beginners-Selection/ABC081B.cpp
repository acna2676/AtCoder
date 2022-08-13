#include <climits>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    int counts[N];

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        int count_tmp = 0;
        while(num % 2 == 0) {
            num /= 2;
            count_tmp += 1;
        }
        counts[i] = count_tmp;
    }

    int min = INT_MAX;
    for(int i : counts) {
        if(i < min) {
            min = i;
        }
    }

    cout << min << endl;
    return 0;
}
