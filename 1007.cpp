/**
 * desc: 1007.计算余数
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double a, b, r;
    int k;
    cin >> a >> b;
    k = a / b;
    r = a - k * b;
    cout << fixed << setprecision(2) << r << endl;
    return 0;
}
