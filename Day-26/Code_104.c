// Write a program to Create quiz application.

#include<stdio.h>
void quiz()
{
    int answer,score=0;
    printf("Question 1 : What is the capital of India. \n");
    printf("1. New delhi \t 2. Mumbai \n 3. Chennai \t 4. Kolkata \n");
    printf("Enter your answer : ");
    scanf("%d",&answer);
    if(answer==1)
        {
            printf("Correct answer \n");
            score++;
        }
    
    printf("Question 2 : What is the capital of France. \n");
    printf("1. Lyon \t 2. Marseille \n 3. Paris \t 4. Toulouse \n");
    printf("Enter your answer : ");
    scanf("%d",&answer);
    if(answer==3)
        {
            printf("Correct answer \n");
            score++;
        }
    
    printf("Question 3 : What is the capital of Australia. \n");
    printf("1. Perth \t 2. Melbourne \n 3. Sydney \t 4. Canberra \n");
    printf("Enter your answer : ");
    scanf("%d",&answer);
    if(answer==4)
        {
            printf("Correct answer \n");
            score++;
        }

    printf("Question 4 : What is the capital of England. \n");
    printf("1. Manchester \t 2. London \n 3. Birmingham \t 4. Liverpool \n");
    printf("Enter your answer : ");
    scanf("%d",&answer);
    if(answer==2)
        {
            printf("Correct answer \n");
            score++;
        }

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/4\n", score);
}

int main() 
    {
    int choice;
    do 
    {
        printf("\n ===== QUIZ APPLICATION ===== \n");
        printf("1. Start Quiz \n");
        printf("2. Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch (choice) 
        {
            case 1:
                quiz();
                break;

            case 2:
                printf("Thank you for playing! \n");
                break;

            default:
                printf("Invalid Choice! \n");
        }

    } 
    while (choice != 2);

    return 0;
}
    