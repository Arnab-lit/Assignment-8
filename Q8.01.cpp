#include<stdio.h>
struct cricket
{
	char name[20];
	char team[20];
	float avg;
}player[20];
main()
{
	int n,i;
	printf("Enter the number of players: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter player name : ");
		fflush(stdin);
		gets(player[i].name);
		printf("Enter team name : ");
		gets(player[i].team);
		printf("Enter batting average : ");
		scanf("%f",&player[i].avg);
	}
	printf("\nPLAYER NAME\tTEAM NAME\tBATTING AVERAGE\n");
	for(i=0;i<n;i++)
		printf("%s\t\t%s\t\t%.2f\n",player[i].name,player[i].team,player[i].avg);
}
