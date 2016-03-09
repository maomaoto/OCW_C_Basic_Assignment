/*
    Assignment 5-2-2 騎車與走路
    描述：
        假設找到自行車，開鎖並上自行車的時間為27秒；停車鎖車的時間為23秒；
        步行每秒行走1.2米；騎車每秒行走3米。
        請判斷走不同的距離去辦事，是騎車快還走路快。
    輸入：
        第一行為待處理的數據量n，其後每一行整數為一次辦事要行走的距離，單位為米。
    輸出：
        對應每個整數，如果騎車快，輸出一行"Bike"；如果走路快，輸出一行"Walk"；如果一樣快，輸出一行"All"。
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    int dist[100];   // distance
    double bike;    // bike time
    double walk;    // walk time

    cin >> n;
    //輸入距離
    for (int i = 0; i<n; i++){
        cin >> dist[i];
    }
    // 計算時間並輸出
    for (int i = 0; i<n; i++){
        bike = 27 + 23 + dist[i] / 3;
        walk = dist[i] / 1.2;
        if (bike < walk) cout << "Bike" << endl;
        else if (bike > walk) cout << "Walk" << endl;
        else cout << "All" << endl;
    }

    return 0;
}
