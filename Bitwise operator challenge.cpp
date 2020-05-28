### //Bitwise operator challenge
**I have offcourse not obatained the output at once and the comments describe how i debugged the logical errors without a watch function by giving inline code statements**
#include<stdio.h>

int main() {
    int n, i,j,l=0,f=0,p=0,and[500000],or[500000],xor[500000],k;
     int max=0, max1=0,max2=0;
    scanf("%d%d",&n,&k);
   
 
    for(i=1;i<=n-1;i++){
        for(j=i+1;j<=n;j++){
            
            // printf("%df%c",f,' ');
            and[f++]=i&j;
            //printf("%d%c",i&j,' ');
    
           // printf("%d%c",and[0],' ');
           // printf("%d%c",--f,' ');
          //  printf("%dj%c",j,' ');
            or[l++]=i|j;
            xor[p++]=i^j;
       
        }
    }
   /*  for(i=0;i<f;i++)
    {
        printf("%d%c",or[i],' ');
    }
  printf("\n");*/
    
  // printf("%d",and[0]);
    if(and[0]!=k&& and[0]<k)
    {
        max=and[0];
    }
    if(or[0]!=k && or[0]<k)
    {
        max1=or[0];
    }
    if(xor[0]!=k && xor[0]<k)
    {
        max2=xor[0];
    }
    
    for(i=0;i<f;i++)
    {
        if(and[i]>max && and[i]<k )
        {
            max=and[i];
        }
       // printf("%d%c",max,' ');
       // printf("%d",i);
       // printf("\'\'");
    }
    for(i=0;i<l;i++){
        if(or[i]>max1 && or[i]<k)
        {
            max1=or[i];
        }
    }
    for(i=0;i<p;i++){
        if(xor[i]>max2 && xor[i]<k)
        {
            max2=xor[i];
        }
    }
   
  printf("%d\n%d\n%d\n",max,max1,max2);
 /*  for(i=0;i<n;i++)
    {
        printf("%d",and[i]);
    }
    printf("\n");*/
   //  printf("%d",and[2]);


   
 
    return 0;
}
