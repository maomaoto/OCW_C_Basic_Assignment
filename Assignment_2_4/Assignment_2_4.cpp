#include <iostream>
using namespace std;
/*
    描述：
        給定一個十進位整數 N，求其對應的2進位數中1的個數
    輸入：

*/
int main() {
    int k = 0;
    cin >> k;
    int n1 = 0, n5 = 0, n10 = 0;
    for (int i = 0; i<k; i++) {
        int n;
        cin >> n;
        if (n == 1) n1++;
        else if (n == 5) n5++;
        else if (n == 10) n10++;
    }
    cout << n1 << endl;
    cout << n5 << endl;
    cout << n10 << endl;
    return 0;
}
