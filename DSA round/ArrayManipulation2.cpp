#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n , int k){
    k = k%n; 
    int i, j;
    // reversing the first array
    for( i = k , j = n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // reversing the second array

    for( i =0 , j= k-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

// reversing the overall array
    for(int i=0, j= n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int k = 6;
    rotateArray(arr, n , k);

    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


// The reversal algorithm states that we can rotate an array by k position ,if we break it into 2 parts from (0 to k-1 ) 
// and (k to n-1) , then we reverse the 2 array individually and finally we can reverse the overall array , the final array we get is
// a rotated array by k positions.

// Time complexity - 0(n) , for loop is used 3 times 
// space complexity - 0(1) , no extra space is taken