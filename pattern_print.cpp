//To print Floyds Triangle

#include<iostream>
using namespace std;

int main(){
	int rows,Number=1;
	int i,j;
	cout<<"Provide the number of rows: ";
	cin>>rows;
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			cout<<Number<<" ";
			Number++;
		}
		cout<<endl;
	}
}
