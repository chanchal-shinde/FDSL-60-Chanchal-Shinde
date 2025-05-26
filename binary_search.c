#include<stdio.h>
int main() 
{
    int n,i,mid,low,high,key;
    printf("Enter the Array size");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array elements in ascending order",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Enter the element which you want to search");
    scanf("%d",&key);

    int found=0;
        high=n-1;
        
       for(low=0;low<=high;low++){ 
            mid=(low+high)/2;
        if(a[mid]==key) {
            for(i=mid-1;i>=0;i--){
                if(a[i]==key){
                    printf("Element Found at a[%d] position\n",i);
                   }
            }
            printf("Element Found at a[%d] position\n",mid);
            for(i=mid+1;i<n;i++){
                    if(a[i]==key){
                     printf("Element Found at a[%d] position\n",i);
                    }
            }
            
            found=1;
            break;
            
        
    }
       else if(key>a[mid]){
        low=mid+1;
        low--;
        
        }
        else if(key<a[mid]) {
        high=mid-1;
        low--;
        
        }
        

    }
    if(found!=1){

        printf("Element not found");
    
    }
    
    return 0;

}
