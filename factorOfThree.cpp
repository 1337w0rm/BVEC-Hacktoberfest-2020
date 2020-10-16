#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int t,i;
	cin>>t;
	while(t!=0){
		int n;
		cin>>n;
		int arr[n],zero,one,two;
		zero=one=two=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		for(i=0;i<n;i++){
			if(arr[i]%3==0){
				zero++;
			}
			else if(arr[i]%3==1){
				one++;
			}
			else if(arr[i]%3==2){
				two++;
			}
		}
		if(zero==0&&one==0&&two!=0){
			cout<<"Yes"<<'\n';
		}
		else if(zero==0&&one!=0&&two==0){
			cout<<"Yes"<<'\n';
		}
		else if(zero==0&&one!=0&&two!=0){
			cout<<"No"<<'\n';
		}
		else if(zero<=one+two+1){
			cout<<"Yes"<<'\n';
		}
		else{
			cout<<"No"<<'\n';
		}
		t--;
		if(t!=0){
			cout<<"\n";
		}
	}
	return 0;
}
	
