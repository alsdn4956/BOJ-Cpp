#include <iostream>
using namespace std;

int main() {

    int N,M;
    int i,j,k;
    cin >> N >> M;
    int A[N] ={0};


    for(int q =0; q<M; q++) {
        cin >> i >> j >> k;
        for (int t = i; t <= j; t++) {
            A[t-1] = k;
        }
    }

    for (int w=0; w<N; w++) {
        cout << A[w] << " ";
    }

    return 0;
}
 