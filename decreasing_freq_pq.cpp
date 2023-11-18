#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;

class compare {
   public:
   bool operator()(pair<int,int> p1, pair<int,int>p2){
      if(p1.first == p2.first){
         return p1.second > p2.second;
      }
      return p1.first < p2.first;
   }
};

vector<int> DecreasingFreq(int arr[], int n){ //takes 1st value of array by referrance and n i.e. size of array
   map<int,int> mp;
   for(int i=0; i<n; i++){
      mp[arr[i]]++;
   }
   priority_queue<pair<int, int>, vector<pair<int, int>>, compare > pq;

   for(auto it = mp.begin(); it!=mp.end(); it++){
      pq.push(make_pair(it->second, it->first));
   }
   vector<int> result;

   int index = 0;
   while(!pq.empty()){
      int freq = pq.top().first;
      int elem = pq.top().second;
      pq.pop();

   for(int i=0; i< freq; i++){
      result.push_back(elem);
   }
   }
   return result;
   }

   

int main(){
   int arr[] = { 4, 4, 5, 6, 4, 2, 2, 8, 5 };
   int n = sizeof(arr) / sizeof(int);
   
    // Function Call
   vector<int> ans = DecreasingFreq(arr, n);

    // Output the sorted array
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
   return 0;
}