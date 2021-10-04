// SUM OF THE ELEMENTS IN THE ARRAY>>>>>>>>>>>>>>>>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d" ,&n);
    //Dynamic memory allocation
    int *ptr = (int *) malloc(n*sizeof(int));
             //printf("\n\n%d" ,sizeof(ptr));......4
    if(ptr==NULL)
    {
        exit(1);
    }
    else{
        int i;
        printf("Enter the elements value: \n");
        for(i=0;i<n;i++)
        {
            scanf("%d" ,&ptr[i]);
        }
        printf("\n========THE ELEMENTS ARE==============\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n" ,ptr[i]);
        }
    }
    return 0;
}