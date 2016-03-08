/*
    Assignment 3-2-4 程计籔程案计ぇ畉荡癸
    磞瓃
        块6タ俱计硂6タ俱计ぇいぶ计の案计
        砞硂6タ俱计い程计a程案计b―|a-b|
    块
        块︽6タ俱计6タ俱计常100
        块玂靡硂6タ俱计ぇいぶΤ计の案计
    块
        块俱计程计籔程案计ぇ畉荡癸
*/

#include <iostream>
using namespace std;
int main(){
    int n[6];
    for (int i = 0; i<6; i++){
        cin >> n[i];
    }

    int maxOdd = 0;
    int minEven = 100;  //6タ俱计常100
    for (int i = 0; i<6; i++){
        if (n[i] % 2){  //odd number
            if (n[i] > maxOdd) maxOdd = n[i];
        }
        else {  //even number
            if (n[i] < minEven) minEven = n[i];
        }
    }

    if (maxOdd > minEven) cout << maxOdd - minEven << endl;
    else cout << minEven - maxOdd << endl;

    return 0;
}
