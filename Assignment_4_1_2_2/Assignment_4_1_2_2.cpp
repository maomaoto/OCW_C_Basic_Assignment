/*
    Assignment 4-1-2 �֔����(�p������C��)
    ������
        ݔ��n���֔����K��������͡��üs��֮������ʽ��ʾ��
    ݔ�룺
        ��һ��ݔ��n����ʾ��n���֔�Ҫ��͡�
        ��������Ƿ֔���
    ݔ����
        ݔ��ֻ��һ�У����ӿ��s����ĽY����
*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int sumn = 0, sumd = 1; // ����Y����sumn/sumd
    while (n--){
        int num, deno;
        char slash; //�Á�Ե�/��
        cin >> num >> slash >> deno;
        // ���ĸ(sumd, deno)����С������
        // ���������gcd���W����÷�/ݚ�D�����
        int a = deno, b = sumd, c;
        while ( a != 0){
            c = a;
            a = b % a;
            b = c;
        }
        int gcd = b;
        // ����С������ lcm = a * b/gcd
        // �ȳ���ˣ��p����λ�C��
        int lcm = sumd / gcd;
        lcm = lcm * deno;

        int ratioA = lcm / sumd;
        int ratioC = lcm / deno;
        // ��� a/b+c/d = (a*ratioA+c*ratioC)/lcm
        sumn = sumn * ratioA + num * ratioC;
        sumd = lcm;

        // ÿ����һ�����ͼs��
        // �������gcd���W����÷�/ݚ�D�����
        a = sumn, b = sumd;
        while ( a != 0){
            c = a;
            a = b % a;
            b = c;
        }
        gcd = b;
        //���ӷ�ĸͬ�r����gcd����ɼs��
        sumd /= gcd;
        sumn /= gcd;
    }


    if (sumd > 1) cout << sumn << '/' << sumd << endl;
    else cout << sumn << endl;


    return 0;
}
