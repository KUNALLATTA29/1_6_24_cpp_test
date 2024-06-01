#include <bits/stdc++.h>
using namespace std;
int main(){
   
   vector<int>arr={1,2,3,6,18,108};
   vector<int>arr1={1,2,3};
   for(int i=3;i<=arr.size();i++){
       arr1.push_back(arr[i-1]*arr[i-2]);
   }
   for(auto it:arr1){
       cout<<it<<" ";
   }

   return 0;
}