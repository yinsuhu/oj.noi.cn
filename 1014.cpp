/**
 * desc: 1014.写评语
 * author: yinsuhu
 * date: 2019.11.19
 */
#include<iostream>
using namespace std;
int main() {
    unsigned int score;
    cin >> score;
    if(score >= 90) {
        cout << "Excellent" << endl;
    } else if(score >= 80) {
        cout << "Good" << endl;
    } else if(score >= 60) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}
