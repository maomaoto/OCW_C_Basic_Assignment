/*
    Assignment 5-2-2 �T܇�c��·
    ������
        ���O�ҵ�����܇���_�i�K������܇�ĕr�g��27�룻ͣ܇�i܇�ĕr�g��23�룻
        ����ÿ������1.2�ף��T܇ÿ������3�ס�
        Ո�Д��߲�ͬ�ľ��xȥ�k�£����T܇��߀��·�졣
    ݔ�룺
        ��һ�О��̎��Ĕ�����n������ÿһ��������һ���k��Ҫ���ߵľ��x����λ���ס�
    ݔ����
        ����ÿ������������T܇�죬ݔ��һ��"Bike"�������·�죬ݔ��һ��"Walk"�����һ�ӿ죬ݔ��һ��"All"��
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    int dist[100];   // distance
    double bike;    // bike time
    double walk;    // walk time

    cin >> n;
    //ݔ����x
    for (int i = 0; i<n; i++){
        cin >> dist[i];
    }
    // Ӌ��r�g�Kݔ��
    for (int i = 0; i<n; i++){
        bike = 27 + 23 + dist[i] / 3;
        walk = dist[i] / 1.2;
        if (bike < walk) cout << "Bike" << endl;
        else if (bike > walk) cout << "Walk" << endl;
        else cout << "All" << endl;
    }

    return 0;
}
