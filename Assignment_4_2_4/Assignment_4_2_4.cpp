/*
    Assignment 4-2-4 人民幣支付
    描述：
        從鍵盤輸入一指定金額(以元為單位，如345)，然後輸出支付該金額的各種面額的人民幣數量，
        顯示100元、50元、20元、10元、5元、1元各多少張，要求盡量使用大面額的鈔票。
    輸入：
        一個小於1000的正整數。
    輸出：
        輸出分行，每行顯示一個整數，從上到下分別表示100元、50元、20元、10元、5元、1元人民幣的張數。
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    cout << n/100 << endl;
    n %= 100;
    cout << n/50 << endl;
    n %= 50;
    cout << n/20 << endl;;
    n %= 20;
    cout << n/10 << endl;
    n %= 10;
    cout << n/5 << endl;
    n %= 5;
    cout << n << endl;

    return 0;
}
