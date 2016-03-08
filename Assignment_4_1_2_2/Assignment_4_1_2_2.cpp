/*
    Assignment 4-1-2 分數求和(減少溢出機會)
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
        // 求分母(sumd, deno)的最小公倍數
        // 先求最大公因數gcd，歐幾里得法/輾轉相除法
        int a = deno, b = sumd, c;
        while ( a != 0){
            c = a;
            a = b % a;
            b = c;
        }
        int gcd = b;
        // 求最小公倍數 lcm = a * b/gcd
        // 先除後乘，減低溢位機會
        int lcm = sumd / gcd;
        lcm = lcm * deno;

        int ratioA = lcm / sumd;
        int ratioC = lcm / deno;
        // 相加 a/b+c/d = (a*ratioA+c*ratioC)/lcm
        sumn = sumn * ratioA + num * ratioC;
        sumd = lcm;

        // 每加完一個數就約分
        // 求最大公因數gcd，歐幾里得法/輾轉相除法
        a = sumn, b = sumd;
        while ( a != 0){
            c = a;
            a = b % a;
            b = c;
        }
        gcd = b;
        //分子分母同時除以gcd，完成約分
        sumd /= gcd;
        sumn /= gcd;
    }


    if (sumd > 1) cout << sumn << '/' << sumd << endl;
    else cout << sumn << endl;


    return 0;
}
