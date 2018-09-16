#include<iostream>
using namespace std;

/// Maximum sum subarray

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    int maxSum = INT_MIN;
    int currentSum=0;
    int left =0;
    int right =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum =0;
            for(int k=i;k<=j;k++){
                currentSum += a[k];

            }
           // cout<<currentSum<<endl;
        if(currentSum>maxSum){
            maxSum = currentSum;
            right = j;
            left = i;
        }
        }
    }
    cout<<"Maximum Sum is : "<<maxSum<<endl;
    for(int i=left;i<=right;i++){
        cout<<a[i]<<", ";
    }
    return 0;
    }
