/*
    Assignment 6-6 ѭ�h�Ƅ�
    ������
        �o��һ�M������Ҫ�����Ô��M���@�M���������������Ì��F�����M�еĔ�ѭ�h�Ƅӡ�
        �ٶ����� N ���������tҪʹǰ�������������� m ��λ�ã��Kʹ���� m����׃����ǰ��� m ������
        ע�⣬��Ҫ����ݔ����m��������ݔ��ǰ��n-m�����ķ������F��Ҳ��Ҫ�Ãɂ����M�ķ�ʽ���F��
        Ҫ��ֻ��һ�����M�ķ�ʽ���F��һ��Ҫ���C��ݔ���Y���r��ݔ�������͔��M�е������һ�µġ�
    ݔ�룺
        ݔ���Ѓ��У���һ�а���һ�������� n ��һ�������� m��
        �ڶ��а��� n ����������ÿ�ɂ����������g��һ���ո���_��
    ݔ����
        ݔ��ֻ��һ�У����^ѭ�h�Ƅ��ᔵ�M���������������ݔ����ÿ�ɂ�����֮�g�ÿո���_��
    ���F������
        1. ���� m ��������
        2. ȫ�� n ��������
        3. ���� n-m ��������
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int num[100] = {0};
    int n = 0;
    int m = 0;
    int temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    // reverse last m numbers
    for (int i = 1; i <= m /2; i++){
        temp = num[n-i];
        num[n-i] = num[n-m+i-1];
        num[n-m+i-1] = temp;
    }


    // reverse all n numbers
    for (int i = 0; i < n /2; i++){
        temp = num[i];
        num[i] = num[n-i-1];
        num[n-i-1] = temp;
    }


    // reverse last n-m numbers
    for (int i = 1; i <= (n-m) /2; i++){
        temp = num[n-i];
        num[n-i] = num[m+i-1];
        num[m+i-1] = temp;
    }

    // print result
    for (int i = 0; i < n; i++){
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}
