#include <stdio.h>
#include<string.h>

int main()
{
    char team_name[50];

    printf("Enter team name: ");
    scanf("%s", team_name);

    strupr(team_name);

    if(strcmp(team_name, "PIRATES")==0)
        printf("Home run!");
    else
        if (strcmp(team_name, "STEELERS")==0)
            printf("Touchdown!");
              else
                printf("You lose!");

return 0;

}
