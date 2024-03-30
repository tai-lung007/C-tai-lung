#include <stdio.h>

// Define the structure for time
struct time {
    int hr;
    int min;
    int sec;
};

// Define the structure for date
struct date {
    int day;
    int month;
    int year;
    struct time t;
};

// Define the structure for student
struct student {
    char name[20];
    struct date dob;
};

int main() {
    // Declare a variable of type student
    struct student stu1;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", stu1.name);

    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &stu1.dob.day, &stu1.dob.month, &stu1.dob.year);

    printf("Enter time of birth (HH MM SS): ");
    scanf("%d %d %d", &stu1.dob.t.hr, &stu1.dob.t.min, &stu1.dob.t.sec);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", stu1.name);
    printf("Date of Birth: %02d-%02d-%04d\n", stu1.dob.day, stu1.dob.month, stu1.dob.year);
    printf("Time of Birth: %02d:%02d:%02d\n", stu1.dob.t.hr, stu1.dob.t.min, stu1.dob.t.sec);

    return 0;
}

