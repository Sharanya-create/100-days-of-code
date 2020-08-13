#include<iostream>
using namespace std;
typedef long long int l;
int main(){
	l n;
	cin>>n;
	l nums,a[n],k=0,freq,val;
	for(l i=0;i<n;i=i+2){
		
		
		cin>>nums;
		freq=nums;
		cin>>val;
		
		
		for(l j=0;j<freq;j++){
		a[k++]=val;
}
}
cout<<"[";
for(l j=0;j<k;j++){
	cout<<a[j];
	if(j!=k-1){
		cout<<",";
	}
}
cout<<"]"<<endl;
	
	
		
	
}


