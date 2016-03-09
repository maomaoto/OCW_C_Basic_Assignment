/*
    Assignment 5-1-1 點評賽車
    描述：
        4名專家對4款賽車進行評論
        1) A說：2號賽車是最好的
        2) B說：4號賽車是最好的
        3) C說：3號賽車不是最好的
        4) D說：B說錯了
        事實上只有1款賽車最佳，且只有一名專家說對了，其他3人都說錯了。
        請編程輸出最佳車的車號，以及說對的專家。
    輸入：

    輸出：
        輸出兩行。第一行輸出最佳的車號(1-4中的某個數字)。
        第二行輸出說對的專家(A-D中的某個字母)。
*/

#include <iostream>
using namespace std;


int main(){
    //用best枚舉
    int best;
    for (best = 1; best <=4; best++){
        // 4名專家說的話
        bool a = (best == 2);
        bool b = (best == 4);
        bool c = !(best == 3);
        bool d = !b;
        // 不符合只有1位專家說對的情況
        if (a + b + c + d != 1) continue;
        // 輸出最佳的車
        cout << best << endl;
        // 輸出判斷正確的專家
        if (a == 1) cout << 'A' << endl;
        else if (b == 1) cout << 'B' << endl;
        else if (c == 1) cout << 'C' << endl;
        else cout << 'D' << endl;
    }
    return 0;
}
