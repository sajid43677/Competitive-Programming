#include <bits/stdc++.h>


using namespace std;

int n;

void f(int *arr,int i){
    if(i >= n) return;
    f(arr,i+2);
    cout << arr[i] << " ";

}

int main()
{
    cin >> n;
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    f(arr,0);

}
