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
   //Read;Write;
   int n;
   cin >> n;
   int arr[n+1] = {0};
   int a;
   for1(n){
       cin >> a;
       a = arr[i] + a;
       arr[i+1] = a%360;
       
   }
   int mx = -1;
   sort(arr,arr+n+1);
   for(int i = 1; i <=n;i++){
      //cout << arr[i] << endl;
       mx = max(mx,arr[i]-arr[i-1]);
   }
   mx = max(mx,360-arr[n]);
   cout << mx << endl;

}











