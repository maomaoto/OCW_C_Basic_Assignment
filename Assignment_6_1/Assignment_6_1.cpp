/*
    Assignment 6-1 ����ĸ�Ă���
    ������
        ��һ���ַ������ҳ�Ԫ����ĸa,e,i,o,u���F�ĴΔ���
    ݔ�룺
        ݔ��һ���ַ������ַ����L��С�80���ַ���
        ��cin.getline(s, counts)������counts�� s������L��
    ݔ����
        ݔ��һ�У�����ݔ��a,e,i,o,u��ݔ���ַ����г��F�ĴΔ�������֮�g�ÿո�ָ���
*/

#include <iostream>
using namespace std;


int main(){

    char str[80];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cin.getline(str, 80);
    for (int x = 0; x < 80; x++){
        if (str[x] == '\0') break;
        else {
            switch(str[x]){
                case 'a':
                    a++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'i':
                    i++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'u':
                    u++;
                    break;
            }
        }
    }
    cout << a << ' '<< e << ' ' << i << ' ' << o << ' ' << u << endl;
    return 0;
}
