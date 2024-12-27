/ * * * Student Grade Management * * * /
#include <stdio.h>
int main() 
{
    int num_subjects, i;
    char grade;
    float total_credit_score = 0.0;
    float sum=0;
    float credit[10];  
    int grade_points;
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);
    for (i = 0; i < num_subjects; i++) 
    {
        printf("\nEnter grade for subject %d (S, A, B, C, D): ", i + 1);
        scanf(" %c", &grade); 
        printf("Enter the credit hours for subject %d: ", i + 1);
        scanf("%f", &credit[i]);
        switch (grade) 
        {
            case 'S':
                grade_points = 10;
                break;
            case 'A':
                grade_points = 9;
                break;
            case 'B':
                grade_points = 8;
                break;
            case 'C':
                grade_points = 7;
                break;
            case 'D':
                grade_points = 6;
                break;
            default:
                printf("Invalid grade entered! Please enter a grade from S to D.\n");
                grade_points = 0; 
        }
        sum += credit[i]; 
        total_credit_score += (grade_points * credit[i]); 
    }
    if (sum > 0) 
    {
        total_credit_score /= sum;
    }
    printf("\nTotal Credit Score: %.2f\n", total_credit_score);
    return 0;
}
