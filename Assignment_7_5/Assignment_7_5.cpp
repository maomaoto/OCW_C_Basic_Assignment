/*
    Assignment 7-5 �ַ�������
    ������
        �Ѓɂ��ַ��� str �� substr ��str ���ַ����������^10��substr ���ַ�������3��
        (�ַ������������ַ����Yβ̎�� '\0')���� substr ���뵽 str �� ASCII �a�����ǂ��ַ����棬
        ���ж�����󣬄tֻ���]��һ����
    ݔ�룺
        ݔ����������У�ÿһ�О�һ�M�yԇ��������ʽ�飺
        str substr
    ݔ����
        ���ÿһ�M�yԇ������ݔ����������ַ���
*/

#include <iostream>
#include <cstring>
using namespace std;



int main(){

    char str[20] = {'\0'};
    char substr[4] = {'\0'};
    int len = 0;
    char max = '\0';
    int maxPos = 0;

    while(cin >> str >> substr){
        len = strlen(str);
        // search for max char in str
        for (int i = 0; i < len; i++){
            if (str[i] > max){
                max = str[i];
                maxPos = i;
            }
        }
        // move string (include '\0')
        for (int i = len; i > maxPos; i--){
            str[i+3] = str[i];
        }
        // copy string
        for (int i = 0; i < 3; i++){
            str[maxPos+i+1] = substr[i];
        }

        cout << str << endl;

        // reset for next iteration
        str[20] = '\0';
        substr[4] = '\0';
        len = 0;
        max = '\0';
        maxPos = 0;


    }
    return 0;

    return 0;
}
