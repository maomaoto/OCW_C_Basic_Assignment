/*
    Assignment 5-2-1 數字求和
    描述：
        給定一個正整數a，以及另外的5個正整數，問題是：這5個整數中，小於a的整數的和是多少？
    輸入：
        輸入一行，包含6個小於100的正整數，其中第一個正整數是a。
    輸出：
        輸出一行，給出一個正整數，是5個數中小於a的數的和。
*/

#include <iostream>
using namespace std;


int main(){

    int a;
    int sum = 0;
    cin >> a;

    for (int i = 0; i < 5 ; i++ ) {
        int n;
        cin >> n;
        if ( a > n) sum += n;
    }

    cout << sum << endl;

    return 0;
}
