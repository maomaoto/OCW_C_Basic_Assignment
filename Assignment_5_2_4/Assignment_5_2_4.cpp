/*
    Assignment 5-2-4 找和為k的兩個元素
    描述：
        在一個長度為n(n<1000)的整數序列中，判斷是否存在某兩個元素之和為k。
    輸入：
        第一行輸入序列的長度n及k，用空格分開。
        第二行輸入序列中的n個整數，用空格分開。
    輸出：
        如果存在某兩個元素的和為k，輸出yes，否則輸出no。
*/

#include <iostream>
using namespace std;


int main(){

    int n, k;
    int num[1000];
    bool found = 0; // flag, set 1 if found

    cin >> n >> k;
    for (int i = 0; i < n ; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            if (i != j && (num[i] + num[j] == k)){
                found = 1;
                break;
            }
        }
        if (found == 1 ) break;
    }

    if (found == 1) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
