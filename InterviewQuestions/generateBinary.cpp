#include <iostream>
#include<queue>
using namespace std;

void generateBin(int n){

    queue<string>binaryQ;
    binaryQ.push("1");

    // n times : loop
    int i=2;
    while(i<=n){
        // append 0 and append 1
        // for eg: append 0 to 1 makes it >10 i.e 2 in decimal
        binaryQ.push(binaryQ.front()+"0");
        binaryQ.push(binaryQ.front()+"1");

        //  print front element fromm binryQ and dequeue
        cout<<binaryQ.front()<<"...";
        binaryQ.pop();
    }
    i++;

}

int main() {
  
    int n;
    cin>>n;
    generateBin(n);

  return 0;
}
