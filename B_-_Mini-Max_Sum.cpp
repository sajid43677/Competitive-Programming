#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)



void miniMaxSum(vector <ll> arr) {
    sort(arr.begin(),arr.end());
    ll sum = 0;
    for1(4)sum = sum + arr[i];
    ll sum1 = 0;
    for(int i = 4; i > 0 ; i--)sum1 = sum1 + arr[i];
    cout << sum << " " << sum1 << endl;
}

int main()
{
    Boost;
    //Read;Write;
    //cin >> t;
    //while(t--) 
    //solve();
    vector <ll> arr(5);
    for1(5) cin >> arr[i];
    miniMaxSum(arr);
    

}











