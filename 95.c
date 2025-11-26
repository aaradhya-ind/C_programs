// Q145 (Struct + Function): Return top student from a function
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student students[], int n){
    struct Student top = students[0];
    for(int i=1;i<n;i++){
        if(students[i].marks > top.marks)
            top = students[i];
    }
    return top;
}
int main() {
    struct Student students[5];
    for(int i=0;i<5;i++){
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    struct Student top = getTopStudent(students, 5);
    printf("\nTop Student:\nName: %s\nRoll No: %d\nMarks: %.2f\n",
           top.name, top.roll_no, top.marks);
    return 0;
}
