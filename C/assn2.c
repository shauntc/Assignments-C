#include <stdio.h>


int main(int argc, const char * argv[]) {

    char play;
    int choice;
    char* answer  = "Either guard will tell you which door leads to freedom\n";
    int valid_choice = 1;

    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf(" %c", &play);

	
    //changed from 'if' to 'while' in order to easily support replay
    while(play == 'y')
    {

        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door that the other guard would say is the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door the that other guard would say is the door  of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");

	do
	{

        scanf(" %d", &choice);

	valid_choice = 1;
	        switch (choice) 
		{
	            case 1:
			printf("%s", answer);
	                break;
		    case 2:
	                printf("%s", answer);
	                break;
	            case 3:
	                printf("%s", answer);
       		        break;
		    default:
			printf("Invalid Choice, make a selection between 1 and 3\n");
			valid_choice = 0;
			break; 
		}
	}while(valid_choice == 0);
	
	//Checks if the user would like to play again
	printf("Would you like to play again? (y/n): ");
	scanf(" %c",  &play);

    }

    return 1;
}
