/*
    Assignment 7-4 簡單計算器
    描述：
        一個最簡單的計算器，支持 +, -, *, / 四種運算，僅需考慮輸入輸出為整數的情況，
        數據和運算結果不會超過 int 表示的範圍。
    輸入：
        輸入只有一行，包含3個參數，其中第1、2個參數為整數，第3個參數為操作符(+, -, *, /)
    輸出：
        輸出只有一行，一個整數，為運算結果。然而：
        1. 如果出現除數為0的情況，則輸出: Divided by Zero!
        2. 如果出現無效的操作符(即不為 +, -, *, / 之一)，則輸出: Invalid operator!
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int a = 0;
    int b = 0;
    char o = '\0';

    cin >> a >> b >> o;

    switch(o){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            if (b != 0) cout << a/b << endl;
            else cout << "Divided by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
