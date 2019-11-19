/**
 * desc: 1012.变换密码
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    int n, m;
    char c;
    cin >> n;
    m = n % 123;
    if(m >= 97 && m <= 122) {
        c = m;
    } else {
        m = n % 91;
        if(m >= 65 && m <= 90) {
            c = m;
        } else {
            c = '*';
        }
    }
    cout << c << endl;
    return 0;
}
