#include <iostream>
using namespace std;
/*
    �Ʋհf�ǭ���

    �y�z�G
        �N�@�ӼƲդ����Ȱf�ǭ��s�s��C�Ҧp�G��Ӷ��Ǭ�8,6,5,4,1�A�n�D�אּ1,4,5,6,8
    ��J�G
        ��J�����G�Ĥ@�欰�Ʋդ��������Ӽ� n (1<n<100)�A�ĤG��O n �Ӿ�ơA�C��Ӿ�Ƥ����ΪŮ���j�C
    ��X�G
        ��X���@��G��X�f�ǫ�Ʋժ���ơA�C��Ӿ�Ƥ����ΪŮ���j�C
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
