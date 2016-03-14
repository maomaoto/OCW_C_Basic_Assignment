/*
    Assignment 6-7 中位數
    描述：
        給出一組無序整數，求出中位數，如果求最中間兩個數的平均數，向下取整即可(不需要使用浮點數)
    輸入：
        該程序包含多組測試數據，每一組測試數據的第一行為 N，代表該組測試數據包含的數據個數。
        1 <= N <= 15000
        接著 N 行為 N 個數據的輸入， N=0 時結束輸入。
    輸出：
        輸出中位數，每一組測試數據一行
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int num[100] = {0};
    int n = 0;
    int m = 0;
    int temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    // reverse last m numbers
    for (int i = 1; i <= m /2; i++){
        temp = num[n-i];
        num[n-i] = num[n-m+i-1];
        num[n-m+i-1] = temp;
    }


    // reverse all n numbers
    for (int i = 0; i < n /2; i++){
        temp = num[i];
        num[i] = num[n-i-1];
        num[n-i-1] = temp;
    }


    // reverse last n-m numbers
    for (int i = 1; i <= (n-m) /2; i++){
        temp = num[n-i];
        num[n-i] = num[m+i-1];
        num[m+i-1] = temp;
    }

    // print result
    for (int i = 0; i < n; i++){
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}
