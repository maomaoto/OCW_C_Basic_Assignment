/*
    Assignment 5-2-3 �I����
    ������
        ��нN�f�����r200�f�����rÿ���԰ٷ�֮K���L����н��׃���ڎ�������I�·�?
        ���ù��Y���هLԇ�I�����ٝq���r
    ݔ�룺
        �ж��У�ÿ�Ѓɂ����� N (10 <= N <= 50)�� K (1 <= K <= 20)
    ݔ����
        ᘌ�ÿ�M������������ڵ�20�����֮ǰ�����I�·��ӣ��tݔ��һ������ M��
        ��ʾ�������ڵ� M �����I�£���tݔ�� Impossible��ݔ����Ҫ�Q�С�
*/

#include <iostream>
using namespace std;


int main(){

    int N, K;
    while(cin >> N >> K){
        double price = 200;
        int saving = 0;

        for (int i = 0 ; i<20; i++){
            saving += N;
            if (saving > price ) {  //�浽��
                cout << i+1 << endl;
                break;
            }
            else if (i == 19) cout << "Impossible" << endl; //��20��߀�I����
            price = price * (1 + K / 100.0);
        }
    }
    return 0;
}
