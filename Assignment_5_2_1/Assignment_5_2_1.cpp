/*
    Assignment 5-2-1 �������
    ������
        �o��һ��������a���Լ������5�������������}�ǣ��@5�������У�С�a�������ĺ��Ƕ��٣�
    ݔ�룺
        ݔ��һ�У�����6��С�100�������������е�һ����������a��
    ݔ����
        ݔ��һ�У��o��һ������������5������С�a�Ĕ��ĺ͡�
*/

#include <iostream>
using namespace std;


int main(){

    int a;
    int sum = 0;
    cin >> a;

    for (int i = 0; i < 5 ; i++ ) {
        int n;
        cin >> n;
        if ( a > n) sum += n;
    }

    cout << sum << endl;

    return 0;
}
