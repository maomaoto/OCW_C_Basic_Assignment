/*
    Assignment 7-2 能被3, 5, 7 整除的數
    描述：
        輸入一個整數，判斷它是否能被3, 5, 7 整除，並輸出以下訊息：
        1. 能同時被3, 5, 7整除(直接輸出3 5 7，每個數中間一個空格)
        2. 能被其中兩個數整除(輸出兩個數，小的在前，大的在後，中間用空格分隔。)
        3. 能被其中一個數整除(輸出這個除數)
        4. 不能被任何數整除(輸出小寫字符'n'，不包含單引號)
    輸入：
        一個數字
    輸出：
        一個數字，從小到大排列，包含 3, 5, 7 中為該輸入的除數的數字，數字中間用空格隔開。
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int n = 0;

    while(cin >> n){
        int flag = 0;
        if (n % 3 == 0) {
            cout << '3' << ' ';
            flag = 1;
        }
        if (n % 5 == 0) {
            cout << '5' << ' ';
            flag = 1;
        }
        if (n % 7 == 0) {
            cout << '7';
            flag = 1;
        }

        if (flag == 0) cout << 'n' << endl;
        else cout << endl;
    }
    return 0;
}
