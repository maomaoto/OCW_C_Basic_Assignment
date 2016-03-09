/*
    Assignment 4-2-2 成績判斷
    描述：
        輸入0-100的分數，判斷分數代表什麼等級
        95 <= 分數 <= 100，輸出1
        90 <= 分數 < 95，輸出2
        85 <= 分數 < 90，輸出3
        80 <= 分數 < 85，輸出4
        70 <= 分數 < 80，輸出5
        60 <= 分數 < 70，輸出6
        分數 < 60，輸出7
    輸入：
        n
    輸出：
        m
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    if ( 95 <= n) cout << 1 << endl;    //不會超過100，不需判斷
    else if ( 90 <= n) cout << 2 << endl;
    else if ( 85 <= n) cout << 3 << endl;
    else if ( 80 <= n) cout << 4 << endl;
    else if ( 70 <= n) cout << 5 << endl;
    else if ( 60 <= n) cout << 6 << endl;
    else cout << 7 << endl;

    return 0;
}
