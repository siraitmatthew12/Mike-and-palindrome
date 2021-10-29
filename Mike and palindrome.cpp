#include<bits/stdc++.h> 

using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length(), count = 0;
	int i;
	for(i=0;i<(n/2);i++){
		if(s[i]==s[n-i-1]){
//			cout<<s[i]<<s[n-i-1]<<endl;
			count+=0;
//			cout<<count<<endl;
		}
		else{
//			cout<<s[i]<<s[n-i-1]<<endl;
			count++;
//			cout<<count<<endl;
		}
	}
	if(count==1){
		cout<<"YES";
	}
	else if(count==0 && n%2!=0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
