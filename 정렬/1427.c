#include <stdio.h>
#include <math.h>
int main()
{
    int N, arr[11];
    scanf("%d", &N);
    int count = 0;
    do
    {
        arr[count] = N % 10;
        N /= 10;
        count++;

    } while (N > 0);
    int temp = arr[0];
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += arr[i] * pow(10, count - i - 1);
    printf("%d", sum);
    return 0;
}