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

    int a = 0;
    int b = 0;
    char o = '\0';

    cin >> a >> b >> o;

    switch(o){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            if (b != 0) cout << a/b << endl;
            else cout << "Divided by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
