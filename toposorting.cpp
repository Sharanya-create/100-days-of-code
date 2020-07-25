#include<iostream>
using namespace std;
struct Node {
	string node;
	string d[1000];
	int dep;
}no[1000];
string func(int n, int dep,int j);
typedef long long int l;
int main(){
	
	l n,t;
	
	cout<<"**Topological Sorting**"<<endl;
	cout<<"Enter no.of testcases"<<endl;
	cin>>t;
	while(t--){
		cout<<"Enter the number of nodes"<<endl;
		cin>>n;
		
		cout<<"Enter node and its dependency"<<endl;
		for(int i=0;i<n;i++){
			cin>>no[i].node;
			cout<<"Enter number of dependencies"<<endl;
			cin>>no[i].dep;
			if(no[i].dep!=0){
			
			for(int j=0;j<no[i].dep;j++){
				cin>>no[i].d[j];
			}
		}
		}
		for(int j=0;j<n;j++){
			string val=func(n,no[j].dep,j);
			
			if(val=="null"){
				cout<<no[j].node<<"-->";
				
				for(int k=0;k<n;k++){
					for(int l=0;l<no[k].dep;l++){
					
					if(no[k].d[l]==no[j].node){
						no[k].d[l]="null";
					}
				}
				}
			}
			
		}
		
	}
}
string func(int n, int dep, int j){
	int count=0;
	if(dep!=0){
	
	for(int i=0;i<dep;i++){
		if(no[j].d[i]=="null"){
			count++;
		}
	}
	if(count==dep){
		return "null";
	}
	else{
		return "not-null";
	}
}
else{
	return "null";
}
}
