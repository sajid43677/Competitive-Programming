#include<iostream>

using namespace std;

void mergE(int arr[],int p,int q,int r){

    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i = 0; i < n1; i++ ){
        L[i] = arr[p+i];
    }
    L[n1] = INT_MAX;
    for(int i = 0; i < n2; i++ ){
        R[i] = arr[q+i+1];
    }
    R[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    for(int k = p; k <= r;k++){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
    }

}

void mergeSort(int arr[],int p,int r){
    if(p>=r){
        return;
    }
    int q = (p+r)/2;
    mergeSort(arr,p,q);
    mergeSort(arr,q+1,r);
    mergE(arr,p,q,r);

}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    mergeSort(arr,0,9-1);

    for(int i = 0; i < 9; i ++)
        cout << arr[i] << " ";

}
