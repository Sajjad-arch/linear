#include <stdio.h>
int main(void)

{
    int n,m,i;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the number of elements: ");
    scanf("%d",&m);


    printf("Enter the elements: \n");
    for(i=0; i<m; i++)

    {
        scanf("%d",&a[i]);
    }


    int max=0;
    int min=0;


    for(i=0; i<m; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

       if(a[i]<min)
        {
            min=a[i];

        }
    }

    printf("THE MAX IS %d",max);
         printf("THE MIN IS %d",min);


        return 0;
}
