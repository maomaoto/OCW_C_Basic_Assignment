/*
    Assignment 5-2-4 �Һ͞�k�ăɂ�Ԫ��
    ������
        ��һ���L�Ȟ�n(n<1000)�����������У��Д��Ƿ����ĳ�ɂ�Ԫ��֮�͞�k��
    ݔ�룺
        ��һ��ݔ�����е��L��n��k���ÿո���_��
        �ڶ���ݔ�������е�n���������ÿո���_��
    ݔ����
        �������ĳ�ɂ�Ԫ�صĺ͞�k��ݔ��yes����tݔ��no��
*/

#include <iostream>
using namespace std;


int main(){

    int n, k;
    int num[1000];
    bool found = 0; // flag, set 1 if found

    cin >> n >> k;
    for (int i = 0; i < n ; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            if (i != j && (num[i] + num[j] == k)){
                found = 1;
                break;
            }
        }
        if (found == 1 ) break;
    }

    if (found == 1) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
