#include <iostream>
using namespace std;
/*
    �y�z�G
        ���w�@�ӤQ�i���� N �A�D�������2�i��Ƥ�1���ӼơC
    ��J�G
        �Ĥ@�Ӿ�ƪ�ܦ� N �մ��ռƾڡA��� N ��O���������ռƾڡA�C�欰�@�Ӿ�ơC
    ��X�G
        N ��A�C���X�����@�ӿ�J�C
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
