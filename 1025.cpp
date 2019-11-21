/**
 * desc: 1025.统计奖牌
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
using namespace std;
int main() {
    int n, x, y, z, m1 = 0, m2 = 0, m3 = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        cin >> y;
        cin >> z;
        m1 += x;
        m2 += y;
        m3 += z;
    }
    cout << m1 << " " << m2 << " " << m3 << " " << m1 + m2 + m3 << endl;
    return 0;
    return 0;
}
