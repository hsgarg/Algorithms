#include <iostream>
using namespace std;

int seachInRotated(int *a,int s,int e,int key){
int mid=(s+e)/2;
if(s>e){
    return -1;
}
else if(a[mid]==key){
    return mid;
}
// lies on 1st line
if(a[s]<a[mid]){
    if(key>=a[s]&&key<=a[mid]){
        return seachInRotated(a,s,mid-1,key);
    }
    else{
        return seachInRotated(a,mid+1,e,key);
    }
}

//Second Line
if(key<=a[e]&&key>=a[mid]){
    return seachInRotated(a,mid+1,e,key);
}
else{
     return seachInRotated(a,s,mid-1,key);
}



}



int main() {
    int a[]={4,5,6,7,1,2,3};
    int key;
    cin>>key;

    cout<<seachInRotated(a,0,6,key);



    return 0;
}

