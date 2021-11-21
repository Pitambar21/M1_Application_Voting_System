#include <stdio.h>
#define CD_COUNT
#define CD1 "PARTY_A"
#define CD2 "PARTY_B"
#define CD3 "PARTY_C"
#define CD4 "PARTY_D"

int totalVotes1=0;
int totalVotes2=0;
int totalVotes3=0;
int totalVotes4=0;
int NOTA=0;

void castVote()
{
    int choice;
    printf("\n\n Enter your choice Please \n\n ");
    printf("\n 1. %s", CD1);
    printf("\n 2. %s", CD2);
    printf("\n 3. %s", CD3);
    printf("\n 4. %s", CD4);
    printf("\n 5. %s", "None of the above ");
    scanf("%d", &choice);
    printf("\n\n Your choice : ");

    switch(choice)
    {
      case 1: totalVotes1++ ;
      break;
      case 2: totalVotes2++ ;
      break;
      case 3: totalVotes3++ ;
      break;
      case 4: totalVotes4++ ;
      break;
      case 5: NOTA++ ;
      break;
      default : printf("\n Error : Invalid choice! ");
      break;

      getchar();
    }
    printf("\n ** Thank you for voting Your vote has been Recorded.** ");
}

void totalVotes()
    {
        printf("\n\n Statistics ");
        printf("\n %s - %d", CD1, totalVotes1);
        printf("\n %s - %d", CD2, totalVotes2);
        printf("\n %s - %d", CD3, totalVotes3);
        printf("\n %s - %d", CD4, totalVotes4);
        printf("\n %s - %d", "Nota", NOTA);
    }

void getLeadingCD()
{
    printf("\n\n Leading Candidate \n\n");
    if(totalVotes1>totalVotes2 && totalVotes1>totalVotes3 && totalVotes1 > totalVotes4)
    printf("%s", CD1);
    else if(totalVotes2>totalVotes3 && totalVotes2>totalVotes4 && totalVotes2>totalVotes1)
    printf("%s", CD2);
    (totalVotes3>totalVotes4 && totalVotes3>totalVotes2 && totalVotes3> totalVotes1);
    printf("%s", CD3);
    (totalVotes4>totalVotes1 && totalVotes4>totalVotes2 && totalVotes4 > totalVotes3);
    printf("%s", CD4);
    
}

int main()
{
    int i,choice;

    do
    {
      printf("\n\n ***** Welcome to Election 2021 *****");
      printf("\n\n 1. Cast Your Vote Please ");
      printf("\n\n 2. Find Total Votes Given to Candidates ");
      printf("\n\n 3. Find Leading Candidate ");
      printf("\n\n 0. Exit ");

      printf("\n\n Please enter your choice. ");
      scanf("%d", &choice);

      switch (choice)
      {
      case 1 : castVote();
      break;
      case 2 : totalVotes();
      break;
      case 3 : getLeadingCD();
      break;
      
      default: printf("\n Error : Invalid Choice ");
          break;
      }
    }

    while (choice!=0);
    {
        getchar();

        return 0;
    }
    
}