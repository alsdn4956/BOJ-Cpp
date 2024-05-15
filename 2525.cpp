#include <iostream>
using namespace std;

int main() {
    int H,B,C;
    cin >> H >> B;
    cin >> C;

    int min = H*60 + B;  // 시간을 min으로 바꿔줌
    min +=C; //요리하는데 걸린 시간 더하기

    int hour = (min/60)%24; //24시 이상이 될 경우 0시부터 다시!
    int minute = min%60;

    cout << hour << " " << minute;


  return 0;  
}
