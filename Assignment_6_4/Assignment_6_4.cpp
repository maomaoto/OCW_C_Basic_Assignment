/*
    Assignment 6-4 ��ꇽ��Q��
    ������
        ��main�����У�����һ��5*5�ľ�ꇣ�ݔ���ꇔ������Kݔ�� n, m ��ֵ��
        �Д� n, m �Ƿ��ڔ��M�����ȣ�������ڣ��tݔ��error������ڹ����ȣ��t��n�к�m�н��Q��
        ݔ�����Q n, m����¾�ꇡ�
    ݔ�룺
        5*5��ꇵĔ������Լ� n, m��ֵ��
    ݔ����
        ������ɽ��Q��ݔ��"error"��
        ������Խ��Q��ݔ���¾�ꇡ�
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int a[5][5] = 0;
    int n = 0, m = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    if ( (n >= 0) && (n <5) && (m >= 0) && (m < 5)){

    }else {
        cout << "error" << endl;
    }
    return 0;
}
