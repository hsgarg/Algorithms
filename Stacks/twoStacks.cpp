#include<iostream> 
#include<stack>
using namespace std; 

// Implement 2 stacks in one array
/*

Start one array from one end(i=0) and the 2nd from the other end(i=n-1)
*/

class stack2 { 
    int *a; 
    int top1, top2; 
    int number;
public: 

   stack2(int n){ 
       number = n; 
       a = new int[n]; 
       top1 = -1; 
       top2 = number; 
   } 
  
   // push in stack-1
   void push1(int x) {  
       if (top1<top2-1){ 
           top1++; 
           a[top1] = x; 
       } 
       else{ 
          cout<<"Can not take more inputs. Stack Overflow!"<<endl;
       } 
   } 
  
   // Push inti stack-2
   void push2(int x) { 
       if (top1 < top2 - 1) { 
           top2--; 
           a[top2] = x; 
       } 
       else{ 
           cout<<"Can not take more inputs. Stack Overflow!"<<endl;
       } 
   } 
  
   //pop from first stack 
   int pop1(){ 
       if (top1 >= 0 ) { 
          int x = a[top1]; 
          top1--; 
          return x; 
       } 
       else{ 
           cout<<"Can not pop!"<<endl; 
       } 
   } 
  
   //pop from econd stack 
   int pop2() { 
       if (top2 < number) { 
          int x = a[top2]; 
          top2++; 
          return x; 
       } 
       else{ 
          cout<<"Can not pop!"<<endl; 
       } 
   } 
}; 
  
  
int main() { 
    stack2 twoStack(7); 
    twoStack.push1(22); 
    twoStack.push2(90); 
    
    return 0; 
} 