#include<bits/stdc++.h>
using namespace std;

// The kadens algoritm helps us to find the maximum continous subarray sum, we basially define 2 vairable which helps us keeping the track of sums in array, 
// whenever the sum of an subarry reaches negative that means it will reduce the overall sum , so we make the current sum 0 and start the new subarray. 
int maxContiSum(int a[], int size){
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for(int i=0; i<size; i++){
        max_ending_here = max_ending_here + a[i];

        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
        // sum_reaches_negative
        if(max_ending_here <0){
            max_ending_here = 0;
        }
    }
    return max_so_far;
}


int main(){
    int a[] = {-2 , -3, 4, 100, -1, -2, -3, 1, 5, };
    int n = sizeof(a) / sizeof(a[0]);

    int max_sum = maxContiSum(a , n);

    cout<<"Max Continous Sum: " <<max_sum;
}