#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;
typedef vector<ll> vi;

// double pi = acos(-1.0);

#define xx first
#define yy second
#define all(x) x.begin(), x.end()
#define allZero(a) memset(a, 0, sizeof(a));
#define allnegOne(a) memset(a, -1, sizeof(a));
#define endl "\n"
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define reverseS string(curr.rbegin(), curr.rend()); // reverse string assignment
#define Read freopen("input.txt", "r", stdin);
#define Write freopen("output.txt", "w", stdout);
#define pb push_back
#define for1(n) for (int i = 0; i < n; i++)
#define for2(n) for (int i = 1; i <= n; i++)
#define fori(i, s, n) for (int i = s; i <= n; i++)
#define lohi int, vector<int>, greater < int >>
#define mkp make_pair
#define pendl cout << '\n'
#define unqn(x) unique(all(x)) - x.begin()                    // number of unique element in x
#define unq(x) x.resize(distance(x.begin(), unique(all(x)))); // converting unique element vector

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << ": " << arg1 << " |";
    __f(comma + 1, args...);
}

// recursive lamda
//  function<long long(long long)> factorial = [&](long long x){
//  if(x == 0) return 1LL;
//  else return x*factorial(x-1);
//  };
// lamda
// auto will_change = [&](){
// X++;
// };

//              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx = {1, -1, 0, 0, 1, 1, -1, -1},
            gy = {0, 0, 1, -1, 1, -1, 1, -1};

//          Code Starts Here          //
//====================================//

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll od[n];
    for1(n) { cin >> arr[i]; }
    ll pre[n];
    pre[0] = arr[0];
    od[0] = 0;
    if (arr[0] % 2 == 1)
        od[0] = 1;
    for2(n - 1)
    {
        pre[i] = pre[i - 1] + arr[i];
        od[i] = od[i - 1];
        if (arr[i] % 2 == 1)
            od[i]++;
    }
    cout << arr[0] << " ";
    for2(n - 1)
    {
        ll tmp = od[i] / 3;
        if (od[i] % 3 == 1)
            tmp++;
        cout << pre[i] - tmp << " ";
    }
    pendl;
}

// FuzzyCarnage
int main()
{
    Boost;
    // Read;Write;
    int t;
    cin >> t;
    while (t--)
        solve();
}
