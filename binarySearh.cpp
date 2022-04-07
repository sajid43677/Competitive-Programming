#include<iostream>

using namespace std;

void bubbleShort(int arr[],int n){
    int pass,j,flag;
    for(pass = 1; pass < n; pass++){
        flag = 0;
        for(j = 0;j < (n-pass); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

}

void binarySearch(int arr[],int n,int key){
    int l,r,mid;
    l = 0;
    r = n - 1;
    while(l<=r){
        mid = l + (r-l)/2;
        if(arr[mid] == key){
            cout << "ELEMENT FOUND" << endl;
            return;
        }
        else if(key > arr[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << "ELEMENT NOT FOUND" << endl;
    return;
}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    bubbleShort(arr,9);
    int key = 4;
    binarySearch(arr,9,key);
}
