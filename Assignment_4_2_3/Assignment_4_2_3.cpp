/*
    Assignment 4-2-3 �ҳ���k��Ĕ�
    ������
        �Ñ�ݔ��N��K��Ȼ�����ݔ��N��������(�o���)�������ڲ���N�������������r�£�
        �ҳ���K��Ĕ���ע�⣬��K��Ĕ���ζ���Ĵ�С���ڵ�Kλ�Ĕ���
    ݔ�룺
        N
        K
        a1 a2 a3 ... aN
    ݔ����
        b
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    int k;
    int number[100];
    cin >> n >> k;
    for (int i = 0; i < n ; i++) {
        cin >> number[i];
    }

    int max = 0;    // ��݆����ֵ
    int position = 0;   // ���ֵ���ڵ�λ��
    for (int i = 0; i < k; i++){
        // �ҳ�����ֵ�����ڵ�λ��
        for (int j = 0; j < n; j++){
            if (number[j] > max) {
                max = number[j];
                position = j;
            }
        }
        // �����������һ݆(��k݆)����ԓλ�õĔ����0
        if (i != k-1){
            number[position] = 0;
            max = 0;
        }
    }
    cout << max << endl;

    return 0;
}
