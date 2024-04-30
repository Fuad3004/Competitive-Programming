#include <stdio.h>

int main() {
    float N1, N2, N3, N4, average, exam_score, final_average;

    // Read the scores
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Calculate the weighted average
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    // Print the initial message with the average
    printf("Media: %.1f\n", average);

    // Check if student needs to take an exam
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        // Read the exam score
        scanf("%f", &exam_score);
        // Calculate the final average
        final_average = (average + exam_score) / 2;
        // Print the exam score
        printf("Nota do exame: %.1f\n", exam_score);
        // Print final result
        if (final_average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        // Print the final average
        printf("Media final: %.1f\n", final_average);
    }

    return 0;
}