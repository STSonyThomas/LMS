#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library{
    char author[50];
    char bookName[50];
    int pages;
    float price;

};
struct student{
    char st_name[30];
    int id;
    char book[100];
};

int main(){
    printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t        ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
    printf("\n\t\t        ~                 WELCOME                   ~");
    printf("\n\t\t        ~                   TO                      ~");
    printf("\n\t\t        ~                 LIBRARY                   ~");
    printf("\n\t\t        ~               MANAGEMENT                  ~");
    printf("\n\t\t        ~                 SYSTEM                    ~");
    printf("\n\t\t        ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
    printf("\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    struct library l[100];
    struct student s[100];
    char ath_name[50];
    char bk_name[50];
    char std[50];
    int i,j,k,count=0,num=0;
    i=j=count;
    k=num;
    //add admin portal
    while(j!=8){
        printf("To add new books enter 1\n");
        printf("To get all books details enter 2\n");
        printf("To get books by specific author enter 3\n");
        printf("To get details of specific book  enter 4\n");
        printf("To get total number of books enter 5\n");
        printf("To checkout a book enter 6");
        printf("To add a new student enter 7");
        printf("To exit enter 8\n");
        scanf("%d",&j);
        switch(j){
            //to add book
            case 1:
            printf("Enter book name = ");
            scanf("%s",l[i].bookName);
            printf("ENter author name");
            scanf("%s",l[i].author);
            printf("Enter number of pages");
            scanf("%d",&l[i].pages);
            printf("Enter price");
            scanf("%f",&l[i].price);
            count++;
            break;
            //to get all details of all books
            case 2:
            for(i=0;i<count;i++){
                printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                printf("****************************************");

            }
            if(count==0){
                printf("ERROR PIDICHU MONE!!!!");
            }
            break;
            //to search details with author
            case 3:
            printf("Enter name of author = ");
            scanf("%s",ath_name);
            for(i=0;i<count;i++){
                if (strcmp(ath_name,l[i].author)==0){
                    printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                }
            }
            if(count==0){
                printf("ERROR PIDICHU MONE!!!!");
            }
            break;
            //to find book details with book name
            case 4:
            printf("ENter name of book");
            scanf("%s",bk_name);
            for(i=0;i<count;i++){
                if(strcmp(bk_name,l[i].bookName)==0){
                    printf("%s\t %s\t %d\t %f\t",l[i].author,l[i].bookName,l[i].pages,l[i].price);
                }
            }
            if(count==0){
                printf("ERROR ADICHU MONE!!");
            }
            break;
            //to find total number of books
            case 5:
            printf("THe total number of books are:%d\n",count);
            break;
            //to checkout a book
            case 6:
            printf("Enter name of student = ");
            scanf("%s",std);
            for(int k=0;k<num;k++){
                if(strcmp(std,s[k].st_name)==0){
                    printf("Enter book name = ");
                    scanf("%s",s[k].book);
                    printf("\n");
                    printf("Enjoy your book!");
                }
            }
            if(num==0){
                printf("ERROR ADICHU MONE!!!!");
            }
            break;
            //to add a new student
            case 7:
            printf("Enter name of new student = ");
            scanf("%s",s[k].st_name);
            s[k].id=100+k;
            printf("Unique ID for student generated = %d\n",s[k].id);
            break;
            //to exit the process and all data will be lost
            case 8:
            exit(0);

        

        }
        
    }
    /*IVIDETHOTT THAZHE ULLATH ONNUM NOOKANDA NJAN UNIQUE CODE VECH ENTHENKILUM CHEYYAN PATUMO ENN NOIYATHA :)
    int studentNumber;
    char action,studentName[studentNumber];
    int database[studentNumber][4];
    printf("Enter number of Young Readers today");
    scanf("%d",&studentNumber);
    for(int i=0;i<studentNumber;i++){
        printf("Enter name of student no %d = ",i+1);
        scanf("%s",&studentName[i]);
        printf("\n");
        database[i][1]=100+i;
        printf("Unique code for student generated! = %d",database[i][1]);
        printf("\n");
        printf("Data entered. Thank You!");
        printf("\n");
        system("clear");
    }
    //for adding new student and other functions
    printf("Would you like to exit(e),CheckOut(o)");
        scanf("%c",&action);
    do{
        if (action=='o'){
            int readyCheck;
            printf("Enter number of Readers ready for checkout");
            scanf("%d",readyCheck);
            //segmentation error
            for(int j=1;j<=readyCheck;j++){
                char name[20];
                int index;
                printf("Enter name of checkoutee");
                scanf("%s",&name);
                //to find the index of the checkoutee
                for(int k=0;k<studentNumber;k++){
                    if(studentName[k]==name){
                        index=k;

                    }
                }
                //the code prompts for checking out
                printf("Enter name code of book taken = ");
                scanf("%d",&database[index][2]);
                printf("\n)");
                printf("Enter date of issue = ");
                scanf("%d",&database[index][3]);
                printf("\n)");
                printf("Enter date of return = ");
                scanf("%d",&database[index][4]);
                printf("\n)");
            }
        
        
        }
        else{
            printf("exiting....");
        }
        printf("Would you like to exit(e),CheckOut(o)");
        scanf("%c",&action);
    }while(action!='e');*/
    
    return 0;
}
