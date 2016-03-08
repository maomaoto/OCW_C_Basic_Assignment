/*
    Assignment 4-1-1 約瑟夫問題
    描述：
        約瑟夫問題：有n隻猴子，按順時針方向圍成一圈選大王(編號從1到n)，從第1號開始報數，
        一直數到m，數到m的猴子退出圈外，剩下的猴子再接著從1開始報數，就這樣，直到圈內只
        剩下一隻猴子時，這個猴子就是猴王。
        編程求輸入n, m後，輸出最後猴王的編號。
    輸入：
        每行是用空格分開的兩個整數，第一個是n，第二個是m (0 < n,m <=300)。
        最後一行是0 0
    輸出：
        對於每行輸入數據(最後一行除外)，輸出數據也是一行，即最後猴王的編號。
*/

#include <iostream>
using namespace std;

//一共最多只有300隻猴子
int succedent[300]; //用於保存一隻猴子的後一位是誰
int precedent[300]; //用於保存一隻猴子的前一位是誰

int main(){
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n==0 && m==0) {
            break;
        }
        for (int i = 0; i < n-1; i++){
            succedent[i] = i+1;
            precedent[i+1] = i;
        }
        succedent[n-1] = 0;
        precedent[0] = n-1;

        int current = 0;
        while (true){
            //如果一共要報m次號，那麼取m-1次succedent之後就是需要退出的那隻猴子
            for (int count = 0; count < m-1; count++){
                current = succedent[current];
            }
            int pre = precedent[current];
            int suc = succedent[current];
            //讓current號猴子退出:
            //  把前一位的"下一位"指向current的下一位
            //  把下一位的"前一位"指向current的前一位
            succedent[pre] = suc;
            precedent[suc] = pre;
            if (pre == suc){
                //如果只剩個兩個，那麼"前一位"和"後一位"是同一個
                //current是退出的，那麼另一個就是剩下的猴王
                //序號是從0開始編的，輸出時要加1
                cout << pre+1 << endl;
                break;
            }
            current = suc;  //從下一個開始數
        }

    }


    return 0;
}
