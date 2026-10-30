#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int p,m;
    
    for(int i=0;i<n;i++)
    {
                scanf("%d",&a[i]);
    }
    
scanf("%d %d",&p,&m);
    for(int j=n; j>=0;j--)
    {
         a[j]=a[j-1];
        if(j==p)
        {
            a[j]=m;
            break;
        }   
    }
    
    for(int q=0;q<=n;q++)
    {
        printf("%d ",a[q]);
    }
    
    return 0;
}