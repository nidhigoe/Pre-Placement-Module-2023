#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int key, int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return -1;

}

int main() {
    int n ,element;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cin >> element;
    sort(arr , arr+n);
    cout << binarySearch(arr,element,n) << endl;
    return 0;
}
