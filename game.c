// Johnny Hernandez
// CSC321 
// Final Project



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
void room45(void);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 45:
			{
				puts("room45");
				room45();
				break;
			}

			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here
void room45(void)
{
	char options[5][75] = 
	{
		"Tell a Gryffindor they're brave because they lack common sense",
		"Challengea Hufflepuff to a productivity contest.",
		"Borrow a Ravenclaw's book and return it with 'helpful notes'.",
		"Ask a Slytherin if betrayal is a hobby or a career path.",
		"Demand a refund from the sorting Hat."
	};
	char outcome[5][150] = 
	{
		"The Gryffindor jumped into acion. Straight into a broom cloete. You got hit by the door.(-15 health)",
		"The Hufflepuff baked you a pie. It was cursed. You now havemagical indigestion.(-10 health)",
		"The Ravenclaw hexed you. Your brain hurts from random trivia.(-20 health)",
		"The Slytherin smilled, patted your shoulder, and pickpocketed a healing potion.(+0 health, but you feel violated)",
		"The sorting hat reassigned you to the janitorial staff. You slipped on a mop bucket.(-5 health)"
	};
	int choice;
	int health = 100;
	
	printf("\nLoading Room 45: The Sorting Hat's Regrets...\n");
    	sleep(1);
    	printf(".\n");
    	sleep(1);
    	printf("..\n");
    	sleep(1);
    	printf("...\n");
    	sleep(1);

	printf("\nWelcome to Room 45: The Sorting Hat's Regrets\n.");

	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠒⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠀⠀⠀⠀⠀⣼⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	sleep(1);
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠠⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	sleep(1);
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣇⠀⠀⠀⣷⠈⣿⣿⡇⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⢨⣿⡀⣿⣿⡇⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡆⠀⢸⣿⣇⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⢠⠀⠀⠀⠀⠀⠀⣿⣿⣿⠁⠀⢸⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
	printf("⠀⣾⡄⠀⠀⠀⠀⠀⣿⣿⣿⡆⠀⢸⣿⣿⣿⣿⣿⣿⡇⠀⢀⣦⠀⠀⠀⠀⠀⠀\n");
	printf("⢰⣿⡇⢰⡆⠀⢀⣀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣾⣿⠀⠀⠀⠰⠆⠀\n");
	sleep(1);
	printf("⣸⡿⣇⣸⣟⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀\n");
	printf("⢻⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⢠⣾⣄⠀\n");
	printf("⢸⣿⣿⣿⣿⢸⣏⣿⣹⣏⣿⣹⣏⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⣿⣿⣿⠂\n");
	printf("⢸⣿⣿⣿⣿⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⣿⣿⣿⣷\n");
	printf("⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁\n");
	printf("⠈⠉⠉⠉⠉⠉⠉⣉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀\n");
	sleep(1);
	printf("⠀⠀⠀⠀⠀⢸⡇⣿⣀⡠⡀⣴⢲⢀⡄⡀⡄⠖⣦⢸⠒⣾⠂⣠⡀⠀⠀⠀⠀⠀\n");
	printf("⠀⠀⠀⠀⠀⢺⡗⣿⠸⡇⡇⠧⢸⠘⣧⢇⠇⠻⠿⠸⠀⣿⢀⣳⡅⠀⠀⠀⠀⠀\n");
	sleep(1);
	printf("⠀⠀⠀⠀⠀⠘⠃⠿⠀⠀⠀⣄⠜⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠁⠀⠀⠀⠀⠀⠀\n");

	printf("your current health: %d\n", health);

	for (int i = 0; i < 5; ++i)
	{
		printf("\nConsulting the Sorting Hat for your next disaster...\n");
        	sleep(1);
        	printf(".\n");
        	sleep(1);
        	printf("..\n");
        	sleep(1);
        	printf("...\n");
       		sleep(1);
		
		printf("\nDecision %d: choose your social tragedy:\n", i + 1);

		for (int j = 0; j < 5; ++j)
		{
			printf("%d. %s\n", j + 1, options[j]);
		}

		printf("Enter your choice (1-5): ");
		scanf("%d", &choice);

		if(choice < 1 || choice > 5)
		{
			printf("Invalid choice. Even the ghost at Hogwarts are judging you.\n");
			i--;
			continue;
		}

		printf("\nOutcome: %s\n", outcome[choice - 1]);

		int sideEffect = rand() % 3;

		if(sideEffect == 0)
		{
			printf("A passing ghost shakes its head in dissappointment.\n");
		}
		else if(sideEffect == 1)
		{
			printf("Peeves the Poltergiest laughs at your choice.\n");
		}
		else
		{
			printf("A nearby portrait sighs, 'It's always the First years..'\n");
		}

		int damage = 0;

		if(choice == 1)
		{
			damage = 15;
		}
		if(choice == 1)
                {
                        damage = 15;
                }
		if(choice == 2)
                {
                        damage = 10;
                }
		if(choice == 3)
                {
                        damage = 20;
                }
		if(choice == 4)
                {
                        damage = 0;
                }
		if(choice == 5)
                {
                        damage = 5;
                }

		health -= damage;
		printf("You lost %d health points. Current health: %d\n", damage, health);

		if(health <= 0)
		{
			printf("\nYour questionable decisions have finally caught up to you.\n");
			printf("the sorting hat delcares you unfit for wizarding society.\n");
			return;
		}
	}


	printf("\nYou have survived room 45. The houses will speak of your embarrassment for generations to come.\n");

}
