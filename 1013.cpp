/**
 * desc: 1013.识别三角形
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c) {
            cout << "Equilateral" << endl;
        } else if((a * a + b * b == c*c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
                cout << "Right" << endl;
        } else {
            cout << "General" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
