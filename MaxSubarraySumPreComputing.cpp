#include<iostream>
using namespace std;

///Maximum sub array Sum in N^2 time, using cumulative sum or pre computing
/// Make a cumulative Sum array csum[] in which csum[i] = csum[i-1] + a[i]

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int csum[1000];
    csum[0] = a[0];
    for(int i=1;i<n;i++){
        csum[i]= csum[i-1]+a[i];
    }
    int currentSum =0, maxSum = INT_MIN, left = 0, right =0;
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
                currentSum =0;
            currentSum = csum[j]-csum[i-1];

        if(currentSum>maxSum){
            maxSum = currentSum;
            left = i;
            right =j;
        }
    }
    }
    cout<<"Max Sum is : "<<maxSum<<endl;
    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ";
    }

    return 0;
    }
