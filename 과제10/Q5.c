#define _CRT_SECURE_NO_WARNINGS
#define ID_LEN 7
#define NAME_LEN 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    char id[ID_LEN];
    char name[NAME_LEN];
    int salary;
} EMP;

int main() {
    int num;
    printf("Enter the number of employees that you want to insert : ");
    scanf("%d", &num);
    EMP* list = NULL;
    list = (EMP*)malloc(num*sizeof(EMP)); //Dynamic allocation
    // Initialization
    for (int i = 0; i < num; i++) {
        printf("-------------------------------------------------\n");
        printf("Enter Details of Employee-%d\n", i + 1);
        printf("-------------------------------------------------\n");
        printf("Name of Employee : ");
        scanf("%s", list[i].name);

        printf("Employee-id : ");
        scanf("%s", list[i].id);

        printf("Salary : ");
        scanf("%d", &list[i].salary);
    }

    int flag = 1;   //flag to consider ending
    while(flag) {
        printf("--------------------\n");
        printf("      Menu\n");
        printf("--------------------\n");
        printf("1:Search Employee by E-ID\n");
        printf("2:List of All Employee\n");
        printf("3:Display Employee Name whose Salary > 1000\n");
        printf("4:Exit\n");
        int sel;
        printf("Enter Your Chice : ");
        scanf("%d", &sel);
        switch (sel) {
            case 1:
                printf("Enter Employee-Id to be Searched : ");
                char t[7];
                scanf("%s", t);
                printf("-------------------------\n");
                for (int i = 0; i < num; i++) {
                    // to compare target and id
                    if (!strcmp(t, list[i].id)) {
                        printf("ID: %s\n", list[i].id);
                        printf("Name: %s\n", list[i].name);
                        printf("Salary: %d\n", list[i].salary);
                    }
                }
                printf("-------------------------\n");
                break;
            case 2:
                printf("List of All Employees:\n");
                printf("-------------------------------------------\n");
                printf("Emp-Id\tEmp-Name\tSalary\n");
                printf("-------------------------------------------\n");
                for (int i = 0; i < num; i++) {
                    printf("%-6s\t", list[i].id);
                    printf("%-8s\t", list[i].name);
                    printf("%-6d\n", list[i].salary);
                }
                printf("-------------------------------------------\n");
                break;
            case 3:
                printf("Details of Employee Whose Salary > 1000\n");
                printf("----------------------------------------------\n");
                for (int i = 0; i < num; i++) {
                    if (list[i].salary > 1000){
                        printf("Name: %s\n", list[i].name);
                        printf("ID: %s\n", list[i].id);
                        printf("Salary: %d\n", list[i].salary);
                        printf("\n");
                    }
                }
                break;
            case 4:
                free(list);
                flag = 0;
                printf("Bye!");
                break;
        }

    }
    return 0;
}
