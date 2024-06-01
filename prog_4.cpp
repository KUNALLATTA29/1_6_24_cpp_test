#include <bits/stdc++.h>
using namespace std;
int main(){
   
   vector<int>arr={2,3,4,5,6};
   vector<int>arr1;
   for(int i=0;i<arr.size();i++){
       if(i==0){
           arr1.push_back(arr[arr.size()-1]*arr[i+1]);
       }else if(i==arr.size()-1){
           arr1.push_back(arr[i-1]*arr[0]);
       }else{
           arr1.push_back(arr[i+1]*arr[i-1]);
       }
   }
   for(auto it:arr1){
       cout<<it<<" ";
   }

   return 0;
}