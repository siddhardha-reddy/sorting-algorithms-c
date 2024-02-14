#include<stdio.h>
void main(){
    int n,i,min,j;
    int a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i;j<n-1;j++){
                if(a[j]>a[j+1]){
                    min=j+1;
                }
        }
        if(min == i){
            break;
        }
        else{
            a[i]=a[i]+a[min];
            a[min]=a[i]-a[min];
            a[i]=a[i]-a[min];
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}