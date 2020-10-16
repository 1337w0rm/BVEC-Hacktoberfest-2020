#include <bits/stdc++.h> 
#include <math.h>
using namespace std; 

int main(){
	int i,g,b,h;
	cin>>g;
	int l[g];
	cin>>b>>h;
	for(i=0;i<g;i++){
		cin>>l[i];
	}
	int totVol=0;
	for(i=0;i<g;i++){
		totVol+=l[i]*b*h;
	}
	int cal, maxl;
	cal=maxl=0;
	stack<int> s;
    for (int i=0;i<g;i++)
    {
        while(!s.empty() && l[i]<=l[s.top()])
        {
            int n = s.top();
            s.pop();
            if(s.empty()){
            	cal = l[n] * i;
			}
			else{
				cal = l[n] * (i-s.top()-1);
			}
			if(cal>maxl){
				maxl=cal;
			}
        }
        s.push(i);
    }
    while (!s.empty()){
		int n = s.top();
        s.pop();
        if(s.empty()){
            cal = l[n]*g;
		}
		else{
			cal = l[n]*(g-s.top()-1);
		}
        if(cal>maxl){
			maxl=cal;
		}
    }
    int ingotVol;
    ingotVol=maxl*b*h;
    int mod = pow(10,9) + 7;
    cout << (totVol-ingotVol) % mod ;	
    return 0;
}
