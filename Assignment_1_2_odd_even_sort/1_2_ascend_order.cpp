// assignment 1-2
// �_���Ƨ� 2
// ��J�Q�Ӿ�ơA���ӤɧǱƦC��X�A�åB�_�Ʀb�e�A���Ʀb��
#include <iostream>
using namespace std;

int main() {
    // read 10 numbers
    int a[10];
    for (int i = 0; i<10; i++) {
        cin >> a[i];
    }

    // bubble sort
    int start = 0;
    int end = 10;
    for (int i = start; i < end-1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            bool leftIsEven = ( a[j-1] % 2 == 0);
            bool rightIsEven = ( a[j] % 2 == 0);
            if ((leftIsEven && !rightIsEven) || ( ( leftIsEven == rightIsEven) && (a[j-1] > a[j]))) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }


    for (int i = 0; i <10; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
