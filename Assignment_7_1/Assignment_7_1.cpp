/*
    Assignment 7-1 �Д��c��
    ������
        �Д�ĳ���Ƿ���c��
    ݔ�룺
        һ�У�����һ������ a (0 < a < 3000)
    ݔ����
        һ�У������Ԫ a �����c��ݔ�� Y ����tݔ�� N
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int n = 0;
    cin >> n;
    if (n % 4 == 0){
        if (n % 100 != 0){
            cout << 'Y' << endl;
        } else {
            if (n % 400 == 0){
                cout << 'Y' <<endl;
            }else {
                cout << 'N' << endl;
            }
        }
    } else {
        cout << 'N' << endl;
    }

    return 0;
}
