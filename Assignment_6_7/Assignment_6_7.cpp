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
    實作方法：
        使用一個長度為N/2+1的數組來儲存前N/2+1大的數，每加一個新的數進來，就排序
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printNum(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main(){

    int num[15000] = {0};
    int largeK[7501] = {0};
    int n = 0;
    int k = 0;


    while (cin >> n){
        if (n == 0) break;
        else {
            k = n/2 + 1;

            for (int i = 0; i<n; i++){
                cin >> num[i];
            }


            // 前 k個數，一邊存入largeK數組中，一邊排序
            largeK[0] = num[0];
            for (int i = 1; i < k; i++){
                if (num[i] < largeK[i-1]) largeK[i] = num[i];   //如果比最尾端的小，那就排在最後
                else {  //找出該放的位置，從前面開始，如果比現在這個位置的大，那就把剩下全部的數往後移
                    for (int j = 0; j < i; j++){
                        if (num[i] > largeK[j]){
                            for( int l = i; l > j; l--){
                                largeK[l] = largeK[l-1];
                            }
                            largeK[j] = num[i];
                        }
                        break;
                    }
                }
            }
            //printNum(largeK, k);

            for (int i = k; i < n; i++){
                if (num[i] > largeK[k]){    // 如果新數字比largeK的最後一個大，加入排序
                    for (int j = 0; j < k; j++){
                        if (num[i] > largeK[j]){
                            for( int l = k-1; l > j; l--){
                                largeK[l] = largeK[l-1];
                            }
                            largeK[j] = num[i];
                        }
                        break;
                    }
                }
            }
            //printNum(largeK, k);

            if (n%2 == 0){
                cout << (largeK[k-1] + largeK[k-2]) /2 << endl;
            } else{
                cout << largeK[k-1] << endl;
            }
        }
    }



    return 0;
}
