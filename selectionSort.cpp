#include<iostream>
using namespace std;

/// Selection Sort
/// At every point select the minimum element and bring it to the front

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
            int minimum = a[i];
            int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(a[minIndex]>a[j]){
                minIndex = j;
            }
        }
        swap(a[minIndex], a[i]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
    }
