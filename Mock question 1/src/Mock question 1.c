#include<stdio.h>

int main(void){
    int i,j,n=5,m=5,ar1[10],ar2[10],ar3[10],temp, o=m+n;


    printf("Enter the values of array 1");
    for(i=0; i<n; i++){
        scanf("%d ", &ar1[i]);
    }

    printf("Enter the values of array 2");
    for ( i = 0; i < m ; i++)
    {
        scanf("%d ", &ar2[i]);
    }


    // to sort array1
    for(i = 0 ; i < n ; i++){
        for ( j = 0; j < n; j++)
        {
            if(ar1[i]<ar1[j]){
                temp = ar1[i];
                ar1[i] = ar2[j];
                ar2[j] = temp;
            }else{
                printf(" ");
            }
        }

    }

    //to sort array 2

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(ar2[i]<ar2[j]){
                temp = ar2[i];
                ar2[i] = ar2[j];
                ar2[j] = temp;
            }else{
                printf(" ");
            }
        }

    }

    printf("Values after merging");

    for(i=0; i< n; i++){
        ar3[i]=ar1[i];
    }

    for ( i = 0; i < o; i++)
    {
        ar3[n+i]= ar2[i];
    }

    for ( i = 0; i < o; i++)
    {
        printf("%d ", ar3[i]);
    }



    return 0;

}


