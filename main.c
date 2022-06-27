//
//  main.c
//  structure project in C.
//
//  Created by Dipta banik on 28/05/22.
//

#include<stdio.h>
#include <string.h>
//structure
struct book
{   int id;
    float price;
    int stock;
    char name[50];
    char author[50];
    char publisher[50];
}b1,b2,b3,b4,b5;
struct student
{
    int roll;
    char name[20];
    char sec[10];
    int mobile;
    
}s1,s2,s3,s4,s5;

int main( )
{
    int n;
    {
    s1.roll=01;
    strcpy(s1.name,"Ross Tailor");
    strcpy(s1.sec," A ");
    s1.mobile = 802425618;
    
    s2.roll=02;
    strcpy(s2.name,"Jos Buttlar");
    strcpy(s2.sec," B ");
    s2.mobile = 802455421;
   
    s3.roll=03;
    strcpy(s3.name,"AB de Villiers");
    strcpy(s3.sec," C ");
    s3.mobile = 802415247;
    
    s4.roll=04;
    strcpy(s4.name,"Chris Gayle");
    strcpy(s4.sec," D ");
    s4.mobile = 802423636;
    
    s5.roll=05;
    strcpy(s5.name,"Devid Wanner");
    strcpy(s5.sec," E ");
    s5.mobile = 802421414;
    }
    //************************************************************************************************
    {
        
     b1.id=110;
    b1.price=217.00;
    b1.stock=03;
    strcpy(b1.name,"Data Stucture");
    strcpy(b1.author,"Lipschute");
    strcpy(b1.publisher,"McGraw");
    
    b2.id=112;
    b2.price=200.00;
    b2.stock=05;
    strcpy(b2.name,"Guide Network");
    strcpy(b2.author,"Freed");
    strcpy(b2.publisher,"Zpress");
    
    b3.id=113;
    b3.price=1430.00;
    b3.stock=06;
    strcpy(b3.name,"The Bible");
    strcpy(b3.author,"Architects Cyberpunk");
    strcpy(b3.publisher,"Createspace Independent Publishing Platform");
    
    b4.id=114;
    b4.price=658.00;
    b4.stock=58;
    strcpy(b4.name,"Core Python");
    strcpy(b4.author,"R. Nageswara Rao");
    strcpy(b4.publisher,"Dreamtech Press");
    
    b5.id=115;
    b5.price=170.20;
    b5.stock=02;
    strcpy(b5.name,"Mastering Hacking");
    strcpy(b5.author,"Harsh Bothra");
    strcpy(b5.publisher,"Khanna Publishers");
    }
    printf("enter student roll : ");
    scanf("%d",&n);
    printf("\n");
    
    if(n==s1.roll)
    {
        printf("Student Roll:%d\nNAME:%s\nSECTION:%s\nMOBILE NO:%d\n\n",s1.roll,s1.name,s1.sec,s1.mobile);
        printf("\t\t\t\t\t\t*********** BOOKS INFORMATION ***********\n");
        printf("\n \t\t\t\t\tBOOK ID-------%d\n \t\t\t\t\tBOOK NAME-----%s\n \t\t\t\t\tAUTHOR---------%s\n \t\t\t\t\tPUBLISHER------%s\n \t\t\t\t\tPRICE-----------%f\n \t\t\t\t\tSTOCK-----------%d\n\n\n ",b5.id,b5.name,b5.author,b5.publisher,b5.price,b5.stock);
    }
    else
    {
        if(n==s2.roll)
        {
            printf("Student Roll:%d\nNAME:%s\nSECTION:%s\nMOBILE NO:%d\n\n",s2.roll,s2.name,s2.sec,s2.mobile);
            
            printf("\t\t\t\t\t\t*********** BOOKS INFORMATION ***********\n\n");
            printf("\n \t\t\t\t\tBOOK ID-------%d\n \t\t\t\t\tBOOK NAME-----%s\n \t\t\t\t\tAUTHOR---------%s\n \t\t\t\t\tPUBLISHER------%s\n \t\t\t\t\tPRICE-----------%f\n \t\t\t\t\tSTOCK-----------%d\n\n\n ",b2.id,b2.name,b2.author,b2.publisher,b2.price,b2.stock);
        }
        else
        {
            if(n==s3.roll)
            {
                printf("Student Roll:%d\nNAME:%s\nSECTION:%s\nMOBILE NO:%d\n\n\n",s3.roll,s3.name,s3.sec,s3.mobile);
                printf("\t\t\t\t\t\t*********** BOOKS INFORMATION ***********\n");
                printf("\n \t\t\t\t\tBOOK ID-------%d\n \t\t\t\t\tBOOK NAME-----%s\n \t\t\t\t\tAUTHOR---------%s\n \t\t\t\t\tPUBLISHER------%s\n \t\t\t\t\tPRICE-----------%f\n \t\t\t\t\tSTOCK-----------%d\n\n\n ",b3.id,b3.name,b3.author,b3.publisher,b3.price,b3.stock);
            }
            else
            
                if(n==s4.roll)
                {
                    printf("Student Roll:%d\nNAME:%s\nSECTION:%s\nMOBILE NO:%d\n\n",s4.roll,s4.name,s4.sec,s4.mobile);
                    printf("\t\t\t\t\t\t*********** BOOKS INFORMATION ***********\n");
                    printf("\n \t\t\t\t\tBOOK ID-------%d\n \t\t\t\t\tBOOK NAME-----%s\n \t\t\t\t\tAUTHOR---------%s\n \t\t\t\t\tPUBLISHER------%s\n \t\t\t\t\tPRICE-----------%f\n \t\t\t\t\tSTOCK-----------%d\n\n\n ",b4.id,b4.name,b4.author,b4.publisher,b4.price,b4.stock);
                }
                else
                {
                    if(n==s5.roll)
                    {
                        printf("Student Roll:%d\nNAME:%s\nSECTION:%s\nMOBILE NO:%d\n\n",s5.roll,s5.name,s5.sec,s5.mobile);
                        printf("\t\t\t\t\t\t*********** BOOKS INFORMATION ***********\n");
                        printf("\n \t\t\t\t\tBOOK ID-------%d\n \t\t\t\t\tBOOK NAME-----%s\n \t\t\t\t\tAUTHOR---------%s\n \t\t\t\t\tPUBLISHER------%s\n \t\t\t\t\tPRICE-----------%f\n \t\t\t\t\tSTOCK-----------%d\n\n\n ",b1.id,b1.name,b1.author,b1.publisher,b1.price,b1.stock);
                    }
                    else
                    {
                        printf("*** (NOT FOUND) ***");
                    }
                }
            }
        }
    
    
    
return 0;
}
