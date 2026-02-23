#include<stdio.h>
// 1. Define a structure Employee
struct Employee{
    int ID;
    char name[20];
    int salary;

}s1;

//2.A fnx to take input employee data from user
void Input(){
    printf("Enter your ID : ");
    scanf("%d",&s1.ID);
    printf("Enter name : ");
    scanf("%s",&s1.name);
    printf("Enter Salary : ");
    scanf("%d",&s1.salary);
}

//3. A fnx to show data of a employee
void showData(struct Employee obj){
    printf("%d %s %d",obj.ID,obj.name,obj.salary);
}

int main(){
    Input();
    showData(s1);
    


}