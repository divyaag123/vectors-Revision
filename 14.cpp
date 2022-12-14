#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ; 
    cin>>n ;
    vector<pair<int , int>> v;
    for(int i =0 ; i<n ; i++){
        int x , y;
        cin>>x >>y;
        v.push_back(make_pair(x, y));



    }
    cout<<"Before Sorting"<<endl;
    for(auto element : v)
        cout<<element.first<<element.second<<endl;
    sort(v.begin() , v.end());
    cout<<"After Sorting"<<endl;
    for(auto element : v)
        cout<<element.first<<element.second<<endl;


}