#include <stdio.h>

int main() {
    int ns;
    printf("Smart Student Result Management\n");
    printf("Enter number of students: ");
    scanf("%d", &ns);

    int n = 1, c;
    float sum = 0, high = 0, low = 9999, pass = 0, fail = 0;

    while (n <= ns) {
        printf("\n--- Student %d ---\n", n);

        float m1, m2, m3;
        printf("Enter marks for Subject 1: ");
        scanf("%f", &m1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &m2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &m3);

        float avg = (m1 + m2 + m3) / 3;
        sum += avg;

        if (avg > high)
            high = avg;
        if (avg < low)
            low = avg;

        if (avg >= 50)
            pass++;
        else
            fail++;

        printf("Student %d Average: %.1f — ", n, avg);

        if (avg >= 90)
            printf("Grade A+\n");
        else if (avg >= 80)
            printf("Grade A\n");
        else if (avg >= 70)
            printf("Grade B\n");
        else if (avg >= 60)
            printf("Grade C\n");
        else if (avg >= 50)
            printf("Grade D\n");
        else
            printf("Fail\n");

        n++;
    }

    do {
        printf("\n======== Menu ========\n");
        printf("1. View All Results\n");
        printf("2. View Class Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        if (c == 1) {
            printf("\nAll results already displayed above.\n");
        } 
        else if (c == 2) {
            float ca = sum / ns;
            printf("\n--- Class Summary ---\n");
            printf("Total Students: %d\n", ns);
            printf("Passed: %.0f\n", pass);
            printf("Failed: %.0f\n", fail);
            printf("Class Average: %.1f\n", ca);
            printf("Highest Average: %.1f\n", high);
            printf("Lowest Average: %.1f\n", low);
        } 
        else if (c == 3) {
            printf("Thank you! Exiting system...\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while (c != 3);

    return 0;
}
