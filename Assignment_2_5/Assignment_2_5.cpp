#include <iostream>
using namespace std;
/*
    數組逆序重放

    描述：
        將一個數組中的值逆序重新存放。例如：原來順序為8,6,5,4,1，要求改為1,4,5,6,8
    輸入：
        輸入為兩行：第一行為數組中元素的個數 n (1<n<100)，第二行是 n 個整數，每兩個整數之間用空格分隔。
    輸出：
        輸出為一行：輸出逆序後數組的整數，每兩個整數之間用空格分隔。
*/
int main() {
    int n = 0;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while ( n-- ) {
        cout << a[n];
        if (n > 0) cout << " ";
    }
    return 0;
}
