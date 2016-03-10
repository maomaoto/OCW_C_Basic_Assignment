/*
    Assignment 6-4 矩陣交換行
    描述：
        在main函數中，生成一個5*5的矩陣，輸入矩陣數據，並輸入 n, m 的值。
        判斷 n, m 是否在數組範圍內，如果不在，則輸出error；如果在範圍內，則將n行和m行交換，
        輸出交換 n, m後的新矩陣。
    輸入：
        5*5矩陣的數據，以及 n, m的值。
    輸出：
        如果不可交換，輸出"error"。
        如果可以交換，輸出新矩陣。
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int a[5][5] = 0;
    int n = 0, m = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    if ( (n >= 0) && (n <5) && (m >= 0) && (m < 5)){

    }else {
        cout << "error" << endl;
    }
    return 0;
}
