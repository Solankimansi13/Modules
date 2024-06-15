//17.WAP to show difference between Structure and Union

#include<stdio.h>
// Define Structure
union Structure
{
    int id;        // data member
    char name[20]; // data member
    char result[20];
};

int main()
{
    union Structure obj[5]; // create the object
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your id: ");
        scanf("%d", &obj[i].id);
        printf("Enter your name: ");
        scanf("%s", &obj[i].name);
        printf("Enter student result: ");
        scanf("%s", &obj[i].result);
    }
    printf("\n\n-----------------------Result----------------------------\n");
    printf("\n\nId\tName\tResult\n");

    for (int i = 0; i < 5; i++)
    {

        printf("\n%d\t%s\t%s", obj[i].id, obj[i].name, obj[i].result);
    }
    return 0;
}