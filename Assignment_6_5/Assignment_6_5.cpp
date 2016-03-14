/*
    Assignment 6-5 異常細胞檢測
    描述：
        假設數組中的每個點代表一個細胞。每個細胞的顏色用0到255之間(包含0和255)的一個整數表示。
        我們定義一個細胞是異常細胞，如果這個細胞的顏色值比他上下左右4個細胞的顏色值都小50以上(包括50)。
        數組邊緣上的細胞我們不檢測。
        現在我們的任務是，給定一個儲定CT照片的二維數組，寫程序統計照片中異常細胞的數目。
    輸入：
        第一行包含一個整數 N，(100>= N >2)。
        下面有 N行，每行有 N個0~255之間的整數，整數之間用空格隔開。
    輸出：
        輸出只有一行，包含一個整數，為異常細胞的數目。
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int ct[100][100] = {{0}};
    int n = 0;
    int abnormal = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ct[i][j];
        }
    }

    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            if ( (ct[i][j] <= ct[i][j-1] - 50) && (ct[i][j] <= ct[i][j+1] - 50) && (ct[i][j] <= ct[i-1][j] - 50) && (ct[i][j] <= ct[i+1][j] - 50))
                abnormal += 1;
        }
    }

    cout << abnormal << endl;

    return 0;
}
