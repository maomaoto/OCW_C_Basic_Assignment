/*
    Assignment 7-4 ����Ӌ����
    ������
        һ����ε�Ӌ������֧�� +, -, *, / �ķN�\�㣬�H�迼�]ݔ��ݔ������������r��
        �������\��Y���������^ int ��ʾ�Ĺ�����
    ݔ�룺
        ݔ��ֻ��һ�У�����3�����������е�1��2����������������3�������������(+, -, *, /)
    ݔ����
        ݔ��ֻ��һ�У�һ�����������\��Y����Ȼ����
        1. ������F������0����r���tݔ��: Divided by Zero!
        2. ������F�oЧ�Ĳ�����(������ +, -, *, / ֮һ)���tݔ��: Invalid operator!
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
