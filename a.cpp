#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        long long maxCoins = 0;
        for (int zeros = 0; zeros <= N; ++zeros) {
            int ones = N - zeros;

            long long val1 = 1LL * zeros * A + 1LL * ones * B + 1LL * zeros * ones * C; 
            long long val2 = 1LL * zeros * A + 1LL * ones * B + 1LL * zeros * ones * D; 

            long long curr = max(val1, val2);
            if (curr > maxCoins) maxCoins = curr;
        }
        cout << maxCoins << endl;
    }
    return 0;
}