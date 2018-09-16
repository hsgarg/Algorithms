#include<iostream>
using namespace std;

/// Generate all subarrays of a given array
/// 3 loops

int main(){
    int n;
    cin>>n;
    int a[110];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;

        }
    }





    return 0;
    }
