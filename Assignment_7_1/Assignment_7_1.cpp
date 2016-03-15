/*
    Assignment 7-1 判斷閏年
    描述：
        判斷某年是否為閏年
    輸入：
        一行，包含一個整數 a (0 < a < 3000)
    輸出：
        一行，如果公元 a 年是閏年輸出 Y ，否則輸出 N
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int n = 0;
    cin >> n;
    if (n % 4 == 0){
        if (n % 100 != 0){
            cout << 'Y' << endl;
        } else {
            if (n % 400 == 0){
                cout << 'Y' <<endl;
            }else {
                cout << 'N' << endl;
            }
        }
    } else {
        cout << 'N' << endl;
    }

    return 0;
}
