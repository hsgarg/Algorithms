#include<iostream>
#include<stack>
using namespace std;

/// Reverse a Stack using 1) Extra Stack 2)Recursion

void transfer(stack<char> &s1, stack<char> &s2, int n){

    for(int i=0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<char> &s){
    stack<char> s2;
    int n=s.size();
    for(int i=0;i<n;i++){
        /// top element stored
        int x=s.top();
        s.pop();
        transfer(s,s2,n-i-1);
        s.push(x);
        transfer(s2,s,n-i-1);
    }


}
void printStack(stack<char> s){
        while(!s.empty()){
        cout<<s.top()<<" " ;
        s.pop();

}

}

void pushAtBottom(stack<char>& s, char topElement){

    if(s.empty()){
        s.push(topElement);
        return;
    }

    char data=s.top();
    s.pop();
    pushAtBottom(s,topElement);
    s.push(data);

}

void recReverse(stack<char>& s){
///base case
    if(s.empty()){
        return;
    }
    char topElement=s.top();
    s.pop();
    recReverse(s);
    pushAtBottom(s,topElement);


}


int main(){
    stack<char> s;
    for(int i=0;i<5;i++){
        s.push(i);
    }
    cout<<"Before Reversing: ";
    printStack(s);


    reverseStack(s);
    cout<<endl<<"After Reversing using Extra Stack: ";
    printStack(s);


    cout<<endl;
    cout<<"Reverse the already reversed stack using Recursion: "<<endl;
    recReverse(s);
    printStack(s);




return 0;
}

