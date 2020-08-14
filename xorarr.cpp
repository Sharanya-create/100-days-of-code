#include<iostream>
#include<stdlib.h>
using namespace std;
typedef long long int l;
int main(){
	l n;
	cin>>n;
	if(n<=1){
		cout<<"-1"<<endl;
		exit(0);
	}
	l arr[n],result[n],m=0;
	l final=0;
	for(l i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number of queries"<<endl;
	l upper,lower,num;
	cin>>num;
	if(num<1){
		cout<<"-1"<<endl;
		exit(0);
	}
	cout<<"Enter the queries"<<endl;
	for(l j=1;j<=num;j++){
		cin>>lower;
		cin>>upper;
		for(l k=lower;k<=upper;k++){
			final=final^arr[k];
		}
		
		result[m++]=final;
		final=0;
	}
	cout<<"[";
	for(l j=0;j<m;j++){
		cout<<result[j];
		if(j!=m-1){
			cout<<",";
		}
	}
	cout<<"]"<<endl;
	
}
