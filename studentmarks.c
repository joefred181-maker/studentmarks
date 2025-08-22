#include <stdio.h>

// Function to input marks for students
void inputMarks(int marks[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to calculate the average mark
float calculateAverage(int marks[], int numStudents) {
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    return (float)sum / numStudents;
}

// Function to find the highest mark
int findHighest(int marks[], int numStudents) {
    int highest = marks[0];
    for (int i = 1; i < numStudents; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

// Function to find the lowest mark
int findLowest(int marks[], int numStudents) {
    int lowest = marks[0];
    for (int i = 1; i < numStudents; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

// Function to display all marks
void displayMarks(int marks[], int numStudents) {
    printf("Marks entered: ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
}

int main() {
    int numStudents;
    int repeat = 1;

    while (repeat) {
        printf("Enter number of students: ");
        scanf("%d", &numStudents);

        int marks[numStudents];

        inputMarks(marks, numStudents);

        displayMarks(marks, numStudents);

        float average = calculateAverage(marks, numStudents);
        printf("Average mark: %.2f\n", average);

        int highest = findHighest(marks, numStudents);
        printf("Highest mark: %d\n", highest);

        int lowest = findLowest(marks, numStudents);
        printf("Lowest mark: %d\n", lowest);

        printf("Do you want to repeat for another class? (1 for yes, 0 for no): ");
        scanf("%d", &repeat);
    }

    return 0;
}
