/*
    Assignment 3-2-4 �̤j�_�ƻP�̤p���Ƥ��t�������
    �y�z�G
        ��J6�ӥ���ơA�B�o6�ӥ���Ƥ����ܤ֦s�b�@�ө_�ƤΤ@�Ӱ��ơC
        �]�o6�ӥ���Ƥ��̤j���_�Ƭ�a�A�̤p�����Ƭ�b�A�D�X|a-b|���ȡC
    ��J�G
        ��J���@��A6�ӥ���ơA�B6�ӥ���Ƴ��p��100�C
        ��J�O�ҳo6�ӥ���Ƥ����A�ܤ֦��@�ө_�ƤΤ@�Ӱ��ơC
    ��X�G
        ��X�@�Ӿ�ơA�Y�̤j�_�ƻP�̤p���Ƥ��t������ȡC
*/

#include <iostream>
using namespace std;
int main(){
    int n[6];
    for (int i = 0; i<6; i++){
        cin >> n[i];
    }

    int maxOdd = 0;
    int minEven = 100;  //6�ӥ���Ƴ��p��100
    for (int i = 0; i<6; i++){
        if (n[i] % 2){  //odd number
            if (n[i] > maxOdd) maxOdd = n[i];
        }
        else {  //even number
            if (n[i] < minEven) minEven = n[i];
        }
    }

    if (maxOdd > minEven) cout << maxOdd - minEven << endl;
    else cout << minEven - maxOdd << endl;

    return 0;
}
