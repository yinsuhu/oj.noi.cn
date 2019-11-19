/**
 * desc: 1016.计算天数
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
bool leap_year(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 00) {
        return true;
    }
    return false;
}
int main() {
    int year, month;
    cin >> year >> month;
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << 31 << endl;
            break;
        case 2:
            if(leap_year(year)) {
                cout << 29 << endl;
            } else {
                cout << 28 << endl;
            }
            break;
        default:
            cout << 30 << endl;
            break;
    }
    return 0;
}
