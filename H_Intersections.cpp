#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define pbds tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
typedef long long ll;
typedef vector<ll> vec;
typedef vector<string> vecs;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vp;
typedef set<ll> st;
typedef set<pair<ll, ll>> sp;
typedef multiset<ll> mst;
typedef multiset<pair<ll, ll>> mstp;
typedef map<ll, ll> mp;
typedef map<char, ll> mpc;
const ll mx=300005+1;
#define Boost ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
vec vv1[mx];
bool vis[mx+2];
ll n,m;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{

    ll n;
    cin>>n;
    ll arr1[n+2];
    ll arr2[n+2];
    ll pos[n+2];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr1[i];
        //pos[arr1[i]]=i;
    }

    for(ll i=1; i<=n; i++)
    {
        //cin>>arr1[i];
        pos[arr1[i]]=i;
    }
    for(ll i=1; i<=n; i++)
    {
        cin>>arr2[i];
    }
//    for(ll i=1;i<=n;i++){
//        cout<<pos[i]<<" ";
//    }
//cout<<endl;
//    for(ll i=1;i<=n;i++){
//        cout<<pos[arr2[i]]<<" ";
//    }
    pbds st;
    ll cnt=0;
    for(ll i=n;i>=1;i--){
         st.insert(pos[arr2[i]]);
         cnt+=st.order_of_key(pos[arr2[i]]);
    }
    cout<<cnt<<endl;
}
int main()
{
    Boost;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }


}