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

int gcd(int i , int j){
    if(i == 0)
        return j;
    return gcd(j%i,i);
}

void solve(){
    int a,b;
    cin >> a >> b;
    int n = gcd(a,b);
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i) cnt++;
            else cnt += 2;
        }
    }
    cout << cnt << endl;
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











