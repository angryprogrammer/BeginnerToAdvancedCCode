#include<stdio.h>

int main()
{
	int i,j,pos,Num,temp,N=8;
	int A[]={10, 13, 12, 18, 32, 16, 30, 15};
	printf("The Array before the operation is:\n");
	for(i=0;i<N;i++)
		printf("%d\t",A[i]);
	printf("\n");
	printf("Enter the Number to partition\n");
	scanf("%d",&Num);
	i=0; j=N-1;
	while(i<j)
	{
		while(A[i]<=Num)i++;
		while(A[j]>Num)j--;
		if(i<j)
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i++; j--;
		}
		//while(A[i]<=Num) i++;
		//while(A[j]>Num) j--;
	}
	pos=j;
	printf("The Array After the operation is:\n");
	for(i=0;i<N;i++)
		printf("%d\t",A[i]);
	printf("\nThe position is %d\n",pos);
	return 0;
}
