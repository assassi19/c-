#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int diff_team(vector<int> v1, int size){
   int team_a=0, i=0,j=size-1;
   int team_b=0;
   unordered_map<int,int> mp;

// three cases, 1st is to take the all +ve alternatively, once they are over than take -ve alternatively, than return difference;
   jump2:
   for(i; i<size; i++){
      if(v1[i]>=0){
         team_a += v1[i];
         mp[v1[i]] = i;
      }
   goto jump;
   }
   jump:
for(j; j>=0; j++){
   if(v1[j]>=0){
      team_b +=v1[j];
      mp.insert(v1[i],i);
   }
   goto jump2;
}
//learn maps greedy and dp along with recursion than you can solve this sum



}


int main(){
   int n;
   cout<<"enter size of array : ";
   cin>>n;
   vector<int> v1;
   for(int i=0; i<n; i++){
      int temp;
      cin>>temp;
      v1.push_back(temp);
   }

   cout<<diff_team(v1,n);

   return 0;
}