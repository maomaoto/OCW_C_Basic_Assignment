/*
    Assignment 3-2-2 大象喝水
    描述：
        一隻大象口渴了，要喝20升水才能解渴，但現在只有一個深h公分，底面半徑為r公分的小圓桶。
        (h和r都是整數)，問大象要喝多少桶水才能解渴？
    輸入：
        輸入僅一行，包含兩個整數，h, r，單位為公分。
    輸出：
        輸出僅一行，包含一個整數，表示大象至少要喝水的桶數。

    20 * 1000 / (pi*r*r*h)
*/

#include <iostream>
using namespace std;
int main(){
    int h, r;
    double PI = 3.14159;
    cin >> h >> r;
    cout << int(20 * 1000 / (PI *r *r *h)) +1 ;
    return 0;

}
