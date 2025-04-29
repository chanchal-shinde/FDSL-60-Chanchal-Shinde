#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of array");
    scanf("%d",&n);
    
    int a[n],swaping;
    printf("Enter %d array elements",n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        swaping=0;
        for(j=i+1;j<n;j++ ){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                swaping=1;
            }
        }
        
        printf(" pass :%d\n",i+1);
        for(int i=0;i<n;i++){
            
            printf("%d\t",a[i]);
        }
        printf("\n"); 
        if(swaping==0){
            break;
        }  
      
    }
    
    
    return 0;
}