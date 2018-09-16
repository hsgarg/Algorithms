#include<iostream>
using namespace std;

/// Bubble Sort
/// after every iteration the largest element reaches the end
/// compare adjacent elements and swap them

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        int j=0;
        for(;j<=n-i-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
    }
