#include<iostream>
using namespace std;

/// SELECTION SORT CODE

void selectionSort(int a[], int n){

     for(int i=0;i<n-1;i++){    // this loop will run n-1 times
        int minIndex =i;        // assume current element is the minimum element
        for(int j=i+1;j<n;j++){  // min element in remaining part
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);
     }


    }

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    selectionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<", ";
    }

    return 0;
    }
