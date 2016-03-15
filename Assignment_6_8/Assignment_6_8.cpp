/*
    Assignment 6-8 校門外的樹
    描述：
        某校大門外長度為 L 的馬路上有一排樹，每兩棵相鄰的樹之間的間隔都是1米。我們可以把馬路看成一個數軸，
        馬路的一端在數軸 0 的位置，另一端在 L 的位置；數軸上的每個整數點，即0, 1, 2, 3, ... , L 都種有一棵樹。

        馬路上有一些區域要用來建地鐵，這些區域用他們在數軸上的起始點和終止點表示。
        已知任一區域的起始點和終止點的座標都是整數，區域之間可能有重合的部分。現在要把這些區域中的樹
        (包含區域端點處的兩棵樹)移走。你的任務是計算將這些樹移走之後，馬路上還有多少棵樹。
    輸入：
        輸入的第一行有兩個整數 L (1 <= L <= 10000)和 M (1 <= M <= 100)， L 代表馬路的長度；M 代表區域的數目，
        L 和 M 之間用一個空格隔開。接下來的 M 行每行包含兩個不同的整數，用一個空格隔開，表示一個區域的起始點
        和終止點的座標。
    輸出：
        輸出一行，這一行只包含一個整數，表示馬路上剩餘的樹的數目。
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

    int tree[10001] = {0};
    int l = 0;
    int m = 0;
    int zoneMin = 0;
    int zoneMax = 0;
    int treeNum = 0;

    cin >> l >> m;


    for (int i = 0; i < m; i++){
        cin >> zoneMin >> zoneMax;
        for (int j = zoneMin; j <= zoneMax; j++){
            tree[j] = 1;
        }
    }

    for (int i = 0; i <= l; i++){
        treeNum = treeNum + (1 - tree[i]);
    }

    cout << treeNum << endl;






    return 0;
}
