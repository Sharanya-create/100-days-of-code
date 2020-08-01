#include<iostream>
using namespace std;
typedef long long int l;
int zeros(l b);
int main(){
	l n,b,bb;
	int a=1,found=0;
	cin>>n;
	b=n-1;
	bb=n;
	found=zeros(b);
	if(!found){
	
	cout<<"["<<a<<","<<b<<"]"<<endl;
}
else{
	
	while(found){
	                                                             
	a++;
	b=bb-a;
	
	found=zeros(b);                           
	if(!found && a+b==n){
	  cout<<"["<<a<<","<<b<<"]"<<endl;	
	}
}
	
}
}

int zeros(l b){
	int rem,found=0;
	while(b>0){
		rem=b%10;
		b=b/10;
		if(rem==0){
			found=1;
		}
	}
	return found;
}

