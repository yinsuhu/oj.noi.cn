/**
 * 1002.三角形
 * author: yinsuhu
 * date: 2019.11.17
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c, p, s;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(4) << s << endl;
    return 0;
}
