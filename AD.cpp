#include <iostream>
#include <map>
#include <vector>

using namespace std;

int calc_int(vector<int> operands, vector<string> operators) {
    int result = operands.at(0);
    for(int i = 0; i < operators.size(); i++) {
        /* code */
        operators.at(i);
        if(operators.at(i) == "+") {
            result += operands.at(i + 1);
        } else if(operators.at(i) == "-") {
            result -= operands.at(i + 1);
        }
    }
    return result;
}

void print_int(int operand) { cout << operand << endl; }

// void print_int(map<string, int> variables, vector<int> operands,
//                vector<string> operators) {
//     int result = variables["x"];
//     cout << "x = " << variables["x"] << " " << operators.at(0) << " "
//          << operands.at(0) << endl;
//     for(int i = 0; i < operators.size(); i++) {
//         /* code */
//         operators.at(i);
//         if(operators.at(i) == "+") {
//             result += operands.at(0);
//         } else if(operators.at(i) == "-") {
//             result -= operands.at(i + 1);
//         }
//     }
//     cout << result << endl;
// }

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
    cout << "[ ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

template <class T> void print(vector<T> list) {
    for(size_t i = 0; i < list.size(); ++i) {
        cout << list.at(i) << " ";
    }
    cout << endl;
}

int main() {
    // input ex. 1
    // 1
    // print_int 5 ;

    // input ex. 2
    // 2
    // print_int 1 - 2 ;
    // print_vec [ 1 , 2 , 3 ] - [ 3 , 2 , 1 ] ;
    int N;
    string command;
    int operand;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> command >> operand;
        /* code */
    }
    print_int(operand);
    print_vec(vec);

    // vector<string> others = {};    //(1);
    // vector<int> operands = {};     //(2);
    // vector<string> operators = {}; //(1);

    // for(int i = 0; i < 7; i++) { // 13; i++) {
    //     string other;
    //     int operand;
    //     string operator_i;
    //     if(i == 0 || i == 1 || i == 2 ||
    //        i == 6) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> other;
    //         others.push_back(other);
    //         if(other == ";") {
    //             break;
    //         }
    //     } else if(i == 3 || i == 5) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> operand;
    //         operands.push_back(operand);
    //         // cout << operand << " " << operands.at(2) << endl;
    //     } else if(i == 4) { // || i == 8 || i == 10 || i == 12) {
    //         cin >> operator_i;
    //         operators.push_back(operator_i);
    //     }
    // }
    // int result = calc_int(operands, operators);
    // map<string, int> variables;
    // variables[others.at(1)] = result;

    // vector<string> others_print = {};    //(1);
    // vector<int> operands_print = {};     //(2);
    // vector<string> operators_print = {}; //(1);

    // for(int i = 0; i < 5; i++) { // 13; i++) {
    //     string other_print;
    //     int operand_print;
    //     string operator_i_print;
    //     if(i == 0 || i == 1 || i == 4) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> other_print;
    //         cout << "other_prin!" << other_print << endl;
    //         others.push_back(other_print);
    //         if(other_print == ";") {
    //             break;
    //         }
    //     } else if(i == 3) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> operand_print;
    //         cout << "operand_print!" << operand_print << endl;
    //         operands_print.push_back(operand_print);
    //     } else if(i == 2) { // || i == 8 || i == 10 || i == 12) {
    //         cin >> operator_i_print;
    //         cout << "operator_i_print!" << operator_i_print << endl;
    //         operators_print.push_back(operator_i_print);
    //     }
    // }
    // print_int(variables, operands_print, operators_print);

    // -------------------vector------------------------
    // vector<string> others_vec = {};    //(1);
    // vector<int> operands_vec = {};     //(2);
    // vector<string> operators_vec = {}; //(1);

    // for(int i = 0; i < 11; i++) { // 13; i++) {
    //     string other_vec;
    //     int operand_vec;
    //     string operator_i_vec;
    //     if(i == 0 || i == 1 || i == 2 || i == 3 || i == 9 ||
    //        i == 10) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> other_vec;
    //         others_vec.push_back(other_vec);
    //         if(other_vec == ";") {
    //             break;
    //         }
    //     } else if(i == 4 || i == 6) { // || i == 7 || i == 9 || i == 11) {
    //         cin >> operand_vec;
    //         operands_vec.push_back(operand_vec);
    //     } else if(i == 8) {
    //         // operands_vec.push_back(variables["x"]);
    //         operands_vec.push_back(3);
    //     } else if(i == 5 || i == 7) { // || i == 8 || i == 10 || i == 12) {
    //         cin >> operator_i_vec;
    //         operators_vec.push_back(operator_i_vec);
    //     }
    // }
    // map<string, vector<int>> variables_vec;
    // variables_vec[others_vec.at(1)] = operands_vec;
    // vector<int> mock = {4, 5, 6};

    // // cout << "[" << operands_vec.at(0) + mock.at(0) << " "
    // //      << operands_vec.at(1) + mock.at(1) << " "
    // //      << operands_vec.at(2) + mock.at(2) << " "
    // //      << "]" << endl;

    // print_vec({operands_vec.at(0) + mock.at(0), operands_vec.at(1) +
    // mock.at(1),
    //            operands_vec.at(2) + mock.at(2)});
    return 0;
}
