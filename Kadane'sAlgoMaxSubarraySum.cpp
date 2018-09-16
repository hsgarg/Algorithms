#include<iostream>
using namespace std;

/// KADANE's Algorithm Maximum Subarray Sum
/// O(n) Time complexity

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentSum =0;
    int max_sum = 0;
    for(int i=0;i<n;i++){
        currentSum += a[i];
        if(currentSum<0){
            currentSum = 0;
        }
        if(currentSum>max_sum){
            max_sum = currentSum;
        }
    }

    cout<<"Max Sum is : "<<max_sum<<endl;
    return 0;
    }
