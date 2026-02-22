#include <stdio.h>
#include <string.h>
int main()
{
    char pass[100], user[100];
    fgets(user, 100, stdin);
    fgets(pass, 100, stdin);
    FILE *fr;
    fr = fopen("test.txt", "r");
    int i = 0, u = 0, p = 0;
    char us[100][100], ps[100][100];
    char temp[100];
    while (fscanf(fr, "%s", temp) != -1)
    {
        if (i % 2 == 0)
        {
            strcpy(us[u], temp);
            u++;
        }
        else
        {
            strcpy(ps[p], temp);
            p++;
        }
        i++;
    }
    int flag = 0;
    for (int i = 0; i <= u; i++)
    {

        fprintf(fr, "%s\n", us[i]);
    }
    for (int i = 0; i < u; i++)
    {
        //printf("%s-%s %s-%s\n",user,us[i],pass,ps[i]);

        if (strcmp(us[i], user) == 0 && strcmp(ps[i], pass) == 0)
        {
            flag = 1;
            printf("%s %s",us[i],ps[i]);
        }
    }
    fclose(fr);
    if (flag == 1)
        printf("logging ");
    else
        printf(" not logging ");
    return 0;
}