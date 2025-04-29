#include<stdio.h>
#include<string.h>

struct student{
    int roll_no;
    char name[20];
};

int main(){
    struct student s[10];
    int n;
    printf("Enter the number of student" );
     scanf("%d",&n);
      for(int i=0;i<n;i++ ){
        printf("Enter the information of no. %d student\n",i+1);
        printf("Enter the name");
        scanf("%s",s[i].name);
        printf("Enter the roll no");
        scanf("%d",&s[i].roll_no);
    }
    for(int i=0;i<n;i++){
        printf("Information of no. %d student is \n",i+1);
        printf("The name of student is %s\n",s[i].name);
        printf("The roll number of student is %d\n\n",s[i].roll_no);
    }
    int ch,p,r,y;
    do{ 
    printf("Enter the no. of choice from following\n");
    printf("1. Insertion \n 2. Deletion\n 3.Modification \n");
    scanf("%d",&ch);
    
    
    switch(ch)
    {
        case 1: printf("You entered insertion\n");
                 printf("Enter the position at which you want to insert data");
                scanf("%d",&p);
                for(int i=n;i>=p;i--){
                    s[i+1].roll_no=s[i].roll_no;
                    strcpy(s[i+1].name,s[i].name);
                } 
                printf("Enter the data \n");
                printf("Enter the name ");
                scanf("%s",s[p].name);
                printf("Enter the roll number");
                scanf("%d",&s[p].roll_no);

                printf("\n\n");
                printf("After insertion the information of students is\n");

                for(int i=0;i<n+1;i++){
                    printf("Information of no. %d student is :\n",i+1);
                    printf("Name of student is %s\n",s[i].name);
                    printf("Roll number of student is %d\n\n",s[i].roll_no);
                }
                n=n+1;
                break;;

        case 2:printf("You entered deletion\n");
               printf("Enter the position from which you  want to delete the data \n");
                scanf("%d",&p);

                for(int i=p;i<=n-1;i++){
                    s[i].roll_no=s[i+1].roll_no;
                    strcpy(s[i].name,s[i+1].name);
                }

                printf("Information after deletion is\n ");
                for(int i=0;i<n-1;i++){
                    printf("Information of no. %d student is\n",i+1);
                    printf("Name of student %s\n",s[i].name);
                    printf("Roll number of student is %d\n\n",s[i].roll_no);
                }   
                n=n-1;
                break;  

        case 3: printf("You entered mofification\n");
                printf("At which position would you like to modify information\n");
                scanf("%d",&p);
                printf("What  do you want to modify: \n 1. Name \n 2. Roll no \n 3. both \n");
                scanf("%d",&r);
                
                printf("Enter the data\n");

                if(r==1){
                    printf("Enter the name");
                     scanf("%s",s[p].name);
                }

                else if(r==2)
                {
                     printf("Enter the roll number");
                     scanf("%d",&s[p].roll_no);

                }
                else if(r==3){
                    printf("Enter the name");
                    scanf("%s",s[p].name);
                    printf("Enter the roll number");
                    scanf("%d",&s[p].roll_no);

                }
                else{
                    printf("Wrong choice");
                }
                 for(int i=0;i<n;i++){
                  printf("Information of no. %d student is \n",i+1);
                  printf("The name of student is %s\n",s[i].name);
                  printf("The roll number of student is %d\n\n",s[i].roll_no);
                    
                 }
                 break;

            default :
            printf("Wrong choice");       
    }
    printf("Do you want to continue again : \n");
    printf("enter (1) if yes \n or enter (2) if no");
    scanf("%d",&y);

    }while(y==1);

      return 0;
                
    }




      

     