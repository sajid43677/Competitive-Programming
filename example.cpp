







#include <bits/stdc++.h>








using namespace std;







long long f(long long s){
    return 5*s + 1;
}

int sumlist(int *x,int a){
    //int a = x.length();
    int sum = 0;
    for(int i = 0; i < a; i++) sum += x[i];
    return sum;
}

char *highchar(char *ar){
    //cout << ar << endl;
    int s1 = strlen(ar);
    for(int i = 0 ; i < s1 ; i++){
        if(isalpha(ar[i]) && i%2==0) ar[i] = toupper(ar[i]);
    }
    return ar;
}


int main()
{

    cout << endl;
    /* char s[] = "i know nothing";
    char* arrt = highchar(s);
    int s1 = strlen(s); */
    for(int i = 0;i < s1;i++){
        //if(!isalpha(arrt[i])) break;
        cout << arrt[i];
    }

   return 0;
}
