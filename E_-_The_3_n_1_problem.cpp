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

int mx = 0;
int maxCycle(int n,int cnt){

    if(n > 1){
        if(n%2)n = 3*n+1;
        else n/=2;
        cnt++;
        maxCycle(n,cnt);
    }
    return mx = (cnt>=mx)?cnt:mx;
}

void solve(){
    int a,b;
    while(cin >> a >> b){
        int x = (a>b)?a:b;
        int y = (a<b)?a:b;
        for(int i = y; i <= x; i++)mx = maxCycle(i,1);
        cout << a << " " << b << " " << mx << endl;
        mx = 0;
    }
    return;
}

int main()
{
    Boost;
    //Read;Write;
    //int t;
    //cin >> t;
    //while(t--) 
    solve();
    

}











