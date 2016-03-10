/*
    Assignment 6-2 忽略大小寫比較字符串大小
    描述：
        對兩個字符串從前往後逐個字符相比較(按ASCII碼值大小比較)，直到出現不同的字符或\0為止。
        如果全部字符相同，則認為相同；
        如果出現不同的字符，則以第一個不相同的字符的比較結果為準。
        希望在比較的過程中，忽略字母的大小寫。

    輸入：
        輸入為二行，每行一個字符串，共兩個字符串。
        用cin.getline(s, counts)方法，counts是 s的最大長度
    輸出：
        如果第一個字符串比第二個字符串小，輸出一個字符"<"
        如果第一個字符串比第二個字符串大，輸出一個字符">"
        如果兩個字符串相等，輸出一個字符"="
*/

#include <iostream>
using namespace std;

bool isAlphaBet(char c){
    if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) return true;
    else return false;
}

char upper(char c){
    // only consider alphabet input
    if ((c >= 97 && c <= 122)) return (c-32);
    else return c;
}

int main(){
/*
    char a = 'A';
    char b = 'a';
    cout << a-b << endl;
*/
    char str1[80];
    char str2[80];
    cin >> str1;
    cin >> str2;

    int i = 0;
    char result;
    while(str1[i] != '\0'){
        if (str1[i] == str2[i]) i++;
        else if (isAlphaBet(str1[i]) && isAlphaBet(str2[i]) ) {
            // if both are alphabet,  convert to UPPER case and compare
            str1[i] = upper(str1[i]);
            str2[i] = upper(str2[i]);
            if (str1[i] == str2[i]) i++;
            else break;
        } else {
            // if any one of them is not alphabet, break the loop and compare
            break;
        }
    }
    if (str1[i] > str2[i]) result = '>';
    else if (str1[i] < str2[i]) result = '<';
    else result = '=';

    cout << result << endl;

    return 0;
}
