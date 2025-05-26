#include<stdio.h>
int main()
{
 int n;
 printf("Enter the size of array ");
 scanf("%d",&n);
 int a[n],i,key,found;
 printf("Enter %d array elements",n);
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
    printf("%d\t",a[i]);

 }
printf("\nEnter the element which you want to search");
scanf("%d",&key);

for(i=0;i<n;i++){
    if(a[i]==key){
        found=1;
            printf("Found %d at a[%d]\n",key,i);
    
        
    }
    else {
        found=0;
    }
}
if(found==0){
    printf(" %d Not found",key);
}

return 0;

}