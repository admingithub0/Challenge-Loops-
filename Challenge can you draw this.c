#include<stdio.h>
main()
{
	int i,j,r;
	printf("Enter number of rows/stairs :");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=0;j<2*i;j++)
		printf("%d",j%2);
		printf("\n");
	}
	return 0;
}
