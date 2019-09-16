#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack1{

        vector<T> v;

public:

    /// Push
    void push(T data){
        v.push_back(data);
    }

    /// Pop
    void pop(){
        v.pop_back();
    }

    /// Top
    T top(){
        return v[v.size()-1];
    }

    /// Empty
    bool isEmpty(){
        return v.size()==0;
    }
};


int main(){

    Stack1<char> s;
    for(int i=0;i<5;i++){
        s.push(65+i);
    }

    while(!s.isEmpty()){
        cout<<s.top()<<" " ;
        s.pop();

}

return 0;
}

