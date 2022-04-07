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

ll myXOR(ll x, ll y)
{
    ll res = 0; // Initialize result
     
    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)                    
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);
        
        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);         
 
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

int main()
{
    Boost;
  // Read;Write;
    int n;
    cin >> n;
    if(n==1){
        cin >> n;
        cout << n << endl;
    }
    else{
    int len =((2*n-1)*2*n)/2;
    //cout << len << endl;
    int arr[len] = {0};
    for(int i = 0; i< len;i++){
        cin >> arr[i]; 
    }
    ll mx = 0;
    ll a = 0;
    for(int i =0; i < len/2; i++){
            a = myXOR(arr[i],arr[len-1-i]);
           //cout << arr[i] <<"^"<< arr[len-1-i]<<" = "<< a << endl;
            mx = max(a,mx);
    }
    a = arr[22] ^ arr[21];
    //cout << a << endl;
    cout << mx << endl;
    }
    
    
}











