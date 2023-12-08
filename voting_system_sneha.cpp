#include<stdio.h>
#include<conio.h>
int main()
{
	char gender,vote; char name[100]; int age,tv; int PartyA=0,PartyB=0,PartyC=0,PartyD=0; int exit;
	printf("WELCOME TO THE VOTING SYSTEM\nEnter total number of voters: ");
	scanf("%d",&tv);
	if(tv>1)
	{
		for(int i=1;i<=tv;i++)
		{
			printf("\nEnter your gender(M/F/O): ");
			scanf(" %c",&gender);
			if(gender=='M'||gender=='m')
			{
				printf("Hello sir.");
			}
			else if(gender=='F'||gender=='f')
			{
				printf("Hello mam.");
			}
			else if(gender=='O'||gender=='o')
			{
				printf("Hello there.");
			}
			else
			{
				if(i<tv)
				{
					printf("Wrong gender input. Let other candidates vote!");
				}
				else
				{
					printf("Wrong gender input");
				}
			continue;
			}
			printf(" Please enter your name: ");
			scanf(" %s",&name);
			if(gender=='M'||gender=='m')
			{
				printf("Mr. %s, please enter your age: ",name);
			}
			else if(gender=='F'||gender=='f')
			{
				printf("Miss %s, please enter your age: ",name);
			}
			else if(gender=='O'||gender=='o')
			{
				printf("Dear %s, please enter your age: ",name);
			}
			scanf(" %d",&age);
			if(age>=18)
			{
				printf("You are eligible to vote*\nVoting instructions:\n If you want to vote for Party A: Enter A\n If you want to vote for Party B: Enter B\n If you want to vote for Party C: Enter C\n If you want to vote for Party D: Enter D		");
				scanf(" %c",&vote);
				if(vote=='A'||vote=='a')
				{
					PartyA++;
					printf("Thanks for voting.");
				}
				else if(vote=='B'||vote=='b')
				{
					PartyB++;
					printf("Thanks for voting.");
				}
				else if(vote=='C'||vote=='c')
				{
					PartyC++;
					printf("Thanks for voting.");
				}
				else if(vote=='D'||vote=='d')
				{
					PartyD++;
					printf("Thanks for voting.");
				}
				else
				{
					if(i<tv)
					{
						printf("Wrong voting input. Let other candidates vote!");
					}
					else
					{
						printf("Wrong voting input");
					}
				continue;
				}	
			}
			else
			{
				if(i<tv)
				{
					printf("You are underage that is why can not vote. Let other candidates vote!");
				}
				else
				{
					printf("You are underage that is why can not vote.");
				}
			continue;
			}
			printf("if you want to exit then press 0,else press 1");
		    scanf("%d",&exit);
		    if(exit==0)
		    {
		        break;
		    }
		    
		}
	}
	else if(tv==1)
	{
		printf("Enter your gender(M/F/O): ");
		scanf(" %c",&gender);
		if(gender=='M'||gender=='m')
		{
			printf("Hello sir.");
		}
		else if(gender=='F'||gender=='f')
		{
			printf("Hello mam.");
		}
		else if(gender=='O'||gender=='o')
		{
			printf("Hello there.");
		}
		else
		{
			printf("Wrong gender input");
		}
		printf(" Please enter your name: ");
		scanf(" %s",name);
		if(gender=='M'||gender=='m')
		{
			printf("Mr. %s, please enter your age: ",name);
		}
		else if(gender=='F'||gender=='f')
		{
			printf("Miss %s, please enter your age: ",name);
		}
		else if(gender=='O'||gender=='o')
		{
			printf("Dear %s, please enter your age: ",name);
		}
		scanf(" %d",&age);
		if(age>=18)
		{
			printf("You are eligible to vote*\nVoting instructions:\n If you want to vote for Party A: Enter A\n If you want to vote for Party B: Enter B\n If you want to vote for Party C: Enter C\n If you want to vote for Party D: Enter D		");
			scanf(" %c",&vote);
			if(vote=='A'||vote=='a')
			{
				PartyA++;
				printf("Thanks for voting.");
			}
			else if(vote=='B'||vote=='b')
			{
				PartyB++;
				printf("Thanks for voting.");
			}
			else if(vote=='C'||vote=='c')
			{
				PartyC++;
				printf("Thanks for voting.");
			}
			else if(vote=='D'||vote=='d')
			{
				PartyD++;
				printf("Thanks for voting.");
			}
			else
			{
				printf("Wrong voting input");
			}
		}
		else
		{
			printf("You are underage that is why can not vote.");
		}		
	}
	else
	{
		printf("Invalid number of voters");
	}
	printf("\nVoting result:\n");
	printf("Total number of votes Party A recieved: %d\n",PartyA);
	printf("Total number of votes Party B recieved: %d\n",PartyB);
	printf("Total number of votes Party C recieved: %d\n",PartyC);
	printf("Total number of votes Party D recieved: %d\n",PartyD);
	if(PartyA==PartyB&&PartyB==PartyC&&PartyC==PartyD)
	{
		printf("All the parties are winners.");
	}
	else if(PartyA==PartyB&&PartyB==PartyC&&PartyA>PartyD)
	{
		printf("Party A, Party B, Party C are winners. Party D is loser.");
	}
	else if(PartyA==PartyB&&PartyB==PartyD&&PartyA>PartyC)
	{
		printf("Party A, Party B, Party D are winners. Party C is loser.");
	}
	else if(PartyA==PartyD&&PartyD==PartyC&&PartyA>PartyB)
	{
		printf("Party A, Party D, Party C are winners. Party B is loser.");
	}
	else if(PartyD==PartyB&&PartyB==PartyC&&PartyB>PartyA)
	{
		printf("Party D, Party B, Party C are winners. Party A is loser.");
	}
	else if(PartyA==PartyB&&PartyA>PartyC&&PartyA>PartyD)
	{
		printf("Party A and Party B are winners. Rest are losers.");
	}
	else if(PartyA==PartyC&&PartyA>PartyB&&PartyA>PartyD)
	{
		printf("Party A and Party C are winners. Rest are losers.");
	}
	else if(PartyA==PartyD&&PartyA>PartyC&&PartyA>PartyB)
	{
		printf("Party A and Party D are winners. Rest are losers.");
	}
	else if(PartyC==PartyB&&PartyB>PartyA&&PartyB>PartyD)
	{
		printf("Party C and Party B are winners. Rest are losers.");
	}
	else if(PartyD==PartyB&&PartyB>PartyC&&PartyB>PartyA)
	{
		printf("Party D and Party B are winners. Rest are losers.");
	}
	else if(PartyC==PartyD&&PartyC>PartyA&&PartyC>PartyB)
	{
		printf("Party C and Party D are winners. Rest are losers.");
	}
	else if(PartyA>PartyB&&PartyA>PartyC&&PartyA>PartyD)
	{
		printf("Party A is the winner. Rest are losers.");
	}
	else if(PartyB>PartyA&&PartyB>PartyC&&PartyB>PartyD)
	{
		printf("Party B is the winner. Rest are losers.");
	}
	else if(PartyC>PartyB&&PartyC>PartyA&&PartyC>PartyD)
	{
		printf("Party C is the winner. Rest are losers.");
	}
	else if(PartyD>PartyB&&PartyD>PartyC&&PartyD>PartyA)
	{
		printf("Party D is the winner. Rest are losers.");
	}
	return 0;
}
