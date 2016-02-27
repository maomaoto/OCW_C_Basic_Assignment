// assignment 1-2
// 奇偶排序
// 輸入十個整數，按照升序排列輸出，並且奇數在前，偶數在後
#include <iostream>
using namespace std;

int main() {
    // read 10 numbers
    int a[10];
    for (int i = 0; i<10; i++) {
        cin >> a[i];
    }

    // First, arrange odd numbers form left hand side, arrange even numbers from right hand side
    int l = 0;
    int r = 9;
    while(l <= r) {
        bool leftIsOdd = ( a[l] % 2 == 1);
        bool rightIsEven = ( a[r] % 2 == 0);
        if (leftIsOdd) {
            l++;
        } else if (rightIsEven) {
            r--;
        } else if (!leftIsOdd && !rightIsEven) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    // bubble sort left-hand side (odd numbers)
    int start = 0;
    int end = l;
    for (int i = start; i < end-1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    // bubble sort right-hand side (even numbers)
    start = l;
    end = 10;
    for (int i = start; i < end-1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j-1] > a[j]) {
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
