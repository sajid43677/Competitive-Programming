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

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a, b, w;
    vector<pll> vc[1010];
    ll slow[n + 1];
    for1(m)
    {
        cin >> a >> b >> w;
        if (a == b)
            continue;
        vc[a].pb({b, w});
        vc[b].pb({a, w});
    }
    for2(n) cin >> slow[i];
    ll dis[n + 1][1001];
    for1(n + 1)
    {
        fori(j, 0, 1000) dis[i][j] = 1e18;
    }
    dis[1][1000] = 0;
    multiset<pair<ll, pll>> mt;
    mt.insert({0, {1000, 1}});
    while (!mt.empty())
    {
        auto tmp = *mt.begin();
        // __f("tmp.xx,tmp.yy.xx,tmp.yy.yy", tmp.xx, tmp.yy.xx, tmp.yy.yy);
        mt.erase(mt.begin());
        if (dis[tmp.yy.yy][tmp.yy.xx] < tmp.xx)
            continue;
        //__f("tmp.xx,tmp.yy.xx,tmp.yy.yy", tmp.xx, tmp.yy.xx, tmp.yy.yy);
        ll currs = min(tmp.yy.xx, slow[tmp.yy.yy]);
        for (auto x : vc[tmp.yy.yy])
        {
            //__f("dis[x.xx][currs],dis[tmp.yy.yy][tmp.yy.xx] + x.yy * currs", dis[x.xx][currs], dis[tmp.yy.yy][tmp.yy.xx] + x.yy * currs);
            if (dis[x.xx][currs] > dis[tmp.yy.yy][tmp.yy.xx] + x.yy * currs)
            {
                dis[x.xx][currs] = dis[tmp.yy.yy][tmp.yy.xx] + x.yy * currs;
                mt.insert({dis[x.xx][currs], {currs, x.xx}});
            }
        }
    }
    ll ans = 1e18;
    for2(1000)
    {
        //__f("dis[n][i]", dis[n][i]);
        ans = min(ans, dis[n][i]);
    }
    cout << ans << endl;
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
