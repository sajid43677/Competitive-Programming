#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
vector<vector<int>> divisors(1000007 + 1);
void make_div(){
    
    for (int p = 2; p < 1000005; p++) {
        for (int k = p*p; k < 1000005 ; k++) {
            divisors[k * p].push_back(p);
        }
    }
    for (int i = 0; i < 1000005; i++) {
        divisors[i].push_back(i);
        sort(divisors[i].begin(), divisors[i].end());
    }
}
int ans;
int count_beautiful_sets(int l, int r) {
    
    vector<int> f(r + 1, 1);
    vector<int> g(r + 1, 1);
    ans = 1;
    for (int i = l + 1; i <= r; i++) {
        for (int j : divisors[i]) {
            cout << j << endl;
            if(j > r) break;
            if (j < i && i % j == 0) {
                if (f[j] + 1 > f[i]) {
                    f[i] = f[j] + 1;
                    g[i] = g[j];
                } else if (f[j] + 1 == f[i]) {
                    g[i] = (g[i] + g[j]) % MOD;
                }
            }
        }
        if (f[i] > ans) {
            ans = f[i];
        }
    }
    int max_size = *max_element(f.begin() + l, f.begin() + r + 1);
    int num_sets = 0;
    for (int i = l; i <= r; i++) {
        if (f[i] == max_size) {
            num_sets = (num_sets + g[i]) % MOD;
        }
    }
    return num_sets;
}

int main() {
    make_div();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int max_size = count_beautiful_sets(l, r);
        cout << ans << " ";
        cout << max_size << endl;
    }
    return 0;
}
