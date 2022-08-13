#include <iostream>
#include <string>
using namespace std;
int main() {
    // 整数の入力
    string a;
    int count = 0;
    cin >> a;

    if(a[0] == '1') {
        count += 1;
    }
    if(a[1] == '1') {
        count += 1;
    }
    if(a[2] == '1') {
        count += 1;
    }

    cout << count << endl;
    return 0;
}
