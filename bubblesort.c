#include<stdio.h>
void main(){
    int arraysize;
    int i,j,swapped; //for itteration purpose  
    int array[100];
    printf("Enter the size of an array");
    scanf("%d",&arraysize);
    for(i=0;i<arraysize;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<arraysize;i++){
        swapped=0;
        for(j=0;j<arraysize-1-i;j++){
            if(array[j]>array[j+1])
            {
                swapped=1;
                array[j]=array[j]+array[j+1];
                array[j+1]=array[j]-array[j+1];
                array[j]=array[j]-array[j+1];
            }
        }
        if(swapped != 0){
            break;
        }
    }
    for(i=0;i<arraysize;i++){
        printf("%d",array[i]);
    }

}