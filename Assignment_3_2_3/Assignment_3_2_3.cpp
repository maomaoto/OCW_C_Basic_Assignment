/*
    Assignment 3-2-3 最高的分數
    描述：
        輸出最高的分數
    輸入：
        輸入兩行，第一行為整數n(1<=n<=100)，表示參加這次考試的人數。
        第二行是這n個學生的成績，相鄰兩個數之間用單個空格隔開。
        所有成績為0~100之間的整數。
    輸出：
        輸出一個整數，即最高的成績。
*/

#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int grade[100];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> grade[i];
    }

    int maxGrade = 0;
    for (int i = 0; i < n; i++){
        if (grade[i] > maxGrade) maxGrade = grade[i];
    }

    cout << maxGrade << endl;

    return 0;
}
