#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
