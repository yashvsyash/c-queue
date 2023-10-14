#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 10
void dqinsert_front();
void dqinsert_rear();
int dqdel_front();
int dqdel_rear();
void traverse();
int dq[MAXSIZE],item,i;
int front=-1,rear=-1;
void main()
{
int ch    ;
char choice;
clrscr();
do{
    printf("\n\t\t 1-INSERTION from Front");
    printf("\n\t\t 2-INSERTION from Rear");
    printf("\nENTER YOUR CHOICE")
    scanf("%d",&ch);
    switch(ch);
    {
    case 1:
       dqinsert_front();
        break;
    case 2:
        dqinsert_rear();
        break;
    case 3:
        i=dqdel_front();
        printf("DELETED VALUE IS %d",i);
        break;
    case 4:
         i=dqdel_rear();
        printf("DELETED VALUE IS %d",i);
        break;
    case 5:
        traverse();
        break;
    default:
        printf("INVALID CHOICE");
    }
 printf("DO YOU WANT TO CONTINUE?");
 fflush(stdin);
 scanf("%c",&choice);
}while(choice=="Y"||choice=="y");
}
void dqinsert_front(){
    if(front==0&&rear==MAXSIZE-1)
    {
        printf("\n DQ IS FULL");
        getch();
        exit(0);
    }
    else:
    {
        printf("ENTER A VALUUE");
        scanf("%d",&item);
        if(front==-1)
        {front=rear=0;
        dq[front]=item;
        }
        else if(front==0&& rear!=MAXSIZE-1)
        {
            for(i=rear;i>=front;i--)
            {
                dq[i+1]=dq[i];
            }
            dq[front]
        }
    }
}