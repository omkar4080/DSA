#include <stdio.h>
#include <string.h>


typedef struct {
    int rollno;
    char name[20];
    int marks;
} Student;


void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}


void sortStudentsByMarks(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    
    Student students[10] = {
        {1, "omkar", 85},
        {2, "nikhi", 92},
        {3, "kishor", 78},
        {4, "abhi", 95},
        {5, "amrut", 88},
        {6, "ashay", 76},
        {7, "shubham", 91},
        {8, "akash", 82},
        {9, "sanket", 89},
        {10, "parth", 96}
    };
printf("before the sorted student by marks:\n");
 printf("Roll No.\tName\tMarks\n");
     for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t%d\n", students[i].rollno, students[i].name, students[i].marks); 
    }
    sortStudentsByMarks(students, 10);

    
    printf("Sorted Students by Marks:\n");
    printf("Roll No.\tName\tMarks\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t%d\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
