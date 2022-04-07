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

int mid(int a, int b, int c)
{
    if ((a < b && b < c) || (c < b && b < a))
       return b;
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
    else
       return c;
}

void solve(){
    ll a,b;
    cin >> a >> b;

        if(a == b){
            cout <<"="<<endl;
        }
        else if(a > b){
            cout <<">"<<endl;
        }
        else{
            cout <<"<"<<endl;
        }
}

int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) solve();
    

}











