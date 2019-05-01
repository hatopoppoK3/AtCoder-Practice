#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    long long N, A, ans = 0, MAX = 2 * 1000000, life;
    int B;
    cin >> N >> A >> B;
    vector<int> v(B);
    for (int i = 0; i < B; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto start = v.begin();
    auto itr = v.begin();
    for (int i = 0, life = A; i < min(N, MAX); i++) {
        itr = find(start, v.end(), i);
        if(itr == v.end()) {
            life--;
            if(life >= 0) {
                ans++;
            }
            else {
                life = A;
            }
        }
        else {
            life = A;
            start = itr;
        }
    }
    if(N - MAX > 0) {
        ans += life;
        ans += (A - 1) * ((N - life - MAX) / A) + ((N - life -MAX) % A);
    }

    cout << ans << endl;

    return 0;
}