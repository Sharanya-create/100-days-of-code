#include<iostream>
#include<stdlib.h>
using namespace std;
typedef long long int l;
int main(){
	l a[100000],n,mul=1,sum=0,rem,k=0;
	cin>>n;
	if(n==1){
		cout<<4<<endl;
		exit(0);
	}
	if(n==4){
		cout<<1<<endl;
		exit(0);
	}

   	while(n>0){
		rem=n%2;
		a[k++]=rem;                       
		n=n/2;
		
	}
	if(k<3){
		a[k++]=0;
	}
	for(l i=k-1;i>=0;i--){
		if(a[i]==1){
		  sum=sum+mul;	
		}
		mul=mul*2;
	}
	cout<<sum<<endl;
	
}
