#include<iostream>
#include<stdlib.h>
using namespace std;
typedef long long int l;
int main(){
	string str;
	l j=0;
	l count=0;
	getline(cin,str);
	if(str.length()==1){
		cout<<"-1"<<endl;
		exit(0);
	}
	for(j=0;str[j]!='\0';j++);
	j=j-1;
	for(l i=0;str[i]!='\0';i++){
		if(str[i]!=str[j] && j>i){
			count++;
			j--;
			
		}
		else{
			j--;
		}
		
	}
	cout<<count<<endl;
}
