#include <iostream>
using namespace std;

int main() {
    int num[9];
    int max=0;
    int maxindex=0;
    for (int i =0; i<9; i++){
        cin >> num[i];
        if (num[i] > max) {
        max = num[i];
        maxindex = i;}
    }
    cout << max << endl;
    cout << maxindex +1 << endl;
    // 최댓값이 몇 번째 수냐...


    return 0;
}
