#include<iostream>
using namespace std;
typedef long long int l;
int main(){
	l n,count=1;
	cin>>n;
	l a[n];
	for(l i=0;i<n;i++){
		cin>>a[i];
	}
	for(l i=0;i<n;i++){
	
	for(l left=0;left<=i-1;left++){
		if(a[left]<=a[i]){
			
				count++;
			
		}
		else{
			break;
		}
		
	}
	for(l right=i+1;right<n;right++){
		if(a[right]<=a[i]){
			
			
				count++;
			
		}
		else{
			break;
		}
		
	}
	cout<<count<<" ";
	count=1;
	
}
}
