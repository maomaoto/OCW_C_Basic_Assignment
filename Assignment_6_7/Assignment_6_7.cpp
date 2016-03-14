/*
    Assignment 6-7 ��λ��
    ������
        �o��һ�M�o�������������λ��������������g�ɂ�����ƽ����������ȡ������(����Ҫʹ�ø��c��)
    ݔ�룺
        ԓ���������M�yԇ������ÿһ�M�yԇ�����ĵ�һ�О� N������ԓ�M�yԇ���������Ĕ���������
        1 <= N <= 15000
        ���� N �О� N ��������ݔ�룬 N=0 �r�Y��ݔ�롣
    ݔ����
        ݔ����λ����ÿһ�M�yԇ����һ��
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int num[100] = {0};
    int n = 0;
    int m = 0;
    int temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    // reverse last m numbers
    for (int i = 1; i <= m /2; i++){
        temp = num[n-i];
        num[n-i] = num[n-m+i-1];
        num[n-m+i-1] = temp;
    }


    // reverse all n numbers
    for (int i = 0; i < n /2; i++){
        temp = num[i];
        num[i] = num[n-i-1];
        num[n-i-1] = temp;
    }


    // reverse last n-m numbers
    for (int i = 1; i <= (n-m) /2; i++){
        temp = num[n-i];
        num[n-i] = num[m+i-1];
        num[m+i-1] = temp;
    }

    // print result
    for (int i = 0; i < n; i++){
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}
