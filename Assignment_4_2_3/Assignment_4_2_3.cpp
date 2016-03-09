/*
    Assignment 4-2-3 找出第k大的數
    描述：
        用戶輸入N和K，然後接著輸入N個正整數(無序的)，程序在不對N個整數排序的情況下，
        找出第K大的數。注意，第K大的數意味著從大到小排在第K位的數。
    輸入：
        N
        K
        a1 a2 a3 ... aN
    輸出：
        b
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    int k;
    int number[100];
    cin >> n >> k;
    for (int i = 0; i < n ; i++) {
        cin >> number[i];
    }

    int max = 0;    // 本輪最大的值
    int position = 0;   // 最大值所在的位置
    for (int i = 0; i < k; i++){
        // 找出最大的值及所在的位置
        for (int j = 0; j < n; j++){
            if (number[j] > max) {
                max = number[j];
                position = j;
            }
        }
        // 如果不是最後一輪(第k輪)，把該位置的數清為0
        if (i != k-1){
            number[position] = 0;
            max = 0;
        }
    }
    cout << max << endl;

    return 0;
}
