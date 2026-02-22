#include <stdio.h>

int main() {
    int rows,cols,x=-1,y=-1;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < rows; i++) 
    {
        int low = 0, high = cols - 1;
        while (low <= high) 
        {
            int mid = (low + high) / 2;
            if (matrix[i][mid] == 1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        int countOnes = cols - low;
        if (countOnes > y) 
        {
            y = countOnes;
            x = i;
        }
    }

    printf("%d\n", x);
    return 0;
}
