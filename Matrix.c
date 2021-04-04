#include<stdio.h>
int main (){


        int A  [2] [3], B [2] [3],row,col;

        printf("\n Enter A matrix = " );

          // input for A matrix
        for(row=0; row<2; row++)
        {
            for(col=0; col<3; col++)
            {
                printf(" \n A[%d][%d] = ",row,col);
               scanf("%d",&A[row][col]);
            }
        }


         printf("\n Enter B matrix = " );

          // input for B matrix
        for(row=0; row<2; row++)
        {
            for(col=0; col<3; col++)
            {
                printf(" \n B[%d][%d]  =",row,col);
               scanf("%d",&B[row][col]);
            }
        }

         printf(" \n  A  = " );

          // printf A matrix
        for(row=0; row<2; row++)
        {
            for(col=0; col<3; col++)
            {
               printf("%d ",A[row][col]);

            }
            printf("\n  \n       ");
        }


         // printf B matrix
         printf("\n B = ");
        for(row=0; row<2; row++)
        {
            for(col=0; col<3; col++)
            {
               printf("%d ",B[row][col]);

            }
            printf("\n \n     ");
        }

        // Now i will do sum A and B Matrix

          printf("\n A+b = ");
        for(row=0; row<2; row++)
        {
            for(col=0; col<3; col++)
            {
               printf("%d ",(A[row][col]+B[row][col]));

            }
            printf("\n \n       ");
        }



    return 0;

}
