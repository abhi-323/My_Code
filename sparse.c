#include<stdio.h>
#define srow 50
#define mrow 20
#define mcolumn 20

int main()
{
	int A[mrow][mcolumn],B[srow][30];
	int i,j,nzero=0,mr,mc,sr,s;


	printf("Enter number of rows : ");
	scanf("%d",&mr);
	printf("Enter number of columns : ");
	scanf("%d",&mc);

	for(i=0;i<mr;i++)
		for(j=0;j<mc;j++)
		{
		
			printf("Enter element for row %d,column %d : ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}

    printf("Entered matrix is : \n");
	
    for(i=0;i<mr;i++)
	{
		for(j=0;j<mc;j++)
		{
			printf("%6d",A[i][j]);
			if(A[i][j]!=0)
				nzero++;
		}
	printf("\n");
	}

	sr=nzero+1;
	B[0][0]=mr;
	B[0][1]=mc;
	B[0][2]=nzero;
	s=1;

	for(i=0;i<mr;i++)
		for(j=0;j<mc;j++)
		{
			if(A[i][j]!=0)
			{
				B[s][0]=i+1;
				B[s][1]=j+1;
				B[s][2]=A[i][j];
				s++;
			}
	}


	printf("Sparse matrix is :\n");
	for(i=0;i<sr;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",B[i][j]);
		printf("\n");
	}
}
