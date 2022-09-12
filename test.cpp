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
#define all(v)      v.begin(), v.end()
#define priority    vector<int>, greater<int>
#define uniqVec(x)  sort(all(x));x.erase(unique(all(x)),x.end())
#define For(i,j,k)  for(int i=j;i<k;i++)
#define yes         printf("YES\n")
#define no          printf("NO\n")




/// Solution ###



vector<ll>vec1={0};
vector<ll>vec2={0};



void subsetSums1(ll nums[], ll n)
{
        for (int i = 0; i <n; i++)
        {
            const int v = vec1.size();

           for (int t = 0; t < v; t++)
            {
                vec1.pb(vec1[t] + nums[i]);
            }
        }
}



void subsetSums2(ll nums[], ll n)
{
        for (int i = 0; i <n; i++)
        {
            const int v = vec2.size();

           for (int t = 0; t < v; t++)
            {
                vec2.pb(vec2[t] + nums[i]);
            }
        }
}



int main()
{
    BOOST;
   ll t,x,y,z,a,b;
        cin>>x>>y;
       ll s1, s2;
       s1 = x/2;
        if(x%2==0)
            s2=x/2;
        else
            s2 = (x/2)+1;
       ll arr1[s1];
        ll arr2[s2];



       for(int i=0; i<s1; i++)
        {
            cin>>arr1[i];
        }

       for(int i=0; i<s2; i++)
        {
            cin>>arr2[i];
        }
       subsetSums1(arr1, s1);
        subsetSums2(arr2, s2);

       ll count=0;

       for(int i=0; i<vec1.size(); i++)
        {
            for(int j=0; j<vec2.size(); j++)
            {
                if(vec1[i]+vec2[j]==y)
                {
                    //cout<<vec1[i]<<" "<<vec2[j]<<endl;
                    count++;
                }
            }
        }

       cout<<count<<endl;

   return 0;
}