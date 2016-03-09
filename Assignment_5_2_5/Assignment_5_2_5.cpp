/*
    Assignment 5-2-5 自除整數
    描述：
        對一個整數 n，如果其各個位數的數字相加得到的數 m 可以整除 n ，則稱 n 為自除整數。
        現求出從10到 n (n<100)之間的所有自除整數。
    輸入：
        有一行，整數 n (10 <= n < 100)
    輸出：
        有多行，按從小到大的順序輸出所有大於等於10，小於等於 n 的自除整數，每行一個自除整數。
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int m = 0;

    for (int i = 10; i <= n; i++){
        m = i/10 + i%10;    //n<100，只需要考慮十位數和個位數
        if (i % m == 0) cout << i << endl;
    }
    return 0;
}
