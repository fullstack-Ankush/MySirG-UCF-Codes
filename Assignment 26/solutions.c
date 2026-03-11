#include <stdio.h>
#include<string.h>
#include<math.h>


struct Employee {
    int ID;
    char name[20];
    int salary;
};

// Pass by pointer so we can modify the actual array element
void Input(struct Employee *e) {
    printf("Enter ID: ");
    scanf("%d", &e->ID);
    printf("\nEnter name: ");
    scanf("%s", e->name);
    printf("\nEnter Salary: ");
    scanf("%d", &e->salary);
}
//4. Show the highest salary among the employees and the name of the employee who has that salary.
struct Employee showHighestSalary(struct Employee e[]){
    struct Employee temp;
    temp= e[0];
    for(int i = 1;i<10;i++){
        if(temp.salary < e[i].salary){
            temp = e[i];
        
        }

    }
    return temp;

}
//5. write a function to sort employees based on their salary in increasing order 
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

//6.write a function to sort emplyoees based ont their name in alphabetical order
void sortEmployeesByName(struct Employee e[]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(strcmp(e[j].name, e[j + 1].name) > 0){
                struct Employee temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}

//7. write a program to calculate the difference between two time periods
struct Time{
    int hr,min,sec;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2){
    struct Time diff;
    int totalSec1 = t1.hr * 3600 + t1.min * 60 + t1.sec;
    int totalSec2 = t2.hr * 3600 + t2.min * 60 + t2.sec;
    int totalDiff = abs(totalSec1 - totalSec2);
    
    diff.hr = totalDiff / 3600;
    diff.min = (totalDiff % 3600) / 60;
    diff.sec = totalDiff % 60;

    return diff;    
}

// 8. 



void showData(struct Employee e) {
    printf("ID: %d | Name: %s | Salary: %d\n", e.ID, e.name, e.salary);
}

int main() {
    struct Employee s[10]; // An array to hold 10 employees

    // // Input loop
    // for(int i = 0; i < 10; i++) {   
    //    Input( &s[i]); 
    // }

    // // Display loop
    // printf("\n--- Employee Records ---\n");
    // for(int i = 0; i < 10; i++) {
    //     showData(s[i]);
    // }
    // struct Employee highestPaid = showHighestSalary(s);
    // printf("\n--- Highest Salary ---\n");
    // showData(highestPaid);
    struct Time t1,t2;  
    struct Time result = calculateTimeDifference((struct Time){2, 30, 45}, (struct Time){1, 15, 30});




    return 0;
}