/*
    Assignment 3-2-5 分離整數的各個數位
    描述：
        從鍵盤輸入一個任意的三位整數，要求正確地分離出他的百位、十位和個位數。
        並分別在屏幕上輸出。
        輸出採用每行輸出一個數的方式，不帶任何符號。
    輸入：
        一個任意的三位數
    輸出：
        三位數的百位、十位和個位數
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;


    cout << n/100 << endl;
    n = n % 100;
    cout << n/10 << endl;
    n = n % 10;
    cout << n << endl;

    return 0;
}
