
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する

// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second
//     秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
struct Clock {
    int hour = 0;    // 時間を表す (0~23の値をとる)
    int minutes = 0; // 分を表す   (0~59の値をとる)
    int second = 0;  // 秒を表す   (0~59の値をとる)
    void set(int hour_, int minutes_, int second_) {
        hour = hour_;
        minutes = minutes_;
        second = second_;
    };
    string to_str() {
        char hour_buff[3];
        char minutes_buff[3];
        char second_buff[3];
        char result[9];

        sprintf(hour_buff, "%02d", hour);
        sprintf(minutes_buff, "%02d", minutes);
        sprintf(second_buff, "%02d", second);
        sprintf(result, "%s%s%s%s%s", hour_buff, ":", minutes_buff, ":",
                second_buff);
        return result;
    };
    void shift(int diff_second) {

        int time_before = hour * 3600 + minutes * 60 + second;
        int time_after = (time_before + diff_second + 86400) % 86400;
        second = time_after % 60;
        minutes = (time_after % 3600) / 60;
        hour = (time_after / 3600) % 24;
        // cout << "second = " << second << endl;
        // cout << "minutes = " << minutes << endl;
        // cout << "hour = " << hour << endl;
    };
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
    // 入力を受け取る
    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    // Clock構造体のオブジェクトを宣言
    Clock clock;

    // set関数を呼び出して時刻を設定する
    clock.set(hour, minute, second);

    // 時刻を出力
    cout << clock.to_str() << endl;

    // 時計を進める(戻す)
    clock.shift(diff_second);

    // 変更後の時刻を出力
    cout << clock.to_str() << endl;
}
