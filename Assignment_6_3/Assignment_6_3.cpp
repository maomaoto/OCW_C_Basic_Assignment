/*
    Assignment 6-3 最長單詞
    描述：
        一個以'.'結尾的簡單英文句子，單詞之間用空格分隔，沒有縮寫形式和其他特殊形式。
    輸入：
        一個以'.'結尾的簡單英文句子(長度不超過500)，單詞之間用空格分隔，沒有縮寫形式和其他特殊形式。
        用cin.getline(s, counts)方法，counts是 s的最大長度
    輸出：
        該句子中最長的單詞，如果多於一個，則輸出第一個。
*/

#include <iostream>
using namespace std;


int main(){

    char str[500];  // input sentence
    int num = 0;    // word count
    int flag = 0;   // for word detect
    int start[500] = {0}; // start position of each word
    int length[500] = {0};// length of each word
    int maxLength = 0;    // max word length
    int maxWord = 0;      // index of longest word (not position)

    // count word and word length
    cin.getline(str, 500, '.');
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ') {
            flag = 0;
        } else if (flag == 0) {
            flag = 1;
            start[num] = i;
            length[num]++;
            num++;
        } else if (flag == 1) {
            length[num-1]++;
        }
    }


    // find max length and whose index
    for (int i = 0; i < num; i++){
        if (length[i] > maxLength) {
            maxLength = length[i];
            maxWord = i;
        }
    }

    // print longest word
    for (int i = start[maxWord]; i < start[maxWord] + length[maxWord]; i++){
        cout << str[i];
    }
    cout << endl;


    return 0;
}
