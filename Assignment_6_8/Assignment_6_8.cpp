/*
    Assignment 6-8 У�T��Ę�
    ������
        ĳУ���T���L�Ȟ� L ���R·����һ�Ř䣬ÿ�ɿ������Ę�֮�g���g������1�ס��҂����԰��R·����һ�����S��
        �R·��һ���ڔ��S 0 ��λ�ã���һ���� L ��λ�ã����S�ϵ�ÿ�������c����0, 1, 2, 3, ... , L ���N��һ�Ø䡣

        �R·����һЩ�^��Ҫ�Á����F���@Щ�^���������ڔ��S�ϵ���ʼ�c�ͽKֹ�c��ʾ��
        ��֪��һ�^�����ʼ�c�ͽKֹ�c�����˶����������^��֮�g�������غϵĲ��֡��F��Ҫ���@Щ�^���еĘ�
        (�����^����c̎�ăɿØ�)���ߡ�����΄���Ӌ�㌢�@Щ������֮�ᣬ�R·��߀�ж��ٿØ䡣
    ݔ�룺
        ݔ��ĵ�һ���Ѓɂ����� L (1 <= L <= 10000)�� M (1 <= M <= 100)�� L �����R·���L�ȣ�M ����^��Ĕ�Ŀ��
        L �� M ֮�g��һ���ո���_������� M ��ÿ�а����ɂ���ͬ����������һ���ո���_����ʾһ���^�����ʼ�c
        �ͽKֹ�c�����ˡ�
    ݔ����
        ݔ��һ�У��@һ��ֻ����һ����������ʾ�R·��ʣ�N�Ę�Ĕ�Ŀ��
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printNum(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main(){

    int tree[10001] = {0};
    int l = 0;
    int m = 0;
    int zoneMin = 0;
    int zoneMax = 0;
    int treeNum = 0;

    cin >> l >> m;


    for (int i = 0; i < m; i++){
        cin >> zoneMin >> zoneMax;
        for (int j = zoneMin; j <= zoneMax; j++){
            tree[j] = 1;
        }
    }

    for (int i = 0; i <= l; i++){
        treeNum = treeNum + (1 - tree[i]);
    }

    cout << treeNum << endl;






    return 0;
}
