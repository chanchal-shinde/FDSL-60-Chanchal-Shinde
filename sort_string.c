#include<stdio.h>
#include<string.h>

int main()
{
    char c[ 20],t;
    printf("Enter a string");
    scanf("%s",c);
    printf("String before sorting :");
    printf("%s",c);
    printf("\n");

   int len=strlen(c);
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(c[j]>c[j+1]){
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
            }
        }
        
    }
    printf("String after sorting :");
     printf("%s",c);
    
    return 0;
}