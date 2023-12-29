#include <bits/stdc++.h>
using namespace std;

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
    ll n, a;
    cin >> n;
    ll arr[n + 1];
    ll od = 0;
    ll ev = 0;
    for2(n)
    {

        cin >> a;
        arr[i] = a;
        if (i % 2 == 0)
            ev += a;
        else
            od += a;
    }
    ll l = 1;
    ll r = n;
    while (l < r)
    {
        __f("l,r,arr[l],arr[r],od,ev", l, r, arr[l], arr[r], od, ev);
        if (od == ev)
        {
            cout << "YES" << endl;
            return;
        }
        if (l % 2 == 1 && r % 2 == 1 && od < ev)
        {
            cout << "NO" << endl;
            return;
        }
        if (l % 2 == 0 && r % 2 == 0 && od > ev)
        {
            cout << "NO" << endl;
            return;
        }
        if (od > ev)
        {
            if (l % 2 == 1 && r % 2 == 0)
            {
                od -= arr[l];
                l++;
                continue;
            }
            if (l % 2 == 0 && r % 2 == 1)
            {
                od -= arr[r];
                r--;
                continue;
            }
            if (l % 2 == 1 && r % 2 == 1)
            {
                if (od - arr[l] == ev)
                {
                    cout << "YES" << endl;
                    return;
                }
                if (od - arr[r] == ev)
                {
                    cout << "YES" << endl;
                    return;
                }
                if (od - arr[r] - arr[l] == ev)
                {
                    cout << "YES" << endl;
                    return;
                }
                od -= arr[r] - arr[l];
                r--;
                l++;
                continue;
            }
        }
        if (od < ev)
        {
            if (l % 2 == 1 && r % 2 == 0)
            {
                ev -= arr[l];
                l++;
                continue;
            }
            if (l % 2 == 0 && r % 2 == 1)
            {
                ev -= arr[r];
                r--;
                continue;
            }
            if (l % 2 == 1 && r % 2 == 1)
            {
                if (ev - arr[l] == od)
                {
                    cout << "YES" << endl;
                    return;
                }
                if (ev - arr[r] == od)
                {
                    cout << "YES" << endl;
                    return;
                }
                if (ev - arr[r] - arr[l] == od)
                {
                    cout << "YES" << endl;
                    return;
                }
                ev -= arr[r] - arr[l];
                r--;
                l++;
                continue;
            }
        }
    }
    cout << "NO" << endl;
}

// FuzzyCarnage
int main()
{
    // Boost;
    //  Read;Write;
    int t;
    cin >> t;
    while (t--)
        solve();
}
