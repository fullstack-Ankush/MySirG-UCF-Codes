#include<stdio.h>
#include<string.h>


void inputEmployee();
int findHighestSalary(struct employee e[],int n);


// solution 1
struct employee{
    int id;
    char name[20];
    float salary;
}emp1;


int main(){
    inputEmployee();
    //solution 3
    printf("%d %s %f ",emp1.id,emp1.name,emp1.salary);


}
//solution 2
void inputEmployee(){
    printf("Enter employee id");
    scanf("%d",&emp1.id);
    printf("Enter employee name");
    fflush(stdin);
    fgets(emp1.name,20,stdin);
    emp1.name[strlen(emp1.name)-1] = '\0';
    printf("Enter employee salary");
    scanf("%f",&emp1.salary);


}

// solution 4
int findHighestSalary(struct employee e[],int n){
    struct employee temp;
    temp = e[0];
    for(int i = 0;i<n;i++){
        if (temp.salary < e[i].salary){
            temp = e[i];
        }
    }
    return temp.salary;
}