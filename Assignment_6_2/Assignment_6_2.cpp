/*
    Assignment 6-2 ���Դ�С�����^�ַ�����С
    ������
        ���ɂ��ַ�����ǰ���������ַ�����^(��ASCII�aֵ��С���^)��ֱ�����F��ͬ���ַ���\0��ֹ��
        ���ȫ���ַ���ͬ���t�J����ͬ��
        ������F��ͬ���ַ����t�Ե�һ������ͬ���ַ��ı��^�Y����ʡ�
        ϣ���ڱ��^���^���У�������ĸ�Ĵ�С����

    ݔ�룺
        ݔ�����У�ÿ��һ���ַ��������ɂ��ַ�����
        ��cin.getline(s, counts)������counts�� s������L��
    ݔ����
        �����һ���ַ����ȵڶ����ַ���С��ݔ��һ���ַ�"<"
        �����һ���ַ����ȵڶ����ַ�����ݔ��һ���ַ�">"
        ����ɂ��ַ�����ȣ�ݔ��һ���ַ�"="
*/

#include <iostream>
using namespace std;

bool isAlphaBet(char c){
    if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) return true;
    else return false;
}

char upper(char c){
    // only consider alphabet input
    if ((c >= 97 && c <= 122)) return (c-32);
    else return c;
}

int main(){
/*
    char a = 'A';
    char b = 'a';
    cout << a-b << endl;
*/
    char str1[80];
    char str2[80];
    cin >> str1;
    cin >> str2;

    int i = 0;
    char result;
    while(str1[i] != '\0'){
        if (str1[i] == str2[i]) i++;
        else if (isAlphaBet(str1[i]) && isAlphaBet(str2[i]) ) {
            // if both are alphabet,  convert to UPPER case and compare
            str1[i] = upper(str1[i]);
            str2[i] = upper(str2[i]);
            if (str1[i] == str2[i]) i++;
            else break;
        } else {
            // if any one of them is not alphabet, break the loop and compare
            break;
        }
    }
    if (str1[i] > str2[i]) result = '>';
    else if (str1[i] < str2[i]) result = '<';
    else result = '=';

    cout << result << endl;

    return 0;
}
