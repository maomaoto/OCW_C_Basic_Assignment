/*
    Assignment 4-2-1 年齡與疾病
    描述：

    輸入：
        共2行，第一行為過往病人的數目n(0<n<=100)，第二行為每個病人患病時的年齡。
    輸出：
        每個年齡段(分四段：18以下、19-35、36-60、大於60 注意看樣例輸出的格式)的患病人數占總患病人數的比例，
        以百分比的形式輸出，精確到小數點後兩位(double)。
*/

#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;


int main(){

    int n;
    double age[4] = {0}; //分成四段
    cin >> n;

    //計算各年齡段人數
    for (int i = 0; i<n; i++){
        int patient = 0;    // for input patient age
        cin >> patient;
        if (patient <= 18) age[0]++;
        else if (18 < patient && patient <= 35) age[1]++;
        else if (35 < patient && patient <= 60) age[2]++;
        else if (60 < patient) age[3]++;
    }


    // 轉換為百分比
    for (int i = 0; i<4; i++){
        age[i] = (double)age[i]*100.0/n;
    }

    // 輸出
    cout << "1-18: " << setprecision(2) << fixed << age[0] << '%' << endl;
    cout << "19-35: " << age[1] << '%' << endl;
    cout << "36-60: " << age[2] << '%' << endl;
    cout << "60-: " << age[3] << '%' << endl;
    return 0;
}
