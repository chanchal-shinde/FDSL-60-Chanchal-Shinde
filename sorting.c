#include<stdio.h>
int main()
{
    int n,t,swaping;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];

     printf("Enter %d array elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting the elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    for(int i=0;i<n-1;i++){
        swaping=0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swaping=1;

            }
            
        }
       
        if(swaping==0){
            break;
        }
        printf("Pass : %d :\t",i+1);
        for(int i=0;i<n;i++){
            printf("%d\t",a[i]);

        }
        printf("\n");

    }
    printf("After sorting the elements are :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}