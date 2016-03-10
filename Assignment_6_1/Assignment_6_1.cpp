/*
    Assignment 6-1 求字母的個數
    描述：
        在一個字符串中找出元音字母a,e,i,o,u出現的次數。
    輸入：
        輸入一行字符串，字符串長度小於80個字符。
        用cin.getline(s, counts)方法，counts是 s的最大長度
    輸出：
        輸出一行，依次輸出a,e,i,o,u在輸入字符串中出現的次數，整數之間用空格分隔。
*/

#include <iostream>
using namespace std;


int main(){

    char str[80];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cin.getline(str, 80);
    for (int x = 0; x < 80; x++){
        if (str[x] == '\0') break;
        else {
            switch(str[x]){
                case 'a':
                    a++;
                    break;
                case 'e':
                    e++;
                    break;
                case 'i':
                    i++;
                    break;
                case 'o':
                    o++;
                    break;
                case 'u':
                    u++;
                    break;
            }
        }
    }
    cout << a << ' '<< e << ' ' << i << ' ' << o << ' ' << u << endl;
    return 0;
}
