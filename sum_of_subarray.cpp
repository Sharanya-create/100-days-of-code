/* execution time:lesss than 1sec*/

#include <iostream>
using namespace std;
int T=0,N=0,S=0;
void compute();
int main() {
	int i;
	cin>>T;
	for(i=1;i<=T;i++){
	    compute();
	}
	return 0;
}
void compute(){
    int found=0,i,sum=0,j=0,got=0,l;
    
    scanf("%d%d",&N,&S);
    
    int a[N];


    for(i=0;i<N;i++){
        cin>>a[i];
    }
    
        if(i>N){
            
            found=1;
        }
        for(i=0;i<N;i++){
        if(found!=1){
        if(S==a[i]){
            found=1;
            
            l=i;
            break;
        }
        }
        }
        
    
    if(!found){
        
        
            for(i=0;i<N;i++)
            {    sum=a[i];
         
                for(j=i+1;j<N;j++){
                   sum=sum+a[j];
                   
                   if(sum==S){
                       printf("%d%c%d\n",i+1,' ',j+1);
                       
                       got=1;
                       
                       break;
                   }
                   if(sum>S)
                   break;
                }
                if(got==1){
                    break;
                }
            }
        
    }
   if(found)
    
        printf("%d%c%d\n",l+1,' ',l+1);
    
    
    
    if(!got&&!found){
      printf("%d\n",-1);
    }
    
}
