#include <stdio.h>

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


void showData(struct Employee e) {
    printf("ID: %d | Name: %s | Salary: %d\n", e.ID, e.name, e.salary);
}

int main() {
    struct Employee s[10]; // An array to hold 10 employees

    // Input loop
    for(int i = 0; i < 10; i++) {
       Input( &s[i]); 
    }

    // Display loop
    printf("\n--- Employee Records ---\n");
    for(int i = 0; i < 10; i++) {
        showData(s[i]);
    }
    struct Employee highestPaid = showHighestSalary(s);
    printf("\n--- Highest Salary ---\n");
    showData(highestPaid);
    return 0;
}