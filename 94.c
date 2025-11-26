// Q144 (Struct + Function): Function that accepts a structure and prints members
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s){
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}
int main() {
    struct Student s;
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nStudent Details:\n");
    printStudent(s);
    return 0;
}
