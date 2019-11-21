/**
 * desc: 1024.因子个数
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    unsigned int n;
    cin >> n;
    int c = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        int m = n % i;
        int d = n / i;
        if(m == 0 && d != i) c+=2;
        else if(m == 0 && d == i) c++;
    }
    cout << c << endl;
    return 0;
}
