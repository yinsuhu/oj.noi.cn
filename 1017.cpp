/**
 * desc: 1017.价格查询
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] Exit\n";
    cin >> n;
    switch(n) {
        case 1:
            cout << "price=3.0" << endl;
            break;
        case 2:
            cout << "price=2.5" << endl;
            break;
        case 3:
            cout << "price=4.1" << endl;
            break;
        case 4:
            cout << "price=10.2" << endl;
            break;
        case 0:
            break;
        default:
            cout << "price=0" << endl;
            break;
    }
}
