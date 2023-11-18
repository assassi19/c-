#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.second==p2.second) //if frequency is equal
	{
		return p1.first<p2.first; //return the smaller value
	}
	return p1.second>p2.second; //return the element with greater frequency
}

void sort_by_decresing_freq(vector<int>arr[], int n){
   
}

int main()
{
	vector<int>arr={4,4,5,8,4,2,2,6,5};
	int n=arr.size();
	map<int,int>m;             //make a map
	for(int i=0;i<n;i++)       //put elements in map using for loop & putting mp[arr[i]] +=1; where if element is repeated values get appended
	{
		m[arr[i]]+=1;  //makes sures that value of second -> 0 to 1 thn 2 thn 3 etc
	}
	vector<pair<int,int>>a;
	for(auto it=m.begin();it!=m.end();it++){  //iterates through map & stores {key1, value1; key2, value2; key3,value3 ; etc...}
		a.push_back(make_pair(it->first,it->second)); //making pair of element and it's frequency
	}

	sort(a.begin(),a.end(),compare); //custom sort operation which 1st checks.
	vector<int>ans;
	for(auto x:a)
	{
		while(x.second--){
		ans.push_back(x.first);
		}
	}
	for(auto x:ans){
		cout<<x<<" ";
	}
	return 0;
}
