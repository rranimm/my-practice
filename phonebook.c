#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}person;
int main(void)
{
    person people [3];
    people[0].name = "Ranim";
    people[0].number = "+970-59-999-999";
    people[1].name = "Lara";
    people[1].number = "+970-59-000-999";
    people[2].name = "Ayla";
    people[2].number = "+970-59-999-000";

    string s = get_string("Name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name,s)==0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    return 1;
}
