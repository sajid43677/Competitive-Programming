#include <bits/stdc++.h>
//sum of digits
//===============
int sumOfDigit(long long num){
    int sum = 0;
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}
//sum of digits untill one digit.
int singleDigit(int num){
    int sum = 0;
    while(true){
            sum = sumOfDigit(num);
            num = sum;
            if(sum < 10){
                return sum;
            }
        }

}
//sum of chars of a string where a = 1,b=2 ....z=26
int sumOfChar(string s){
    int sum1 = 0;
    for(int i = 0; i < s.length(); i ++){
        if(s[i] <= 'Z' && s[i] >='A'){
                sum1 = sum1 + (s[i] - 'A' + 1);
            }
            if(s[i] <= 'z' && s[i] >='a'){
                sum1 = sum1 + (s[i] - 'a' + 1);
            }
    }
    return sum1;
}
//reverse a number
// ==================
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
//palindrome check
// ====================
int checkPalindrome(string str)
{
    // Calculating string length
    int len = str.length();

    // Traversing through the string
    // upto hlaf its length
    for (int i = 0; i < len / 2; i++) {

        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }

    // If the above loop doesn't return then it is
    // palindrome
    return true;
}

//Sub sequence string check
// ============================
bool isSubSequence(string stm, string st){
    int len,lenm;
    int flag=0;
    len = st.length();
    lenm = stm.length() - 1;
    for(int i = 0; i <= lenm; i++){
        if(st[flag] == stm[i]){
            flag++;
        }
        if(flag == len){
            return true;
        }
    }
    return false;
}

//gcd in recursive and lcd
// ==========================
int gcd(int i , int j){
    if(i == 0)
        return j;
    return gcd(j%i,i);
}

int lcd(int i , int j){
    return (i*j)/gcd(i,j);
}

//sieve of prime
// ================
long long is_prime[10000000];
void sieve_prime(){
	int n = 1000000;
	is_prime[0] = is_prime[1] = 1;
	for (long long i = 2; i * i <= n; i++) {
		if (is_prime[i]) {
			for (long long j = i * i; j <= n; j += i)
				is_prime[j] = 1;
		}
	}
}

//count number of 1's of binary representation of a integer
// ============================================================
int cntOne(ll n){
    int cnt = 0;
    while(n!=0){
        n = n&(n-1);
        cnt++;
    }
return cnt;
}

//determine the number power of 2 or not
// ========================================
bool po2(int n){
    if(n==0)
        return false;
    if(!(n&(n-1)))
        return true;
    return false;
}

//determine ith bit of a number is set or not(1 or 0)
// =====================================================
bool ithSet(int n)
{
    if( n & (1 << i) )
        return true;
    else
        return false;
}

//for getting possible subset of a string
// =========================================
string sr[100000];

void subSets(string s){
    int n = s.size();
    int cnt = 0;
    if(n==0){
        return;
    }
    for(int i = 0; i < (1<<n); i++){
            sr[cnt] = "";
        for(int j = 0; j < n;j++){
            if(i & (1 << j)){
                sr[cnt] = sr[cnt] + s[j];
            }
        }
        cnt++;
    }
}

//total number of divisors of given number
// ==========================================
int nod(int n){
    int cnt = 0;
    for(int i = 1; i*i < n; i++){
        if(n%i==0){
            cnt++;
            if(i != n/i) cnt++;
        }
    }
    return cnt;
}

//largest power of 2 (most significant bit in binary form), which is less than or equal to the given number N
// ===============================================================================================================
ll large2p(ll N){
    N = N| (N>>1);
    N = N| (N>>2);
    N = N| (N>>4);
    N = N| (N>>8);//16 bit stop here
    N = N| (N>>16);//32 bit stop here
    N = N| (N>>32);//64 bit stop here

    return (N+1) >> 1;
}

//Returns the rightmost 1 in decimal representation of x
// ========================================================
int num = n & (-n);


//exponentiation modulas (x^n)%mod
// ===============================
ll exp(ll x, ll n, ll mod)
{
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return exp((x*x)%mod,n/2);
    if(n%2==1) return (x*exp((x*x)%mod,n/2))%mod;
}


//vector second element sort function decending
// =============================================
bool srt(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}


//line to words
// ===============
vector <string> ltow;

void ltw(string s){
    stringstream chk(s);
    string flg;
    while(chk >> flg){
        ltow.push_back(flg);
    }
}

//decimal to binary string format
// =================================

string decimalToBinary(ll n)
{

    string s = bitset<64> (n).to_string();

    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

//number of co primes of n less than n
// ======================================
int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

//bigmod
// =========
ll bigmod(ll a, ll b, ll m){
    if(b==0){
        return 1;
    }
    ll x = bigmod(a,b/2,m);
    x = (x*x) % m;
    if(b%2==1){
        x = (x*a) % m;
    }
    return x;
}

//total digits in factorial of x
// ================================
ll digitsFact(ll x){
    double ans = 0;
    for(int i = 1; i <=x;i++){
        ans = ans + log10(i);
    }
    ll ans2 = floor(ans) + 1;
    return ans;
}

//ternary search
================
int ternarySearch(int arr[], int n,int k){
    int l = 0;
    int r = n-1;
    int mid1,mid2;
    while(l<=r){
        mid1 = l+(r-l)/3;
        mid2 = r-(r-l)/3;
        if(arr[mid1] == k){
            return mid1;
        }
        
        if(arr[mid2] == k){
            return mid2;
        }
        if(arr[mid1] > k){
            r = mid1 - 1;
        }
        else if(arr[mid2] > k){
            l = mid1 + 1;
            r = mid2 - 1;
        }
        else{
            l = mid2 + 1;
        }
    }
    return -1;
}

//Binary search
=================
void binarySearch(int array[],int x,int n){
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x) {
        cout << "The element" << x << " is found" << endl;
    }
}



















