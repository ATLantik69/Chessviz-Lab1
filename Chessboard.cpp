/*#include<stdio.h>

int main()
{
	printf("  a b c d e f g h  \n");
	printf("8 E H F Q K F H E 8 \n");
	printf("7 P P P P P P P P 7 \n");
	printf("6                 6 \n");
	printf("5                 5 \n");
	printf("4                 4 \n");
	printf("3                 3 \n");
	printf("2 p p p p p p p p 2 \n");
	printf("1 e h f q k f h e 1 \n");
	printf("  a b c d e f g h  \n");
	return 0;
}
*/
#include<stdlib.h>
#include<stdio.h>

int main()
{	
	int i,j,x;	
	char A[10][10];
	A[0][0]=' '; A[1][0]='a'; A[2][0]='b'; A[3][0]='c'; A[4][0]='d'; A[0][0]='e'; A[0][0]='f'; A[7][0]='g'; A[8][0]='h'; A[9][0]=' ';
	A[0][1]='8'; A[1][1]='E'; A[2][1]='H'; A[3][1]='F'; A[4][1]='Q'; A[5][1]='K'; A[6][1]='F'; A[7][1]='H'; A[8][1]='E'; A[9][1]='8';
	A[0][2]='7'; A[1][2]='P'; A[2][2]='P'; A[3][2]='P'; A[4][2]='P'; A[5][2]='P'; A[6][2]='P'; A[7][2]='P'; A[8][2]='P'; A[9][2]='7';
	A[0][3]='6'; A[1][3]=' '; A[2][3]=' '; A[3][3]=' '; A[4][3]=' '; A[5][3]=' '; A[6][3]=' '; A[7][3]=' '; A[8][3]='6'; A[9][3]='6';
	A[0][4]='5'; A[1][4]=' '; A[2][4]=' '; A[3][4]=' '; A[4][4]=' '; A[5][4]=' '; A[6][4]=' '; A[7][4]=' '; A[8][4]='5'; A[9][4]='5';
	A[0][5]='4'; A[1][5]=' '; A[2][5]=' '; A[3][5]=' '; A[4][5]=' '; A[5][5]=' '; A[6][5]=' '; A[7][5]=' '; A[8][5]='4'; A[9][5]='4';
	A[0][6]='3'; A[1][6]=' '; A[2][6]=' '; A[3][6]=' '; A[4][6]=' '; A[5][6]=' '; A[6][6]=' '; A[7][6]=' '; A[8][6]='3'; A[9][6]='3';
	A[0][7]='2'; A[1][7]='p'; A[2][7]='p'; A[3][7]='p'; A[4][7]='p'; A[5][7]='p'; A[6][7]='p'; A[7][7]='p'; A[8][7]='p'; A[9][7]='2';
	A[0][8]='1'; A[1][8]='e'; A[2][8]='h'; A[3][8]='f'; A[4][8]='q'; A[5][8]='k'; A[6][8]='f'; A[7][8]='h'; A[8][8]='e'; A[9][8]='1';
	A[0][9]=' '; A[1][9]='a'; A[2][9]='b'; A[3][9]='c'; A[4][9]='d'; A[5][9]='e'; A[6][9]='f'; A[7][9]='g'; A[8][9]='h'; A[9][9]=' ';
	
	/*for(i=0; i<=9; i++)
		for(j=0; j<=9; j++)
	{
	printf("\n%c", A[i][j]);
	}*/
	
	for(i=0, j=0, x=0; x<=9; j++)
	{
		printf("%c", A[i][j]);
		if (A[i][9])
		{
			x++;
			i++;
			j=0;
			printf("\n");
		}
	}
}
