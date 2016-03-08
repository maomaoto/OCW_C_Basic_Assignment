/*
    Assignment 3-2-1 蘋果與蟲子
    描述：
        一箱n個蘋果，箱裡有條蟲子，蟲子每x小時能吃掉一個蘋果。
        假設蟲子在吃完一個蘋果之前不會吃另一個，經過y小時候你還有多少個完整的蘋果？
    輸入：
        輸入僅一行，包含n, x, y (均整數)
    輸出：
        輸出僅一行，剩下的蘋果個數。
*/

#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int eaten = 0;  //吃掉的蘋果數
    // 如果沒有整除的話要多加1
    if (y%x == 0) eaten = y/x;
    else eaten = y/x+1;

    if (n > eaten) cout << n - eaten << endl;
    else cout << '0' << endl;   //吃光光
    return 0;

}
