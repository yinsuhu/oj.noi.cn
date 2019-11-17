/**
 * desc: 猜数游戏
 * author: yinsuhu
 * date: 2019.11.17
 */
#include<iostream>
using namespace std;
int main() {
    int n, res;
    cin >> n;
    res = ((n/100)*(100100)+(n/10%10)*(10010)+(n%10)*(1000+1)) / (7*11*13);
    cout << res << endl;
    return 0;
}
