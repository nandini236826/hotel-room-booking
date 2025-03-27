// Online C compiler to run C program online
#include <stdio.h>
int Amount(int day){
    int am=1000*day;
    return am;
}
float GST(int am){
    float gst=am*0.18;
    return gst;
}

int main() {
    char name[20];
    int age,day,amount,op;
    long pno;
    float gst,total;
    printf("Hello, Welcome to abc room booking service!\n");
    printf("Enter your name:");
    scanf("%s",&name);
    printf("%s please enter your detals:\n",name);
    printf("age:");
    scanf("%d",&age);
    printf("mobile no.:");
    scanf("%ld",&pno);
    if(age<18){
        printf("SORRY! you are not permitted to book a room.");
    }
    else{
    printf("please select an option:\n 1.book a room\n 2.Check Room Availability\n");
    scanf("%d",&op);
    if(op==1){
    printf("enter no of days you need the room:");
    scanf("%d",&day);
    printf("BILL\n");
        amount=Amount(day);
        printf("amount:%d\n",amount);
        gst=GST(amount);
        printf("gst:%f\n",gst);
        total=amount+gst;
        printf("Total bill:%f\n",total);
        printf("**** Thanks for booking a room. ****");
    }
    else{
        printf("LUXURY WITH AIR CONDITIONING ROOM\n LUXURY WITHOUT AIR CONDITION ROOM\n FIRST CLASS ROOM\n SECOND CLASS ");
    }
    }
    
}
