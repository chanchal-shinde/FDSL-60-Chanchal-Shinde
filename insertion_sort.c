#include<stdio.h>
int main()
{
    int n,temp,i,j,k,l;
    printf("Enter size of array elements");
    scanf("%d",&n);
    int a[n],swap;
    printf("Enter %d array elements",n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements before sorting are :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
printf("\n");
    for( i=1;i<n;i++){
       for(j=0;j<i;j++){
        if(a[j]>a[i]){
            temp=a[i];
            for(k=i-1;k>=j;k--){
                a[k+1]=a[k];
            }
            a[j]=temp;
        }
        
       }
       printf("Pass :%d\n",i);
       for(l=0;l<n;l++){
        printf("%d\t",a[l]);
      }
      printf("\n");
      
        
    }
    printf("\n");
    printf("Elements after sorting are :\n");
    for( i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
