/**
 * desc: 1004.填充矩形
 * author: yinsuhu
 * date: 2019.11.18
 */
#include<iostream>
using namespace std;
int main() {
    long long n, m, a, s;
    cin >> n >> m >> a;
    s = (m / a) * (n / a);
    cout << s << endl;
    return 0;
}
