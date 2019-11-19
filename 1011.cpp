/**
 * desc: 1011.正方形
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    if((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
