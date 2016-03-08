/*
    Assignment 4-1-2 分數求和
    描述：
        輸入n個分數，並對他們求和。用約分之後的最簡形式表示。
    輸入：
        第一行輸入n，表示有n個分數要求和。
        接下來幾行是分數。
    輸出：
        輸出只有一行，即加總約分後的結果。
*/

#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    int sumn = 0, sumd = 1; // 儲存結果，sumn/sumd
    while (n--){
        int num, deno;
        char slash; //用來吃掉/的
        cin >> num >> slash >> deno;
        //先相加 a/b+c/d = (a*d+c*b)/(b*d)
        sumn = sumn * deno + num * sumd;
        sumd = sumd * deno;
    }
    // 約分
    // 求最大公因數gcd，歐幾里得法/輾轉相除法
    int a = sumn, b = sumd, c;
    while ( a != 0){
        c = a;
        a = b % a;
        b = c;
    }
    int gcd = b;
    //分子分母同時除以gcd，完成約分
    sumd /= gcd;
    sumn /= gcd;

    if (sumd > 1) cout << sumn << '/' << sumd << endl;
    else cout << sumn << endl;

    return 0;
}
