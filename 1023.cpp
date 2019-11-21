/**
 * desc: 1023.最大跨度值
 * author: yinsuhu
 * date: 2019.11.21
 */
#include<iostream>
using namespace std;
int main() {
    int n, v, max = 0, min = 1000;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v;
        if(v > max) max = v;
        else if(v < min) min = v;
    }
    cout << max - min << endl;
    return 0;
}
