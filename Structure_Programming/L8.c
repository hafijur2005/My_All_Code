#include <stdio.h>
struct Academic
{
    long long roll;
    float cgpa;
};
struct Student
{
    int age;
    struct Academic ac;
};

int main()
{
    FILE *file;
    file = fopen("data.txt", "r");
    struct Student x, arr[100];
    int i = 0;
    while (fscanf(file, "%lld%d%f", &x.ac.roll, &x.age, &x.ac.cgpa) != -1)
    {
        arr[i].ac.roll = x.ac.roll;
        arr[i].age = x.age;
        arr[i].ac.cgpa = x.ac.cgpa;
        i++;
    }
    int n=i;
    fclose(file);
    for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j < i; j++)
        {

            if (arr[k].ac.cgpa < arr[j].ac.cgpa)
            {
                struct Student temp;
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
            else if (arr[k].ac.cgpa == arr[j].ac.cgpa && arr[k].age > arr[j].age)
            {
                struct Student temp;
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
            else if (arr[k].ac.cgpa == arr[j].ac.cgpa && arr[k].age == arr[j].age && arr[k].ac.roll < arr[j].ac.roll)
            {
                struct Student temp;
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    file = fopen("data.txt", "a");
    fprintf(file, "\nAfter sorting\n");
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%lld %d %.2f\n", arr[i].ac.roll, arr[i].age, arr[i].ac.cgpa);
    }
    printf("Operation Successful");
    fclose(file);
    return 0;
}