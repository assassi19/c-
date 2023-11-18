#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k;
	cin>>s>>k;
	int n=s.size();
	for(int i=0;i<n;i++){
		long long ans=0;
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			k+=2;
			ans+=s[i]*k;
		}
		else{
			k+=1;
			ans+=s[i]*k;
		}
		cout<<ans<<" ";
	}
	return 0;
}