/*
    Assignment 3-2-1 ī�G�P�Τl
    �y�z�G
        �@�cn��ī�G�A�c�̦����Τl�A�Τl�Cx�p�ɯ�Y���@��ī�G�C
        ���]�Τl�b�Y���@��ī�G���e���|�Y�t�@�ӡA�g�Ly�p�ɭԧA�٦��h�֭ӧ��㪺ī�G�H
    ��J�G
        ��J�Ȥ@��A�]�tn, x, y (�����)
    ��X�G
        ��X�Ȥ@��A�ѤU��ī�G�ӼơC
*/

#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int eaten = 0;  //�Y����ī�G��
    // �p�G�S���㰣���ܭn�h�[1
    if (y%x == 0) eaten = y/x;
    else eaten = y/x+1;

    if (n > eaten) cout << n - eaten << endl;
    else cout << '0' << endl;   //�Y����
    return 0;

}
