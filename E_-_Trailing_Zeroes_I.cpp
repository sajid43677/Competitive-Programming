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
#define mx 1000010


ll is_prime[mx+1],siv[mx+1],cnt;
void sieve_prime(){
	long long int i, j;
    for (i=3; i<mx; i+=2)
        if(!siv[i])
            for (j=i*i; j<mx; j+=i+i)
                siv[j]=1;
    is_prime[cnt++]=2;
    for (i=3; i<mx; i+=2)
        if(!siv[i]) is_prime[cnt++]=i;
    return;
}

ll nod(ll n)
{
   ll sum = 1,k = 0;
   for(int i=0;i<mx && is_prime[i]*is_prime[i]<=n;i++)
        {
            if(n%is_prime[i]==0)
            {
                k=0;
                while(n%is_prime[i]==0)
                {
                    n/=is_prime[i];
                    k++;
                    if(n==0 || n==1)
                        break;
                }
                sum*=k+1;
            }

        }
        if(n!=1) sum = sum*2;
        return sum-1;
}

int cas = 1;

void solve(){
    ll n;
    cin >> n;
    cout << "Case " << cas << ": "<< nod(n) << endl;
    cas++;
}

//FuzzyCarnage
int main()
{
    Boost;
    sieve_prime();
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











