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
   int n,q,l,r;
   cin >> n >> q;
   int arr[n] = {0};
   for1(q){
       cin >> l >> r;
       for(int j = l; j <=r; j++){
           arr[j] = 1;
       }
   }
   int flg = 0;
   for(int i = 1; i <=n ; i++){
       if(arr[i] == 0){
           flg = 1;
           break;
       }
   }
   if(flg == 1){
       cout << "No"<<endl;
   }
   else
   {
       cout << "Yes"<< endl;
   }
   

}











