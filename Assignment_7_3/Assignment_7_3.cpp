/*
    Assignment 7-3 ���h���x
    ������
        �o��һ�M�c(x, y)������x���h�ăɂ��c֮�g�ľ��x
    ݔ�룺
        ��һ�����c�� n, n>=2
        ����ÿһ�д���һ���c���Ƀɂ����c�� x, y �M��
    ݔ����
        һ�У����h���c֮�g�ľ��x
        ʹ�� cout << fixed << setprecision(4) << dis << endl; ݔ�����xֵ�K���_��С���c��4λ��

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
