#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    int min  =7;
    int max = 0;
    
    cin >> a >> b >> c;
    if (max < a) {
        max =a;
    }
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (min > a) {
        min = a;
    }
    if (min > b) {
        min = b;}
    if (min > c) {
        min = c;}

    if (a==b && b==c) {
        cout << 10000 + (b*1000) << endl;
    }
    else if (a==b || b==c) {
        cout << 1000+(b*100) << endl;
    }
    else if (c==a) {
        cout << 1000+(c*100) << endl;
    }
    else {
        cout << max*100 << endl;
    }
   
   
    return 0;
}
