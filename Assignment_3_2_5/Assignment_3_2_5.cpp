/*
    Assignment 3-2-5 ���x�����ĸ�����λ
    ������
        ���I�Pݔ��һ���������λ������Ҫ�����_�ط��x�����İ�λ��ʮλ�͂�λ����
        �K�քe����Ļ��ݔ����
        ݔ������ÿ��ݔ��һ�����ķ�ʽ�������κη�̖��
    ݔ�룺
        һ���������λ��
    ݔ����
        ��λ���İ�λ��ʮλ�͂�λ��
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;


    cout << n/100 << endl;
    n = n % 100;
    cout << n/10 << endl;
    n = n % 10;
    cout << n << endl;

    return 0;
}
