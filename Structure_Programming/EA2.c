#include <stdio.h>

struct Academic
{
    int roll;
    float cgpa;
};
struct Student
{
    int age;
    struct Academic ac;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Student arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].ac.roll);
        scanf("%f", &arr[i].ac.cgpa);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].ac.cgpa < arr[j].ac.cgpa)
            {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            else if (arr[i].ac.cgpa == arr[j].ac.cgpa && arr[i].age < arr[j].age)
            {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            else if (arr[i].ac.cgpa == arr[j].ac.cgpa && arr[i].age == arr[j].age && arr[i].ac.roll > arr[j].ac.roll)
            {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %.2f\n", arr[i].age, arr[i].ac.roll, arr[i].ac.cgpa);
    }
    return 0;
}