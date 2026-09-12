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

// solution 5
void sortEmployeesBySalary(struct Employee e[]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(e[j].salary > e[j + 1].salary){
                struct Employee temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}
