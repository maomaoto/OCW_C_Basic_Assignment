/*
    Assignment 6-7 ��λ��
    ������
        �o��һ�M�o�������������λ��������������g�ɂ�����ƽ����������ȡ������(����Ҫʹ�ø��c��)
    ݔ�룺
        ԓ���������M�yԇ������ÿһ�M�yԇ�����ĵ�һ�О� N������ԓ�M�yԇ���������Ĕ���������
        1 <= N <= 15000
        ���� N �О� N ��������ݔ�룬 N=0 �r�Y��ݔ�롣
    ݔ����
        ݔ����λ����ÿһ�M�yԇ����һ��
    ����������
        ʹ��һ���L�Ȟ�N/2+1�Ĕ��M�탦��ǰN/2+1��Ĕ���ÿ��һ���µĔ��M��������
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

    int num[15000] = {0};
    int largeK[7501] = {0};
    int n = 0;
    int k = 0;


    while (cin >> n){
        if (n == 0) break;
        else {
            k = n/2 + 1;

            for (int i = 0; i<n; i++){
                cin >> num[i];
            }


            // ǰ k������һ߅����largeK���M�У�һ߅����
            largeK[0] = num[0];
            for (int i = 1; i < k; i++){
                if (num[i] < largeK[i-1]) largeK[i] = num[i];   //�������β�˵�С���Ǿ���������
                else {  //�ҳ�ԓ�ŵ�λ�ã���ǰ���_ʼ������ȬF���@��λ�õĴ��ǾͰ�ʣ��ȫ���Ĕ�������
                    for (int j = 0; j < i; j++){
                        if (num[i] > largeK[j]){
                            for( int l = i; l > j; l--){
                                largeK[l] = largeK[l-1];
                            }
                            largeK[j] = num[i];
                        }
                        break;
                    }
                }
            }
            //printNum(largeK, k);

            for (int i = k; i < n; i++){
                if (num[i] > largeK[k]){    // ������ֱ�largeK������һ���󣬼�������
                    for (int j = 0; j < k; j++){
                        if (num[i] > largeK[j]){
                            for( int l = k-1; l > j; l--){
                                largeK[l] = largeK[l-1];
                            }
                            largeK[j] = num[i];
                        }
                        break;
                    }
                }
            }
            //printNum(largeK, k);

            if (n%2 == 0){
                cout << (largeK[k-1] + largeK[k-2]) /2 << endl;
            } else{
                cout << largeK[k-1] << endl;
            }
        }
    }



    return 0;
}
