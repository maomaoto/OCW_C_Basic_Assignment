/*
    Assignment 3-2-3 �̰�������
    �y�z�G
        ��X�̰�������
    ��J�G
        ��J���A�Ĥ@�欰���n(1<=n<=100)�A��ܰѥ[�o���Ҹժ��H�ơC
        �ĤG��O�on�Ӿǥͪ����Z�A�۾F��ӼƤ����γ�ӪŮ�j�}�C
        �Ҧ����Z��0~100��������ơC
    ��X�G
        ��X�@�Ӿ�ơA�Y�̰������Z�C
*/

#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int grade[100];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> grade[i];
    }

    int maxGrade = 0;
    for (int i = 0; i < n; i++){
        if (grade[i] > maxGrade) maxGrade = grade[i];
    }

    cout << maxGrade << endl;

    return 0;
}
