#include <iostream>
using namespace std;
/*
    input: m, n ; m <= n
    output: sum of odd numbers between m and n
*/
int main() {
    int m = 0, n = 0, result = 0;
    cin >> m >> n;
    while ( m <= n) {
        if (m % 2 == 1) {
            result += m;
        }
        m++;
    }
    cout << result << endl;
    return 0;
}
