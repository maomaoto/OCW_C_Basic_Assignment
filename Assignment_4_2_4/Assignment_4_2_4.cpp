/*
    Assignment 4-2-4 �����֧��
    ������
        ���I�Pݔ��һָ�����~(��Ԫ���λ����345)��Ȼ��ݔ��֧��ԓ���~�ĸ��N���~������Ŕ�����
        �@ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�����ُ���Ҫ��M��ʹ�ô����~���nƱ��
    ݔ�룺
        һ��С�1000����������
    ݔ����
        ݔ�����У�ÿ���@ʾһ�����������ϵ��·քe��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ����ŵď�����
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    cout << n/100 << endl;
    n %= 100;
    cout << n/50 << endl;
    n %= 50;
    cout << n/20 << endl;;
    n %= 20;
    cout << n/10 << endl;
    n %= 10;
    cout << n/5 << endl;
    n %= 5;
    cout << n << endl;

    return 0;
}