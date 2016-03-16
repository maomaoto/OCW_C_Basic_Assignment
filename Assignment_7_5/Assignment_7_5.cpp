/*
    Assignment 7-5 字符串插入
    描述：
        有兩個字符串 str 和 substr ，str 的字符個數不超過10，substr 的字符個數為3。
        (字符個數不包括字符串結尾處的 '\0')。將 substr 插入到 str 中 ASCII 碼最大的那個字符後面，
        若有多個最大，則只考慮第一個。
    輸入：
        輸入包括若干行，每一行為一組測試數據，格式為：
        str substr
    輸出：
        對於每一組測試數據，輸出插入後的字符串
*/

#include <iostream>
#include <cstring>
using namespace std;



int main(){

    char str[20] = {'\0'};
    char substr[4] = {'\0'};
    int len = 0;
    char max = '\0';
    int maxPos = 0;

    while(cin >> str >> substr){
        len = strlen(str);
        // search for max char in str
        for (int i = 0; i < len; i++){
            if (str[i] > max){
                max = str[i];
                maxPos = i;
            }
        }
        // move string (include '\0')
        for (int i = len; i > maxPos; i--){
            str[i+3] = str[i];
        }
        // copy string
        for (int i = 0; i < 3; i++){
            str[maxPos+i+1] = substr[i];
        }

        cout << str << endl;

        // reset for next iteration
        str[20] = '\0';
        substr[4] = '\0';
        len = 0;
        max = '\0';
        maxPos = 0;


    }
    return 0;

    return 0;
}
