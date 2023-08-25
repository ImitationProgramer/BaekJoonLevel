#include <stdio.h>

float get_score(char *grade)
{
    if (grade[0] != 'F')
    {
        if (grade[1] == '+')
            return 'F' - grade[0] - 0.5;
        else if (grade[1] == '0')
            return 'F' - grade[0] - 1;
    }
    return 0;
}
int main()
{
    char subject[51], grade[2];
    float GPA, sum = 0;
    double total = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", subject, &GPA, grade);
        if (grade[0] != 'P')
        {
            sum += GPA;
            total += GPA * get_score(grade);
        }
    }
    printf("%.6f\n", total / sum);
    return 0;
}