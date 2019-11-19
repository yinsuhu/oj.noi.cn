/**
 * desc: 1009.分配任务
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    if(c < 10) {
        cout << "water" << endl;
    } else if(a > b) {
        cout << "tree" << endl;
    } else {
        cout << "tea" << endl;
    }
    return 0;
}
