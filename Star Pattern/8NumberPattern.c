#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j>=i)
            {
                printf("%d",j);   
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}
