/**
 * desc: 1005.存款收益
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double r, x, p, y;
    cin >> r >> x >> p;
    y = x * pow((1 + r / 100.0), p);
    cout << fixed << setprecision(2) << y << endl;
    return 0;
}
