/*
Project Title : Hospital Management.
Project Created By :
Shaikh Manzar <16CO50>
Mulla Shoaib <16CO42>
Pathan Yunus <16CO43>
Project Createn On 20/10/2017.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
float TotalAmount=0;

typedef struct hm{ //declaration of structure
char name[20];
int age;
int priority;
int patientUniqueID;
struct hm *next;
}node;

void CDP(){
FILE *fp;
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone Check's Type Of Disease Healed in Aiktc Hospital\n");
fclose(fp);
printf("\n\n");
printf("Priority\t\tDisease Name\n");
printf("1\t\t\tHeart Attack\n");
printf("2\t\t\tKidney Failure\n");
printf("3\t\t\tBrain Disease\n");
printf("4\t\t\tBone Fracture\n");
printf("5\t\t\tMalaria\n");
printf("6\t\t\tDengue\n");
printf("7\t\t\tTyphoid\n");
printf("8\t\t\tFever\n");
printf("9\t\t\tHead Ache\n");
printf("10\t\t\tStomach Ache\n");
printf("\n\n");
}//cdp end

int fill(){
printf("\n\n");
int choice;
while(1){
printf("\t\tEnter choice\n");
printf("\t\t1.Heart Attack\n");
printf("\t\t2.Kidney Failure\n");
printf("\t\t3.Brain Disease\n");
printf("\t\t4.Bone Fracture\n");
printf("\t\t5.Malaria\n");
printf("\t\t6.Dengue\n");
printf("\t\t7.Typhoid\n");
printf("\t\t8.Fever\n");
printf("\t\t9.Head Ache\n");
printf("\t\t10.Stomach Ache\n");
scanf("%d",&choice);
printf("\n\n");
if(choice>10)

printf("\t\twrong input...please enter again\n");
else
return choice;
}
}//fill end

void display(node *head){
FILE *fp;
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone Check's All Patient Detail\n");
fclose(fp);
printf("\n\n");
node *p;
int x;
printf("UNIQUE ID\tNAME\tAGE\tDISEASE\n");
for(p=head;p!=NULL;p=p->next){
printf("%d\t\t",p->patientUniqueID);
printf("%s\t",p->name);
printf("%d\t",p->age);
x=p->priority;
switch(x){
case 1:printf("Heart Attack\t");
break;
case 2:printf("Kidney Failure\t");
break;
case 3:printf("Brain Disease\t");
break;

case 4:printf("Bone Fracture\t");
break;
case 5:printf("Malaria\t");
break;
case 6:printf("Dengue\t");
break;
case 7:printf("Typhoid\t");
break;
case 8:printf("Fever\t");
break;
case 9:printf("Head Ache\t");
break;
case 10:printf("Stomach Ache\t");
break;
}
printf("\n");
}
printf("\n\n");
}//diplay end here

node *AddPatient(node *head){
char disease[15];
FILE *fp;
fp=fopen("Data.txt","a");
printf("\n\n");
node *p,*temp;
p=(node*)malloc(sizeof(node));
int x,y,num;
temp=head;
p->next=NULL;
if(temp==NULL){
fprintf(fp,"New Day\n\tUniqueID\tName\tAge\tDisease\n\n");
fclose(fp);
}
while(1){
printf("ENTER TODAYS DATE AND MONTH....UNIQUE NO WILL
GENERATE AUTOMATICALLY\n");
scanf("%d",&num);
if(num/10000==0)
break;
else
printf("WRONG FORMAT...Please Enter Again\n");
}
printf("ENTER PATIENT NAME\n");
scanf("%s",p->name);
printf("ENTER PATIENT AGE\n");
scanf("%d",&x);

num=(num*100)+x;
p->patientUniqueID=num;
p->age=x;
printf("ENTER CHOICE (WITH HIGHEST PRIORITY ON TOP AND
LOWEST ON BOTTOM)\n");
y=fill();
p->priority=y;
switch(y){
case 1:fp=fopen("Data.txt","a");
fprintf(fp,"\n\t%d\t\t%s\t%d\tHeart Attack..........Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 2:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tKidney Failure........Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 3:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tBrain Disease.........Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 4:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tBone Fracture.........Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 5:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tMalaria...............Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 6:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tDengue................Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 7:fp=fopen("Data.txt","a");

fprintf(fp,"%d\t\t%s\t%d\tTyphoid...................Added\n\t",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 8:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tFever.................Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;

case 9:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tHead Ache.............Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;
case 10:fp=fopen("Data.txt","a");

fprintf(fp,"\n\t%d\t\t%s\t%d\tStomach Ache..........Added\n",p-
>patientUniqueID,p->name,p->age);
fclose(fp);
break;

}
printf("\n\n");
if(head==NULL || y<head->priority){
p->next=head;
head=p;
return head;
}
else{
while(temp->next!=NULL && y>temp->next->priority)
temp=temp->next;
p->next=temp->next;
temp->next=p;

}
return head;
}

int NoOfPatient(node *head){
FILE *fp;
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone Check's Number Of Patient Present In Aiktc Hospital\n");
fclose(fp);
printf("\n\n");
node *p;
int x=0;
for(p=head;p!=NULL;p=p->next){
x++;
}
printf("\n\n");
return x;
}

void FirstTen(node *head){
FILE *fp;
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone Check's First 10 Series Patient in Aiktc Hospital\n");
fclose(fp);

printf("\n\n");
node *p;
int i,x;
for(p=head;p!=NULL;p=p->next){
printf("%d\t\t",p->patientUniqueID);
printf("%s\t",p->name);
printf("%d\t",p->age);
x=p->priority;
switch(x){
case 1:printf("Heart Attack\t");
break;
case 2:printf("Kidney Failure\t");
break;
case 3:printf("Brain Disease\t");
break;
case 4:printf("Bone Fracture\t");
break;
case 5:printf("Malaria\t");
break;
case 6:printf("Dengue\t");
break;
case 7:printf("Typhoid\t");
break;
case 8:printf("Fever\t");
break;
case 9:printf("Head Ache\t");
break;
case 10:printf("Stomach Ache\t");
break;
}
printf("\n");

i++;
if(i>10)
break;
}
printf("\n\n");
}

int AmountPaid(int no){
printf("\n\n");
switch(no){
case 1:printf("Your Amount for Heart Attack is 69000/-\n");
return(69000);
case 2:printf("Your Amount for Kidney Failure is 52000/-\n");
return(52000);
case 3:printf("Your Amount for Brain Disease is 48000/-\n");
return(48000);

case 4:printf("Your Amount for Bone Fracture is 39000/-\n");
return(39000);
case 5:printf("Your Amount for Malaria is 30000/-\n");
return(30000);
case 6:printf("Your Amount for Dengue is 26000/-\n");
return(26000);
case 7:printf("Your Amount for Typhoid is 18000/-\n");
return(18000);
case 8:printf("Your Amount for Fever is 12000/-\n");
return(12000);
case 9:printf("Your Amount for Head Ache is 3000/-\n");
return(3000);
case 10:printf("Your Amount for Stomach Ache is 1000/-\n");
return(1000);
}
}

node *DischargeHighestPriority(node *head){
FILE *fp;
printf("\n\n");
node *p;
int no,conf,x;
float tax,sum;
int opt;
p=head;
printf("Discharged Patient is\n");
printf("%d\t\t",p->patientUniqueID);
printf("%s\t",p->name);
printf("%d\t",p->age);
x=p->priority;
switch(x){
case 1:printf("Heart Attack\t");
break;
case 2:printf("Kidney Failure\t");
break;
case 3:printf("Brain Disease\t");
break;
case 4:printf("Bone Fracture\t");
break;
case 5:printf("Malaria\t");
break;
case 6:printf("Dengue\t");
break;
case 7:printf("Typhoid\t");
break;
case 8:printf("Fever\t");
break;

case 9:printf("Head Ache\t");
break;
case 10:printf("Stomach Ache\t");
break;
}
printf("\n");
no=AmountPaid(x);
printf("\n\n");
tax=no*18/100;
sum=no+tax;
printf("Your Total Amount is %d + %.2f(18 percent G.S.T) = %.2f\n",no,tax,sum);
printf("Do You Want To pay %.2f\n1 for yes and 0 for no\n",sum);
scanf("%d",&opt);
if(opt==1){
printf("Enter Patient Unique ID\n");
while(1){
scanf("%d",&conf);
if(conf==p->patientUniqueID){
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tUniqueID(%d) Named %s Has Been Discharged with Amount
%f Paid Sucessfully\n\n",p->patientUniqueID,p->name,sum);
fclose(fp);
printf("Payment Successfull\n");
TotalAmount=TotalAmount+sum;
head=head->next;
free(p);
return head;
}
else{
printf("Unique ID not match.....Enter Again\n");
}
}
}
else{
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone Tried To Discharge %s With UniqueID:%d....But
DisCharge Uncessfull\n\t",p->name,p->patientUniqueID);
fclose(fp);
printf("Patient will Not Discharge Until Cash Paid\n");
return head;
}
}

void MyAdmin(){
FILE *fp;
int i=0;

char ch;
char password[10],recovery[8]={'A','i','k','t','c','H','o','s'};
printf("Enter your password. Hit ENTER to confirm.\n");
printf("Password:");
while(1){
scanf("%s",password);
if(strlen(password)==8){ //Staff Must Enter "AiktcHos" (case sensitive)
break;
}
else{
printf("Password must contain 8 character....Enter Again\n");
i=0;
}
}
for(i=0;i<8;i++){
if(password[i]!=recovery[i])
break;
}
i--;
if(i==7){
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tOne Staff Member has Visited Admin....And Total Amount
Collected Was %f\n\n",TotalAmount);
fclose(fp);
printf("Welcome to Admin Page\n");
printf("Todays Total Collection is %.2f",TotalAmount);
printf("\n\n");
}
else{
fp=fopen("Data.txt","a");
fprintf(fp,"\n\tSomeone's Enter Wrong Password In Admin\n");
fclose(fp);
printf("Password is Incorrect...Bye..Bye.....No Hospital Is Not A Place For Thief\n");
printf("\n\n");
}
}

int main(){
int choice,no,count=0,firstchoice;
node *head;
head=NULL;
printf("\t\t\t*****WELCOME TO AIKTC HOSPITAL*****\n");
while(1){
printf("1.Hospital staff\n2.Patient Family\n3.exit\n");
scanf("%d",&firstchoice);
switch(firstchoice){
case 1:MyAdmin();

break;
case 2:while(1){
printf("\t\tEnter Choice\n");
printf("1.Type Of Disease Healed Over Here With Priority\n2.Add
Patient\n3.Number Of Patient Present In Hospital\n4.Check Patient Detail\n5.Serious
Patients \n6.Discharge Patient who has Highest Priority\n7.Take Control FLow To
Staff Member\n8.Exit\n");
printf("INPUT->::");
scanf("%d",&choice);
switch(choice){
case 1:CDP();
break;
case 2:
if(count<=max){
head=AddPatient(head);
count++;
}
else
printf("No More Beds Available.....Maximum Number of Patient In
Hospital Is %d\n",max);
break;
case 3:no=NoOfPatient(head);
printf("NO OF PATIENT PRESENT IN HOSPITAL IS %d\n",no);
break;
case 4:display(head);
break;
case 5:if(count>9){
printf("Here Are The 10 Patient\n");
FirstTen(head);
}
else{
printf("There are Only %d patient present in Hospital...Come Again
When Hospital Got Some Popularity\n",count);
}
break;
case 6:head=DischargeHighestPriority(head);
count--;
break;
case 7:MyAdmin();
case 8:exit(0);
}
}
case 3:exit(0);
}
}
}
