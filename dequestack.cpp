// Deque  as a stack
#include<iostream>
#include<deque>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for(int i =0 ; i<n ; i++){
           int element; 
           cin>>element;
          dq.push_back(element);
        
    }
    while(!dq.empty()){
        cout<<dq.back()<<" ";
        dq.pop_back();
    }
    return 0;

}