/**
 * desc: 1018.打电话
 * author: yinsuhu
 * date: 2019.11.20
 */
#include<iostream>
using namespace std;
int main() {
    double x, y;
    cin >> x;
    if(x <= 0.5) y = 3;
    else y = (x - 0.5) / 0.2 + 3;
    if(y > int(y)) y = (int)y + 1;
    cout << y << endl;
    return 0;
}
