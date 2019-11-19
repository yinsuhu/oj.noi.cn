/**
 * desc: 1008.水仙花数
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(pow(n/100, 3) + pow(n/10%10, 3) + pow(n%10, 3) == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
