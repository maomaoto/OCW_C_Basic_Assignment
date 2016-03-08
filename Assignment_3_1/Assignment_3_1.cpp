/*
    Assignment 3-1
    ��J�G
        ��J���h��A�Ĥ@�欰��� n (n<100)�A��ܦ�n�Ӱ��i�סC
        ��ln��A�C�榳3�Ӿ�ơA���O�N����i�׽s���B����e�ӵ߼ƶq�B�����ӵ߼ƶq�C
        ���]����S���~�t�C

    ��X�G
        ��X���h��C
        �Ĥ@���XA�Ⱥذ��i�ת��ƶq�A���C���XA�Ⱥذ��i�ת��s���A���c�޲v�ɧǱƦC�C
        �M��@���XB�Ⱥذ��i�ת��ƶq�A���C���XB�Ⱥذ��i�ת��s���A�]���c�޲v�ɧǱƦC�C
*/

#include <iostream>
using namespace std;
int main(){
    int n; //n�����i�ת��ƶq
    // id�O�����i�ת��s���Arate�O���ӵߪ��c�޲v
    int id[100];
    double rate[100];

    cin >> n;
    for (int i = 0; i<n; i++){
        int initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = (double)final/initial;
    }

    //�Ƨ�(�c�޲v�Ѥj��p)
    for (int i = 0; i < n; i++){
        for (int j=0; j < n - i - 1; j++){
            if (rate[j+1] > rate[j]){
                int tmpId = id[j];
                id[j] = id[j+1];
                id[j+1] = tmpId;

                double tmpRate = rate[j];
                rate[j] = rate[j+1];
                rate[j+1] = tmpRate;
            }
        }
    }

    //�O���̤j���t
    double maxDiff = 0;
    //�̤j�t���U��
    int maxDiffIndex = 0;
    for (int i = 0; i<n-1; i++){
        double diff = rate[i] - rate[i+1];
        if (maxDiff < diff){
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }

    //��X�c�޲v���j�����ղӵ�
    cout << maxDiffIndex +1 << endl;
    for (int i = maxDiffIndex; i>=0; i--){
        cout << id[i] << endl;
    }

    //��X�c�޲v���p�����ղӵ�
    cout << n - maxDiffIndex -1 << endl;
    for (int i = n-1; i >= maxDiffIndex+1; i--) {
        cout << id[i] << endl;
    }

    return 0;

}
