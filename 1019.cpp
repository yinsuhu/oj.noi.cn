/**
 * desc: 1019.分段函数
 * author: yinsuhu
 * date: 2019.11.20
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double x, y;
    cin >> x;
    if(x >= 0 && x < 5) {
        y = x + 2.5;
    } else if(x >= 5 && x < 10) {
        y = 2 - 1.5 * (x - 3) * (x - 3);
    } else if(x >= 10 && x < 20) {
        y = x / 2.0 - 1.5;
    }
    cout << fixed << setprecision(3) << y << endl;
    return 0;
}
