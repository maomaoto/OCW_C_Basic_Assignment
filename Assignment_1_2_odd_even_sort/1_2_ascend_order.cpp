// assignment 1-2
// 奇偶排序 2
// 輸入十個整數，按照升序排列輸出，並且奇數在前，偶數在後
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
