//contributors
//GP

//Joel Castro


//Ryan A

//Yoonhong Min

// Jessenia Hernandez Mora

// Stanley




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


void room15game(void);
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

void stanleysRoom(void);

void kobesRoom(void);

void angelasRoom26(void);


void cameronDOOMFn(void);

void lab13nanup(void);


void Function23fbabonjo(void);

void cscuser1(void);

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
				puts("room15");
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
				stanleysRoom();
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
void room15game(void)
{
	printf("cscuser15 \n");

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


void stanleysRoom(void)
{
	printf("Welcome to Stanley's Adventure Room!\n");
	int keepPlaying = 1;
	int choice;
	int randomNumber;
	int coins = 0;
	int inventory[5] = {0, 0, 0, 0, 0};
	char* itemNames[5] = {"Sword", "Shield", "Potion", "Key", "Treasure"};
	while(keepPlaying)
	{
		printf("\nYou have %d coins.\n", coins);
		printf("Your inventory: ");
		for(int i = 0; i < 5; i++)
		{
			if(inventory[i])
				printf("%s, ", itemNames[i]);
		}
		printf("\n\n");
		printf("What would you like to do?\n");
		printf("1. Search for treasure\n");
		printf("2. Fight a monster\n");
		printf("3. Buy an item\n");
		printf("4. Solve a riddle\n");
		printf("5. Leave the room\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				randomNumber = rand() % 10 + 1;
				if(randomNumber > 7)
				{
					printf("You found a treasure chest! You gain 10 coins.\n");
					coins += 10;
					if(!inventory[4])
					{
						printf("You also found a rare treasure for your inventory!\n");
						inventory[4] = 1;
					}
				}
				else
				{
					printf("You searched but found nothing of value.\n");
				}
				break;
				
			case 2:
				randomNumber = rand() % 10 + 1;
				if(inventory[0])
				{
					printf("You use your sword to fight the monster!\n");
					if(randomNumber > 3)
					{
						printf("You defeated the monster and gained 5 coins!\n");
						coins += 5;
					}
					else
					{
						printf("The monster was too strong! You lost 2 coins running away.\n");
						if(coins >= 2)
							coins -= 2;
						else
							coins = 0;
					}
				}
				else
				{
					printf("You don't have a sword to fight with!\n");
					if(randomNumber > 7)
					{
						printf("You managed to escape unharmed.\n");
					}
					else
					{
						printf("You got injured and lost 3 coins.\n");
						if(coins >= 3)
							coins -= 3;
						else
							coins = 0;
					}
				}
				break;
				
			case 3:
				printf("What would you like to buy?\n");
				printf("1. Sword (5 coins)\n");
				printf("2. Shield (3 coins)\n");
				printf("3. Potion (2 coins)\n");
				printf("4. Key (7 coins)\n");
				printf("5. Cancel\n");
				
				int buyChoice;
				scanf("%d", &buyChoice);
				
				switch(buyChoice)
				{
					case 1:
						if(coins >= 5 && !inventory[0])
						{
							printf("You bought a sword!\n");
							inventory[0] = 1;
							coins -= 5;
						}
						else if(inventory[0])
						{
							printf("You already have a sword!\n");
						}
						else
						{
							printf("Not enough coins!\n");
						}
						break;
					case 2:
						if(coins >= 3 && !inventory[1])
						{
							printf("You bought a shield!\n");
							inventory[1] = 1;
							coins -= 3;
						}
						else if(inventory[1])
						{
							printf("You already have a shield!\n");
						}
						else
						{
							printf("Not enough coins!\n");
						}
						break;
					case 3:
						if(coins >= 2 && !inventory[2])
						{
							printf("You bought a potion!\n");
							inventory[2] = 1;
							coins -= 2;
						}
						else if(inventory[2])
						{
							printf("You already have a potion!\n");
						}
						else
						{
							printf("Not enough coins!\n");
						}
						break;
					case 4:
						if(coins >= 7 && !inventory[3])
						{
							printf("You bought a key!\n");
							inventory[3] = 1;
							coins -= 7;
						}
						else if(inventory[3])
						{
							printf("You already have a key!\n");
						}
						else
						{
							printf("Not enough coins!\n");
						}
						break;
					case 5:
						printf("Purchase canceled.\n");
						break;
					default:
						printf("Invalid choice.\n");
				}
				break;
				
			case 4:
				randomNumber = rand() % 3;
				printf("Solve this riddle:\n");
				
				switch(randomNumber)
				{
					case 0:
						printf("I'm tall when I'm young, and short when I'm old. What am I?\n");
						printf("1. A human\n2. A candle\n3. A tree\n");
						int answer;
						scanf("%d", &answer);
						if(answer == 2)
						{
							printf("Correct! You earned 3 coins.\n");
							coins += 3;
						}
						else
						{
							printf("Wrong! The answer was: A candle\n");
						}
						break;
					case 1:
						printf("What has keys but no locks, space but no room, and you can enter but not go in?\n");
						printf("1. A keyboard\n2. A map\n3. A dream\n");
						scanf("%d", &answer);
						if(answer == 1)
						{
							printf("Correct! You earned 3 coins.\n");
							coins += 3;
						}
						else
						{
							printf("Wrong! The answer was: A keyboard\n");
						}
						break;
					case 2:
						printf("What gets wetter as it dries?\n");
						printf("1. Ice\n2. A sponge\n3. A towel\n");
						scanf("%d", &answer);
						if(answer == 3)
						{
							printf("Correct! You earned 3 coins.\n");
							coins += 3;
						}
						else
						{
							printf("Wrong! The answer was: A towel\n");
						}
						break;
				}
				break;
				
			case 5:
				printf("Thanks for visiting Stanley's Room! You leave with %d coins and some items.\n", coins);
				keepPlaying = 0;
				break;
				
			default:
				printf("Invalid choice. Please try again.\n");
		}
	}
	
	printf("Returning to the main hall...\n");
}

