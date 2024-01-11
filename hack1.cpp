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

//              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx = {1, -1, 0, 0, 1, 1, -1, -1},
            gy = {0, 0, 1, -1, 1, -1, 1, -1};

//          Code Starts Here          //
//====================================//

bool cmp(pll a, pll b)
{
    return a.xx > b.xx;
}

void solve()
{
    ll n;
    cin >> n;
    ll al[n];
    ll bo[n];
    vector<pll> alp;
    vector<pll> bop;
    cout << n ;
    for1(n)
    {
        cin >> al[i];
        alp.pb({al[i], i});
    }
    for1(n)
    {
        cin >> bo[i];
        bop.pb({bo[i], i});
    }
    ll flg = 1;
    ll curr = 0;
    ll curra = 0;
    ll currb = 0;
    sort(all(alp), cmp);
    sort(all(bop), cmp);
    for (auto a : alp)
        __f("a.xx,a.xx", a.xx, a.xx);
    for (auto a : bop)
        __f("b.xx,b.xx", a.xx, a.xx);
    while (flg == 1)
    {
        __f("curra,currb", curra, currb);
        while (curr % 2 == 0)
        {
            if (currb >= n)
            {
                flg = 0;
                break;
            }
            if (al[bop[currb].yy] > 0 && bo[bop[currb].yy] > 0)
            {
                al[bop[currb].yy]--;
                bo[bop[currb].yy] = 0;
                break;
            }
            currb++;
        }
        while (curr % 2 == 1)
        {
            if (curra >= n)
            {
                flg = 0;
                break;
            }
            if (bo[alp[curra].yy] > 0 && al[alp[curra].yy] > 0)
            {
                bo[bop[curra].yy]--;
                al[bop[curra].yy] = 0;
                break;
            }
            curra++;
        }
    }
    ll ans = 0;
    for1(n) ans += al[i];
    for1(n) ans -= bo[i];
    cout << ans << endl;
}

// FuzzyCarnage
int main()
{
    // Boost;
    //   Read;
    Write;
    int t;
    cin >> t;
    while (t--)
        solve();
}
