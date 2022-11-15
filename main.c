#include<stdio.h>
void main() {
    int worklength;
    char employed;
    printf("Are you employed y/n?");
    scanf("%c", &employed);
    printf(" What is your worklength?");
    scanf("%d", &worklength);

    if (employed = "y" && worklength >= "5") {
        printf("Your credit card application is accepted");
    } else if (employed = "y") {
        printf("Please provide a guarantor");
    } else if (worklength < "5") {
        printf("Please provide a guarantor");
    } else if (employed = "n" && worklength >= "0") {
        printf("Your credit card application is rejected");
    } else
        printf("Try again");
}
