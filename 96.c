// Q146 (Struct + Nested Struct): Employee with joining date
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};
int main() {
    struct Employee e;
    printf("Enter employee name: ");
    scanf(" %[^\n]", e.name);
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);
    printf("\nEmployee Details:\nName: %s\nID: %d\nJoining Date: %02d-%02d-%04d\n",
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
    return 0;
}
