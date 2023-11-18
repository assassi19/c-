#include <cmath>
#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
   map<string,int> mp; int n,pos=0,val; string s;
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>pos;
      switch (pos){
		case 1:
         cin>>s;
			cin>>val;
			if(mp.find(s)!= mp.end()){
			mp[s] += val;
			}
		else{
			mp[s] = val;             
		}
			break;
		case 2:
			cin>>s;
			if(mp.find(s)!=mp.end()){
				mp.erase(s);
			}
			break;
		case 3:
			cin>>s;
			// auto itr = mp.find(s);
			cout<<mp[s];
			break;
		}
   }

   return 0;
}
