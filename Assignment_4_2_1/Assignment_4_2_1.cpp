/*
    Assignment 4-2-1 ���g�c����
    ������

    ݔ�룺
        ��2�У���һ�О��^�����˵Ĕ�Ŀn(0<n<=100)���ڶ��О�ÿ�����˻����r�����g��
    ݔ����
        ÿ�����g��(���ĶΣ�18���¡�19-35��36-60�����60 ע�⿴����ݔ���ĸ�ʽ)�Ļ����˔�ռ�������˔��ı�����
        �԰ٷֱȵ���ʽݔ�������_��С���c���λ(double)��
*/

#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;


int main(){

    int n;
    double age[4] = {0}; //�ֳ��Ķ�
    cin >> n;

    //Ӌ������g���˔�
    for (int i = 0; i<n; i++){
        int patient = 0;    // for input patient age
        cin >> patient;
        if (patient <= 18) age[0]++;
        else if (18 < patient && patient <= 35) age[1]++;
        else if (35 < patient && patient <= 60) age[2]++;
        else if (60 < patient) age[3]++;
    }


    // �D�Q��ٷֱ�
    for (int i = 0; i<4; i++){
        age[i] = (double)age[i]*100.0/n;
    }

    // ݔ��
    cout << "1-18: " << setprecision(2) << fixed << age[0] << '%' << endl;
    cout << "19-35: " << age[1] << '%' << endl;
    cout << "36-60: " << age[2] << '%' << endl;
    cout << "60-: " << age[3] << '%' << endl;
    return 0;
}
