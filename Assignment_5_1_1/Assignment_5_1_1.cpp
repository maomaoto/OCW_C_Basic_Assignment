/*
    Assignment 5-1-1 �c�uِ܇
    ������
        4�����Ҍ�4��ِ܇�M���uՓ
        1) A�f��2ِ̖܇����õ�
        2) B�f��4ِ̖܇����õ�
        3) C�f��3ِ̖܇������õ�
        4) D�f��B�f�e��
        ����ֻ��1��ِ܇��ѣ���ֻ��һ�������f���ˣ�����3�˶��f�e�ˡ�
        Ո����ݔ�����܇��܇̖���Լ��f���Č��ҡ�
    ݔ�룺

    ݔ����
        ݔ�����С���һ��ݔ����ѵ�܇̖(1-4�е�ĳ������)��
        �ڶ���ݔ���f���Č���(A-D�е�ĳ����ĸ)��
*/

#include <iostream>
using namespace std;


int main(){
    //��bestö�e
    int best;
    for (best = 1; best <=4; best++){
        // 4�������f��Ԓ
        bool a = (best == 2);
        bool b = (best == 4);
        bool c = !(best == 3);
        bool d = !b;
        // ������ֻ��1λ�����f������r
        if (a + b + c + d != 1) continue;
        // ݔ����ѵ�܇
        cout << best << endl;
        // ݔ���Д����_�Č���
        if (a == 1) cout << 'A' << endl;
        else if (b == 1) cout << 'B' << endl;
        else if (c == 1) cout << 'C' << endl;
        else cout << 'D' << endl;
    }
    return 0;
}
