#include<bits/stdc++.h>

using namespace std;

#define endl        "\n"
#define ll          long long
#define READ(x)     freopen(x,"r",stdin)
#define WRITE(x)    freopen(x,"w",stdout)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   (a * b) / gcd(a, b)
#define mem(x,y)    memset(x,y,sizeof x )
#define srtv(v)     sort(v.begin(), v.end())
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);

/// Solution ###



int main()
{
    BOOST;
    //Read;Write;
    int arr[6] = {1,3,5,9,2};
    sort(arr,arr+6);
    binarySearch(arr,15,6);
    
    
}