#include<iostream>
#include<algorithm>
using namespace std;

void bin(int a, int b, int c );
int a1[100],b1[100],c1[100],d1[100];
int main(){
	int a,b,c,d,rem,count=0,a1_len,b1_len,c1_len,d1_len;
	int size,k=0;
	cin>>a>>b>>c;
	for(int i=0;i<100;i++){
		a1[i]=b1[i]=c1[i]=d1[i]=0;
	}
	
	if((a|b)==c){
		cout<<"0"<<endl;
		
		
	}
	else{
	
	d=a|b;
	bin(a,b,c);
	while(d>0){
		rem=d%2;
		d=d/2;
		d1[k++]=rem;
	}
	a1_len=sizeof(a1)/sizeof(a1[0]); /*onlu used to see what is the result of sizeof()*/
	b1_len=sizeof(b1)/sizeof(b1[0]);
	c1_len=sizeof(c1)/sizeof(c1[0]);
	d1_len=sizeof(d1)/sizeof(d1[0]);
	
	size=max(a1_len,b1_len);
	size=max(size,c1_len); /*only used to see how max function works on same numbers these can be changed by returning i,j and k from the functions and finding their max*/
	size=max(size,d1_len);
	
	
	for(int i=size-1;i>=0;i--){
		if(c1[i]!=d1[i]){
			if(c1[i]==0){
				if(a1[i]==1 && b1[i]==1 ){
					count=count+2;
				}
				else{
					count++;
				}
			}
			else{
				count++;
			}
				
			
		}
		
	}
	
	cout<<count<<endl;
}
	
	
}
void bin(int a,int b, int c){
	int i=0,j=0,k=0,rem,rem1,rem2;
	while(a>0){
	rem=a%2;
	a=a/2;

	a1[i++]=rem;

}
	while(b>0){
	rem1=b%2;
	b=b/2;

	b1[j++]=rem1;

}
	while(c>0){
	rem2=c%2;
	c=c/2;

	c1[k++]=rem2;
	
	
}
}
