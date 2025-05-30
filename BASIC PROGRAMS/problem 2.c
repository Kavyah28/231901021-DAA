/* question 2: Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Marks in Maths >= 65
Marks in Physics >= 55
Marks in Chemistry >= 50
Or
Total in all three subjects >= 180
Sample Test Cases
Test Case 1
Input
70   60   80
Output
The candidate is eligible
Test Case 2
Input
50   80   80
Output
The candidate is eligible
Test Case 3
Input
50   60   40
Output
The candidate is not eligible */

#include <stdio.h>
int main() {
    int mat, phy, chem;
    scanf("%d %d %d", &mat, &phy, &chem);
    if ((mat >= 65 && phy >= 55 && chem >= 50) || 
        (mat + phy + chem >= 180)) {
        printf("The candidate is eligible\n");
    } else {
        printf("The candidate is not eligible\n");
    }
    return 0;
}

