#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> dijsktra(int V, vector<vector<int>> adj[], int Src){
   priority_queue<pair<int,int> vector<pair<int,int>>, greater<pair<int,int>>> pq;
   vector<int> dist(V, 1e7);

   dist[Src] = 0; //base case obviously
   pq.push({0,Src});

   while(!pq.empty()){
      int dis = pq.top().first;
      int node = pq.top().second;
      pq.pop();

      for(auto it:adj[node]){
         int edgewt = it[1];
         int adjnode = it[0];

         if(dis + edgewt < dist[adjnode]){
            dist[adjnode] = dis + edgewt;
            pq.push({dist[adjnode], adjnode});  
         }
      }
   }
   return dist;
}

int main(){
   
return 0;
}