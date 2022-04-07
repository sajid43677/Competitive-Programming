#include<iostream>

using namespace std;

void bubbleSort(int arr[],int n){
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

void binarySearch(int arr[],int l,int r,int key){
    if(l>r){
        cout << "ELEMENT NOT FOUND" << endl;
        return;
    }
    int mid = l+(r-l)/2;
    if(arr[mid] == key){
        cout << "ELEMENT FOUND" << endl;
        return;
    }
    else if(arr[mid] < key){
             //cout << "Recursing to l" << endl;
        binarySearch(arr,mid+1,r,key);

    }
    else{
             //cout << "Recursing to r" << endl;
        binarySearch(arr,l,mid-1,key);
    }
}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    bubbleSort(arr,9);

//    for(int i = 0;i < 9;i++)
//        cout << arr[i] <<" ";
    binarySearch(arr,0,9-1,100);



}
