/*
    Assignment 6-5 ���������z�y
    ������
        ���O���M�е�ÿ���c����һ��������ÿ���������ɫ��0��255֮�g(����0��255)��һ��������ʾ��
        �҂����xһ�������Ǯ�������������@���������ɫֵ������������4���������ɫֵ��С50����(����50)��
        ���M߅���ϵļ����҂����z�y��
        �F���҂����΄��ǣ��o��һ������CT��Ƭ�Ķ��S���M��������yӋ��Ƭ�Ю��������Ĕ�Ŀ��
    ݔ�룺
        ��һ�а���һ������ N��(100>= N >2)��
        ������ N�У�ÿ���� N��0~255֮�g������������֮�g�ÿո���_��
    ݔ����
        ݔ��ֻ��һ�У�����һ���������鮐�������Ĕ�Ŀ��
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int ct[100][100] = {{0}};
    int n = 0;
    int abnormal = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ct[i][j];
        }
    }

    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            if ( (ct[i][j] <= ct[i][j-1] - 50) && (ct[i][j] <= ct[i][j+1] - 50) && (ct[i][j] <= ct[i-1][j] - 50) && (ct[i][j] <= ct[i+1][j] - 50))
                abnormal += 1;
        }
    }

    cout << abnormal << endl;

    return 0;
}