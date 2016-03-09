/*
    Assignment 5-2-3 買房子
    描述：
        年薪N萬，房價200萬，房價每年以百分之K增長，年薪不變，第幾年才能買下房?
        先拿工資，再嘗試買房，再漲房價
    輸入：
        有多行，每行兩個整數 N (10 <= N <= 50)， K (1 <= K <= 20)
    輸出：
        針對每組數據，如果能在第20年或者之前就能買下房子，則輸出一個整數 M。
        表示最早需在第 M 年能買下，否則輸出 Impossible，輸出需要換行。
*/

#include <iostream>
using namespace std;


int main(){

    int N, K;
    while(cin >> N >> K){
        double price = 200;
        int saving = 0;

        for (int i = 0 ; i<20; i++){
            saving += N;
            if (saving > price ) {  //存到了
                cout << i+1 << endl;
                break;
            }
            else if (i == 19) cout << "Impossible" << endl; //第20年還買不起
            price = price * (1 + K / 100.0);
        }
    }
    return 0;
}
