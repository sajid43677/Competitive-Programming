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
#define for2(n) for(int i = 0; i <= n;i++)


int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    ll hc,hm,dc,dm,k,w,a,xc,xm,xc2,xm2;
    while(t--){
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        int flg = 0;
        for2(k){
            hc = hc + i*a;
            dc = dc + (k-i)*w;
            xm2 = ((hc + dm - 1)/dm);
            xc2 = ((hm + dc-1)/dc);
            if(xm2 >= xc2){
                flg = 1;
                break;
            }

            
        }
        if(flg == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
   }
   

}











