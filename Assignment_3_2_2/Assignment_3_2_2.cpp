/*
    Assignment 3-2-2 �j�H�ܤ�
    �y�z�G
        �@���j�H�f���F�A�n��20�ɤ��~��Ѵ��A���{�b�u���@�Ӳ`h�����A�����b�|��r�������p���C
        (h�Mr���O���)�A�ݤj�H�n�ܦh�ֱ���~��Ѵ��H
    ��J�G
        ��J�Ȥ@��A�]�t��Ӿ�ơAh, r�A��쬰�����C
    ��X�G
        ��X�Ȥ@��A�]�t�@�Ӿ�ơA��ܤj�H�ܤ֭n�ܤ�����ơC

    20 * 1000 / (pi*r*r*h)
*/

#include <iostream>
using namespace std;
int main(){
    int h, r;
    double PI = 3.14159;
    cin >> h >> r;
    cout << int(20 * 1000 / (PI *r *r *h)) +1 ;
    return 0;

}
