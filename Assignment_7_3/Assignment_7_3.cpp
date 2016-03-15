/*
    Assignment 7-3 最遠距離
    描述：
        給定一組點(x, y)，求距離最遠的兩個點之間的距離
    輸入：
        第一行是點數 n, n>=2
        接著每一行代表一個點，由兩個浮點數 x, y 組成
    輸出：
        一行，最遠兩點之間的距離
        使用 cout << fixed << setprecision(4) << dis << endl; 輸出距離值並精確到小數點後4位。

*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double distance(double ax, double ay, double bx, double by){
    return sqrt( (ax - bx) * (ax - bx) + (ay - by) * (ay - by));
}

int main(){

    int n = 0;
    double points[100][2] = {{0}};
    double dis = 0;
    double tempDis = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> points[i][0] >> points[i][1];
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++ ){
            tempDis = distance(points[i][0], points[i][1], points[j][0], points[j][1]);
            if (tempDis > dis) dis = tempDis;
        }
    }

    cout << fixed << setprecision(4) << dis << endl;

    return 0;
}
