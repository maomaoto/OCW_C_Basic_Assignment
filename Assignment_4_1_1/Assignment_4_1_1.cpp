/*
    Assignment 4-1-1 �sɪ���}
    ������
        �sɪ���}����n�b���ӣ���형rᘷ������һȦ�x����(��̖��1��n)���ĵ�1̖�_ʼ�󔵣�
        һֱ����m������m�ĺ����˳�Ȧ�⣬ʣ�µĺ����ٽ�����1�_ʼ�󔵣����@�ӣ�ֱ��Ȧ��ֻ
        ʣ��һ�b���ӕr���@�����Ӿ��Ǻ�����
        ������ݔ��n, m�ᣬݔ����������ľ�̖��
    ݔ�룺
        ÿ�����ÿո���_�ăɂ���������һ����n���ڶ�����m (0 < n,m <=300)��
        ����һ����0 0
    ݔ����
        ���ÿ��ݔ�딵��(����һ�г���)��ݔ������Ҳ��һ�У�����������ľ�̖��
*/

#include <iostream>
using namespace std;

//һ�����ֻ��300�b����
int succedent[300]; //��춱���һ�b���ӵ���һλ���l
int precedent[300]; //��춱���һ�b���ӵ�ǰһλ���l

int main(){
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n==0 && m==0) {
            break;
        }
        for (int i = 0; i < n-1; i++){
            succedent[i] = i+1;
            precedent[i+1] = i;
        }
        succedent[n-1] = 0;
        precedent[0] = n-1;

        int current = 0;
        while (true){
            //���һ��Ҫ��m��̖�����Nȡm-1��succedent֮�������Ҫ�˳������b����
            for (int count = 0; count < m-1; count++){
                current = succedent[current];
            }
            int pre = precedent[current];
            int suc = succedent[current];
            //׌current̖�����˳�:
            //  ��ǰһλ��"��һλ"ָ��current����һλ
            //  ����һλ��"ǰһλ"ָ��current��ǰһλ
            succedent[pre] = suc;
            precedent[suc] = pre;
            if (pre == suc){
                //���ֻʣ���ɂ������N"ǰһλ"��"��һλ"��ͬһ��
                //current���˳��ģ����N��һ������ʣ�µĺ���
                //��̖�Ǐ�0�_ʼ���ģ�ݔ���rҪ��1
                cout << pre+1 << endl;
                break;
            }
            current = suc;  //����һ���_ʼ��
        }

    }


    return 0;
}
