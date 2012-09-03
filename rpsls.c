/*Rock Paper Scissors Lizard Spock*/

#include <stdio.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define LIZARD 4
#define SPOCK 5

int main()
{
  srand((unsigned)time(NULL));
  int computer_choice, player_choice;
  printf("Play Rock Paper Scissors Lizard Spock!\n");
  printf("**************************************\n");
  printf("\nScissors cuts paper\n");
  printf("Paper covers rock\n");
  printf("Rock crushes lizard\n");
  printf("Lizard poisons Spock\n");
  printf("Spock smashes scissors\n");
  printf("Scissors decapitates lizard\n");
  printf("Lizard eats paper\n");
  printf("Paper disproves Spock\n");
  printf("Spock vaporizes rock\n");
  printf("And - as it always has - rock crushes scissors\n\n");
  printf("You may press Control-C at any time to quit\n\n");

  while(1) //game loop, exited only by program termination
  {
  while(1) //input validation loop; get player's choice
  {
    printf("1 - Rock\n");
    printf("2 - Paper\n");
    printf("3 - Scissors\n");
    printf("4 - Lizard\n");
    printf("5 - Spock\n");
    printf("Enter your choice: ");
    scanf("%d", &player_choice);
    fflush(stdin); //VERY IMPORTANT!! THE SOURCE OF MANY BUGS IF OMITTED!
    if(player_choice > 0 && player_choice < 6)
    {
      break;
    }
    else
    {
      printf("Unexpected input: You must enter a number from 1 to 5!\n");
    }
  }
  
  //get computer's choice

  computer_choice = (rand() % 5) + 1;

  switch(player_choice)
  {
    case ROCK:
    printf("Player chooses Rock\n");
    switch(computer_choice)
    {
      case ROCK:
      printf("Computer chooses Rock\n");
      printf("It's a tie!\n");
      break;
      case PAPER:
      printf("Computer chooses Paper\n");
      printf("Paper covers rock - you lose!\n");
      break;
      case SCISSORS:
      printf("Computer chooses Scissors\n");
      printf("Rock crushes scissors - you win!\n\a");
      break;
      case LIZARD:
      printf("Computer chooses Lizard\n");
      printf("Rock crushes lizard - you win!\n\a");
      break;
      case SPOCK:
      printf("Computer chooses Spock\n");
      printf("Spock vaporizes rock - you lose!\n");
      break;
    }
    break;

    case PAPER:
    printf("Player chooses Paper\n");
    switch(computer_choice)
    {
      case ROCK:
      printf("Computer chooses Rock\n");
      printf("Paper covers rock - you win!\n\a");
      break;
      case PAPER:
      printf("Computer chooses Paper\n");
      printf("It's a tie!\n");
      break;
      case SCISSORS:
      printf("Computer chooses Scissors\n");
      printf("Scissors cuts paper - you lose!\n");
      break;
      case LIZARD:
      printf("Computer chooses Lizard\n");
      printf("Lizard eats paper - you lose!\n");
      break;
      case SPOCK:
      printf("Computer chooses Spock\n");
      printf("Paper disproves Spock - you win!\n\a");
      break;
    }
    break;

    case SCISSORS:
    printf("Player chooses Scissors\n");
    switch(computer_choice)
    {
      case ROCK:
      printf("Computer chooses Rock\n");
      printf("Rock crushes scissors - you lose!\n");
      break;
      case PAPER:
      printf("Computer chooses Paper\n");
      printf("Scissors cuts paper - you win!\n\a");
      break;
      case SCISSORS:
      printf("Computer chooses Scissors\n");
      printf("It's a tie!\n");
      break;
      case LIZARD:
      printf("Computer chooses Lizard\n");
      printf("Scissors decapitates lizard - you win!\n\a");
      break;
      case SPOCK:
      printf("Computer chooses Spock\n");
      printf("Spock crushes scissors - you lose!\n");
      break;
    }
    break;

    case LIZARD:
    printf("Player chooses Lizard\n");
    switch(computer_choice)
    {
      case ROCK:
      printf("Computer chooses Rock\n");
      printf("Rock crushes lizard - you lose!\n");
      break;
      case PAPER:
      printf("Computer chooses Paper\n");
      printf("Lizard eats paper - you win!\n\a");
      break;
      case SCISSORS:
      printf("Computer chooses Scissors\n");
      printf("Scissors decapitates lizard - you lose!\n");
      break;
      case LIZARD:
      printf("Computer chooses Lizard\n");
      printf("It's a tie!\n");
      break;
      case SPOCK:
      printf("Computer chooses Spock\n");
      printf("Lizard poisons Spock - you win!\n\a");
      break;
    }
    break;

    case SPOCK:
    printf("Player chooses Spock\n");
    switch(computer_choice)
    {
      case ROCK:
      printf("Computer chooses Rock\n");
      printf("Spock vaporizes rock - you win!\n\a");
      break;
      case PAPER:
      printf("Computer chooses Paper\n");
      printf("Paper disproves Spock - you lose!\n");
      break;
      case SCISSORS:
      printf("Computer chooses Scissors\n");
      printf("Spock crushes Scissors - you win!\n\a");
      break;
      case LIZARD:
      printf("Computer chooses Lizard\n");
      printf("Lizard poisons Spock - you lose!\n");
      break;
      case SPOCK:
      printf("Computer chooses Spock\n");
      printf("It's a tie!\n");
      break;
    }
    break;
  }
  putchar('\n');
  }
}