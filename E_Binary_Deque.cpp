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
//#define for1(n) for(int i = 0; i < n;i++)
#define for1(j,n) for(int i = j; i < n;i++)

int bs(int arr[],int n,int t){
    int st = 0;
    int en = n -1;
    int mid;
    int pos = -1;
    while(en >=st){
        mid = (st+en) /2;
        if(mid == t){
            pos = mid + 1;
            //return pos;
            return pos;
        }
        if(mid < t){
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
    }
    return pos;
}

void solve(){
    int n,s,a;
    cin >> n >> s;
    int cumsum[n];
    cin >> cumsum[0];
    for1(1,n){
        cin >> a;
        cumsum[i] = cumsum[i-1]+a;
    }
    int ans = bs(cumsum,n,s);
    cout << ans << endl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











