/*
    Assignment 6-3 ���L���~
    ������
        һ����'.'�Yβ�ĺ���Ӣ�ľ��ӣ����~֮�g�ÿո�ָ����]�пs����ʽ������������ʽ��
    ݔ�룺
        һ����'.'�Yβ�ĺ���Ӣ�ľ���(�L�Ȳ����^500)�����~֮�g�ÿո�ָ����]�пs����ʽ������������ʽ��
        ��cin.getline(s, counts)������counts�� s������L��
    ݔ����
        ԓ���������L�Ć��~��������һ�����tݔ����һ����
*/

#include <iostream>
using namespace std;


int main(){

    char str[500];  // input sentence
    int num = 0;    // word count
    int flag = 0;   // for word detect
    int start[500] = {0}; // start position of each word
    int length[500] = {0};// length of each word
    int maxLength = 0;    // max word length
    int maxWord = 0;      // index of longest word (not position)

    // count word and word length
    cin.getline(str, 500, '.');
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ') {
            flag = 0;
        } else if (flag == 0) {
            flag = 1;
            start[num] = i;
            length[num]++;
            num++;
        } else if (flag == 1) {
            length[num-1]++;
        }
    }


    // find max length and whose index
    for (int i = 0; i < num; i++){
        if (length[i] > maxLength) {
            maxLength = length[i];
            maxWord = i;
        }
    }

    // print longest word
    for (int i = start[maxWord]; i < start[maxWord] + length[maxWord]; i++){
        cout << str[i];
    }
    cout << endl;


    return 0;
}
