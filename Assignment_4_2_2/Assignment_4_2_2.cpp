/*
    Assignment 4-2-2 �ɿ��Д�
    ������
        ݔ��0-100�ķ֔����Д�֔�����ʲ�N�ȼ�
        95 <= �֔� <= 100��ݔ��1
        90 <= �֔� < 95��ݔ��2
        85 <= �֔� < 90��ݔ��3
        80 <= �֔� < 85��ݔ��4
        70 <= �֔� < 80��ݔ��5
        60 <= �֔� < 70��ݔ��6
        �֔� < 60��ݔ��7
    ݔ�룺
        n
    ݔ����
        m
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    if ( 95 <= n) cout << 1 << endl;    //�������^100�������Д�
    else if ( 90 <= n) cout << 2 << endl;
    else if ( 85 <= n) cout << 3 << endl;
    else if ( 80 <= n) cout << 4 << endl;
    else if ( 70 <= n) cout << 5 << endl;
    else if ( 60 <= n) cout << 6 << endl;
    else cout << 7 << endl;

    return 0;
}
