#include<stdio.h> 
int main() {
	int max=100;
	int k[100][100];
	int i=0,j=0,m=0,n=0,q=0;
	for (;j<=max;j++) 
	{
		scanf("%d", &k[i][j]);
		if (k[i][j]==-1)
			break;
		if (k[i][j]==0) 
		{
			q = 0;
			for (;n<j;n++)
			for (;m<j;m++) 
			{
				if (k[i][n]==2*k[i][m]) 
				{
					q++;
				}
			}
			printf("%d\n",q);
			i++;
			j=-1;
		}

	}
	return 0;
}
