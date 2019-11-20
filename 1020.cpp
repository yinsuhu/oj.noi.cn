/**
 * desc: 1020.数字识别
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
using namespace std;
int main() {
    int x, a[4], i;
    int c = 0;
    cin >> x;
    while(x) {
       a[c] = x % 10;
       x = x / 10;
       c++;
    }
    cout << c << endl;
    for(i = c - 1; i >= 0; i--) {
        cout << a[i] << endl;
    }
    return 0;
}
