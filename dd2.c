#include <stdio.h>

// Function to input student details
void input_details(int rollno[], char name[][50], float marks[], int n) {
	int i;
    printf("Enter details of %d students:\n", n);
    for(i = 0; i < n; i++)
   {
        printf("Enter roll no of student %d: ", i+1);
        scanf("%d", &rollno[i]);
        printf("Enter name of student %d: ", i+1);
        scanf("%s", name[i]);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &marks[i]);
    }
}

// Function to display student details
void display_details(int rollno[], char name[][50], float marks[], int n) {
	int i;
    printf("\nStudent details:\n");
    for(i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", rollno[i], name[i], marks[i]);
    }
}

// Function to calculate average marks
float calculate_average(float marks[], int n) {
    float sum = 0;
    int i;
    for(i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum/n;
}

// Function to find student with maximum marks
void find_max_marks(int rollno[], char name[][50], float marks[], int n) {
    float max_marks = 0;
    int max_index = -1,i;
    for(i = 0; i < n; i++) {
        if(marks[i] > max_marks) {
            max_marks = marks[i];
            max_index = i;
        }
    }
    printf("\nStudent with maximum marks:\n");
    printf("Roll No: %d, Name: %s, Marks: %.2f\n", rollno[max_index], name[max_index], marks[max_index]);
}

// Main function
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int rollno[n];
    char name[n][50];
    float marks[n];
    input_details(rollno, name, marks, n);
    display_details(rollno, name, marks, n);
    printf("\nAverage marks: %.2f\n", calculate_average(marks, n));
    find_max_marks(rollno, name, marks, n);
    return 0;
}