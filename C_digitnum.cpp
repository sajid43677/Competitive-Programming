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



int main()
{
    Boost;
   Read;Write;
   int n;
   cin >> n;
   ll res = 0;
   int cnt = 10;
   int a = 0;
   int flg = 1;
   for(int i = 0; i < 18;i++){
       if(n >= cnt){
           a = 9*cnt/10;
       }
       else{
           a = n%cnt - cnt/10;
       }
       cout << a << " "<< n << endl;
       res = res + (a*(a+1))/2;
       if(n <=0) break;
       cnt = cnt*10;
       if(n < cnt/10) break;
   }
   cout << res << endl;
   

}











