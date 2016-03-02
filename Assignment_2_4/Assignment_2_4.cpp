#include <iostream>
using namespace std;
/*
    描述：
        給定一個十進位整數 N ，求其對應的2進位數中1的個數。
    輸入：
        第一個整數表示有 N 組測試數據，其後 N 行是對應的測試數據，每行為一個整數。
    輸出：
        N 行，每行輸出對應一個輸入。
*/
int main() {
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x = 0;
        int ans = 0;
        cin >> x;
        while (x > 0) {
            ans += x % 2;
            x /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
