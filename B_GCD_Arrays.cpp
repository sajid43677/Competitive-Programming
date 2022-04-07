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

int main()
{
    Boost;
  // Read;Write;
    int t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
 
        if(a==1 && b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
 
        if(a==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
 
        if(a%2==0 && b%2==0)
        {
            ll x = (b - a)/2;
            if(x<=k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
            continue;
        }
 
        else
        {
            ll x = ((b-a)/2)+1;
            if(x<=k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
            continue;
        }
    }
    
    
}
