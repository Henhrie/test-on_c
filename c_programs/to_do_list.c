#include <stdio.h>

#define MAX_TASKS 100

struct Task 
{
    char description[100];

};

int main()
{
    struct Task tasks[MAX_TASKS];
    int taskCount = 0;

    while (1)
    {
       printf("1. Add Task\n");
       printf("2. View Tasks\n");
       printf("3. Exit\n");
       printf("Choose an Option:");

       int choice;
       scanf("%d, &choice");

       switch (choice)
       {
        case 1:
        if (taskCount == MAX_TASKS)
        {
            printf("Task limit reached. More tasks cannot be added.\n");
        }
        else
        {
            printf("Enter task description: ");
            scanf(" %[^\n]", tasks[taskCount].description);
            taskCount++;
            printf("Task added. \n");
        }
        break;
        case 2:
        printf("Tasks: \n");
        for (int i = 0; i < taskCount; i++)
        {
            printf("%d. %s\n", i + 1, tasks[i].description);
        }
        break;
        case 3:
        printf("Exiting program. \n");
        return 0;
        default:
        printf("Invalid choice. Try again. \n");
        break;
       }
    }
    
}
