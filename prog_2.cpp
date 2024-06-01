#include <bits/stdc++.h>
using namespace std;
int main(){
   
   vector<int>arr={ 2 ,3 ,1 ,3 ,1 ,3 ,1 ,3 ,4 ,6 ,4 ,6 ,5};
   map<int,int> zoom;
   for(auto it:arr){
       zoom[it]++;
   }
   for(auto it:zoom){
       cout<<it.first<<" : "<<it.second<<endl;
   }

   return 0;
}