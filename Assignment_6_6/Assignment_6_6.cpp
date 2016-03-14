/*
    Assignment 6-6 循環移動
    描述：
        給定一組整數，要求利用數組把這組數保存起來，再利用實現對數組中的數循環移動。
        假定共有 N 個整數，則要使前面各數順序向後移 m 個位置，並使最後 m各數變為最前面的 m 各數。
        注意，不要用先輸出後m個數，再輸出前面n-m個數的方法實現。也不要用兩個數組的方式實現。
        要求只用一個數組的方式實現，一定要保證在輸出結果時，輸出的順序和數組中的順序是一致的。
    輸入：
        輸入有兩行，第一行包含一個正整數 n 和一個正整數 m。
        第二行包含 n 個正整數。每兩個正整數中間用一個空格隔開。
    輸出：
        輸出只有一行：經過循環移動後數組中整數的順序依次輸出，每兩個整數之間用空格隔開。
    實現方法：
        1. 最後 m 個數順序顛倒
        2. 全部 n 個數順序顛倒
        3. 最後 n-m 個數順序顛倒
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
