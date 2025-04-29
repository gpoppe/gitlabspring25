//contributors
//GP

//Joel Castro


//Ryan A

//Yoonhong Min

// Jessenia Hernandez Mora


//Nicole Brooks




#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
void dairasBrain(void);

void jovannyFunction(void);

void room25game(void);

void room57G(void);

void user36room(void);

void amoralesRoom9(void);

void room30game(void);

void joshRoom4(void);

void room59game(void);

void room22RandomTime(void);

void userRoom50(void);

void room12game(void);

void room31(void);

void room39game(void);

void stevenFirst(void);

void room53game(void);

void room6game(void);

void FarStarTrader(void);

void room17(void);

void room8game(void);

void room29game(void);

void room28game(void);

void AzizHaouchineFn(void);

void room16game(void);

void jessiesFunRoom(void);

void vicCompRoom(void);

void brentTestRoom(void);

void omarsUniqueFn(void);

void HubertRoom(void);

void ryanRoom38(void);

void kobesRoom(void);

void angelasRoom26(void);

void cameronDOOMFn(void);

void lab13nanup(void);

void Function23fbabonjo(void);

void cscuser1(void);

void room15game(void);

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
			case 1:
			{
				puts("room1");
				break;
				cscuser1();
			}
			case 2:
			{
				puts("room2");
				dairasBrain();
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				joshRoom4();
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				room6game();
				break;
			}
			case 7:
			{
				puts("room7");
				cameronDOOMFn();
				break;
			}
			case 8:
			{
				puts("room8");
				room8game();
				break;
			}
			case 9:
			{
				puts("room9");
				amoralesRoom9();
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				FarStarTrader();
				break;
			}
			case 12:
			{
				puts("room12");
				room12game();
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				printf("\n\n\nWELCOME TO NICOLE'S ROOM 15!\n\n\n");
				room15game();
				break;
			}
			case 16:
			{
				puts("room16");
				room16game();
				break;
			}
			case 17:
			{
				puts("room17");
				room17();
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				room22RandomTime();
				break;
			}
			case 23:
			{
				puts("room23");
				Function23fbabonjo();
				break;
			}
			case 24:
			{
				puts("room24");
				kobesRoom();
				break;
			}
			case 25:
			{
				puts("room25");
				room25game();
				break;
			}
			case 26:
			{
				puts("room26");
				angelasRoom26();
				break;
			}
			case 27:
			{
				puts("room27");
				lab13nanup();
				break;
			}
			case 28:
			{
				puts("room28");
				room28game();
				break;
			}
			case 29:
			{
				puts("room29");
				room29game();
				break;
			}
			case 30:
			{
				puts("room30");
				room30game();
				break;
			}
			case 31:
			{
				puts("room31");
				room31();
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				user36room();
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				ryanRoom38();
				break;
			}
			case 39:
			{
				puts("room39");
				room39game();
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				puts("room42");
				jovannyFunction();
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				HubertRoom();
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				jessiesFunRoom();
				break;
			}
			case 48:
			{
				puts("room48");
				AzizHaouchineFn();
				break;
			}
			case 49:
			{
				puts("room49");
				vicCompRoom();
				break;
			}
			case 50:
			{
				puts("room50");
				userRoom50();
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				room53game();
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}

			case 59:
			{
				puts("room59");
				room59game();
				break;
			}


			case 57:
			{
				puts("room57");
				room57G();
				break;
			}


			case 58:
			{
				puts("room58");
				stevenFirst();
				break;
			}


			case 61:
			{
				puts("room61");
				omarsUniqueFn();
				break;
			}



			case 62:
			{
				puts("room62");
				brentTestRoom();
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
void joshRoom4(void)
{
	printf("cscuser4 \n");
}

void dairasBrain(void)
{
	printf("cscuser2\n");
}

void room12game(void)
{
	printf("cscuser12 :)\n");
}

void room30game(void)
{
	printf("cscuser30\n");
}

void cameronDOOMFn(void)
{
	printf("cscuser7/ Cameron");
}

void room59game(void)
{
	printf("%s\n", "cscuser59");
}

void kobesRoom(void)
{
	printf("CSCUSER24\n");
}

void room57G(void) 
{
	printf("\ncscuser57 ");
}

void user36room(void)
{
        printf("cscuser36\n");
}

void stevenFirst(void)
{
	printf("Steven >_< \n");
}

void amoralesRoom9(void)
{
	printf("cscuser9: anthony morales\n");
}

void room22RandomTime(void)
{
	printf("\nRyan - Room 22\n\n");
}

void userRoom50(void)
{
	printf("cscuser50\n");
}

void room31(void)
{
	printf("Yoonhong Min ");
}

void room39game(void)
{
	printf("Jess\n");

}
void HubertRoom(void)
{
	printf("Hubert: hnguyen296 \n");
}

void room25game(void)
{
	printf("Joel - cscuser25\n");
}

void jovannyFunction(void)
{
	printf("cscuser42\n");

}

void room53game(void)
{
	printf("cscuser53\n");
}

void room6game(void)
{
	printf("cscuser6\n");
}

void room8game(void)
{
	printf("cscuser8 \n");
}

void room29game(void)
{
	printf("cscuser29\n");
}

void FarStarTrader(void)
{
	printf("cscuser11\n");
}

void omarsUniqueFn(void)
{
	printf("Omar");
}

void AzizHaouchineFn(void)
{
	printf("Aziz\n");
}

void Function23fbabonjo(void)
{
	printf("Episode 23: Fatoma Babonjo ");
}

void room17(void)
{
	puts("cscuser17");
}

void vicCompRoom(void)
{
        printf("cscuser49");
}

void room16game(void)
{
	printf("cscuser16\n");
}

void ryanRoom38(void)
{
	printf("Ryan cscuser38\n");
}

void brentTestRoom(void)
{
	printf("Brent's Room \n");
}

void angelasRoom26(void)
{
	printf("cscuser26\n");

}

void room1game(void) 
{
	printf("cscuser1\n");
}

void room28game(void)
{
	printf("Cscuser28:did not compile and test his code before he made a pull request or he would have seen he did not define his function using a function prototype. This adds extra work for everyone else.");
}

void jessiesFunRoom(void)
{
        printf("cscuser47");
}

void lab13nanup(void)
{
	printf("nanu");

}

void room15game(void)
{
	char userChoice1;
    	char userChoice2;
    	char userChoice3;
	char userChoice4;
	char userChoice5;

	int i;

    	//for decision #4
    	char *actions[] = { "Approach the red door kick it down!", "Find another way out."};
	
   	 //userChoice1
	//decision #1
	 printf("You see a bright light shining on a tiny box in the room. \n"); 
	 printf("Press 'a' to open the box. \n");
	 printf("Press 'b' to search for a light switch. \n");
	 printf("What would you like to do? \n");
	 scanf(" %c", &userChoice1);

	 if (userChoice1 == 'a')
	 {
		 printf("\n");
		 //continue with story
		 //decision #2
		 printf("You find a mysterious key! You also see a big red door. \n");
		 printf("Press 'a' to approach the red door, use your key, and open it. \n");
		 printf("Press 'b' to stay in the room, but the water is at your ankles! \n");
		 printf("What would you like to do? \n");
		 scanf(" %c", &userChoice2);
		 
		 if (userChoice2 == 'a')
		 {
			 printf("There is a light and a shadowy figure at the end of the hall. \n");
		 }
		 else if (userChoice2 == 'b') 
		 {
			 printf("The water is rising fast! You walk towards light. \n\n");
		 }
		
		 //further continue
		 //decision #3
		 printf("\n");
		 printf("You are at the end of the hallway and you see a snake!! \n");
		 printf("Press 'a' to stay calm and wait. \n");
		 printf("Press 'b' to try to catch the snake. \n");
		 printf("What would you like to do? \n");
		 scanf(" %c", &userChoice5);
		 
		 if (userChoice5 == 'a')
		 {
			printf("The snake moves past you and into the grass. \n");
		 }
		 else if (userChoice5 == 'b')
		 {
			printf("You get bit by the snake! You slowly fall asleep. \n");
			for(i = 0; i < 3; i++)
			{
				printf("ZzzzzZZzzzZzzzz. \n");
			}
		 }

		 printf("\nThanks for playing Nicole's adventure game! Try again and choose a different door! \n\n\n");
	 }
	
	 else if (userChoice1 == 'b')
	 {
		 //continue the story
		 //decision #4
		 printf("\n");
		 printf("You find the light switch and see a red painted door. \n");
		 printf("Press 'a' %s \n", actions[0]);
		 printf("Press 'b' %s \n", actions[1]);
		 printf("What would you like to do? \n");
		 scanf(" %c", &userChoice3);
		 
		 if (userChoice3 == 'a')
		 {
			 printf("You kick down the door and walk towards light at the end of the tunnel. \n\n");
		 }
		 else if (userChoice3 == 'b')
		 {
			 printf("Theres no way out. The water is now at an unsafe level! You karate chop down the door! \n\n");
		 }
		 
		 //further continue the story
		 //decision #5
		 printf("\n");
		 printf("You continue walking forward and you make it to the end of the tunnel. \n"); 
		 printf("Press 'a' to make a run for it. \n");
		 printf("Press 'b' to walk slow. \n");
		 printf("What would you like to do? \n");
		 scanf(" %c", &userChoice4);
		 
		 srand(time(NULL));
		 int randomOutcome = rand() % 5 + 1;
		 
		 if (userChoice4 == 'a') 
		 {
			 if (randomOutcome == 1)
			 {
				 printf("The ground shakes and you fall through. You're trapped! \n");
			 }
			 else if (randomOutcome == 2)
			 {
				 printf("Your foot slips on loose stone! You fall to the ground. \n");
			 }
			 else if (randomOutcome == 3)
			 {
				 printf("You look back and see someone chasing you! \n");
			 }
			 else if (randomOutcome == 4)
			 {
				 printf("The walls start to close in! Your foot gets caught seconds before exiting. \n");
			 }
			 else
			 {
				 printf("You made it out safely, you can see a nearby town.");
			 }
		 }
		 else if (userChoice4 == 'b')
		 {
			 printf("Poision darts shoot out and you get struck! *THUD* \n");
			 for(i = 0; i < 3; i++)
			 {
				 printf("ZzzzzZZzzzZzzzz. \n");
			 }
		 }
	printf("\nThanks for playing Nicole's adventure game! Try again and choose a different door! \n\n\n");
	 }
}

