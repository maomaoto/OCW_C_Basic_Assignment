#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //B08-3 String IO
    //char c;
    //cout << "Enter a sentence:" << endl;
    //while (cin >> c) cout << c;
    //while((c = cin.get() ) != EOF) cout << c;   // can read space
    //while(cin.get(c)) cout << c;   // can read space
    //while((c = getchar())) cout << c;   // can read any character even "^Z"

    //B08-4 String Example
    /*
    char a[8] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r'};   // No \0 character, will print Mojibake
    cout << a << endl;

    int b[8] = {1,2,3,4,5,6,7,8};
    cout << b << endl;  // print pointer value
    */
    /*
    char str[10];
    cout << "enter a sentence:" << endl;
    while(cin>>str) cout << str << endl;
    */

    // test cin.get
    // input: have a good day
    // output: have a g
    // Pay attention to buffer pointer
    //  cin: pointer stay BEFORE ending symbol
    //  cin.get(): pointer stay BEFORE ending symbol
    //  cin.getline(): pointer stay AFTER ending symbol
    char ch[20];
    cout << "enter a sentence:" << endl;
    //cin.get(ch, 10, 'o');   // read 10 character, assing 'o' as ending symbol
    cin.getline(ch, 10, 'o');   // getline
    cout << ch << endl;


    return 0;
}
