//contributors
//GP

//Joel Castro


//Ryan A

//Yoonhong Min

// Jessenia Hernandez Mora


//




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
	//stats for the player
	int health = 70;         // player's HP
	int courage = 50;        // player's “morale” gauge
	int squire = 0;		 // player may get a squire
	int cursed = 0;          // player may get cursed
	
	//player may get random treasure at the end from this array.
	const char* loot[5] = {
		"Sword of Doom",
		"Eldritch Tome",
		"Bag of Unlimited Gold",
		"Whip of Hopelessness",
		"Potion of Eternal Youth"
	};

	int choice;

	printf("\n-- Entering Yoonhong's Room: Into the Silly Dungeon --\n");
	printf("Starting HP: %d, Courage: %d\n\n", health, courage);

	// Five decisions for the player
	for (int step = 1; step <= 5; ++step)
	{
		switch (step)
		{
			case 1:
				printf("You find a heavy armored man with a onion shaped helmet who is exhausted and barely conscious.\n");
				printf(" (1) Offer him your bottle of water\n (2) Tiptoe a way around the stranger\nChoose: ");
				scanf("%d", &choice);
				if (choice == 1) 
				{
					squire = 1;
					courage += 10;
					printf("He declares you a knight and insists on becoming your squire, even if you protest.\n+10 courage\n\n");
				}
				else 
				{
					cursed = 1;
					printf("He gets mad at you for leaving him then suddenly plays a weird flute at you.\nYou got cursed.\n\n");
				}
				break;

			case 2:
				printf("You come across a bridge guarded by a talking duck demanding the answer to a riddle.\nWhat has a bill but never pays?\n");
				printf(" (1) Shout out \"A duck!\" and cross\n (2) Bribe the duck with a bread\nChoose: ");
				scanf("%d", &choice);
				if (choice == 1) 
				{
					printf("The duck shrugs and lets you pass.\n+5 courage\n\n");
					courage += 5;
				}
				else 
				{
					printf("The duck eats your bread and still lets you pass. It seems confused about its job.\n-5 courage\n\n");
					courage -= 5;
				}
				break;

			case 3:
				printf("A shady merchant offers you a ice cream that can make you sing better in the shower\n");
				printf(" (1) Buy the ice cream\n (2) Buy bandages for your wounds instead\nChoose: ");
				scanf("%d", &choice);
				if (choice == 1) 
				{
					if (rand() % 100 < 65) 
					{
						printf("You feel like you could hit a high C! Your spirit soars (your wounds are still open though).\n-20 health\n+10 courage\n\n");
						health -= 20;
						courage += 10;
					}
					else 
					{
						printf("Oh no! It is mint chocolate chip ice cream! You don't feel so good.\n-30 health\n\n");
						health -= 30;
					}
				}
				else 
				{
					printf("Your wounds are treated, but you will never hit that high note.\n+15 health\n-15 courage\n\n");
					health += 15;
					courage -= 15;
				}
				break;

			case 4:
				printf("You spot a dragon wearing reading glasses, deeply focused in erotic novel.\n");
				printf(" (1) Sneak past while it's swooning.\n (2) Randomly challenge the dragon who is having a good time\nChoose: ");
				scanf("%d", &choice);
				if (choice == 1) 
				{
					if (rand() % 100 < (45 + courage / 2)) 
					{
						printf("You tiptoe successfully. The dragon sighs dramatically, unaware.\n+10 courage\n\n");
						courage += 10;
					}
					else 
					{
						printf("Your fat butt scrapes loudly against the wall. The dragon looks up, blushing furiously.\nYou run!\n-30 health\n\n");
						health -= 30;
					}
				}
				else 
				{
					printf("The dragon gets mad with shame and hurls a colossal book at you.\n-45 health\n\n");
					health -= 45;
				}
				break;

			case 5:
				printf("Finally, you reach the end of the Silly Dungeon. You find a glittery treasure chest.\n");
				printf(" (1) Open the chest\n (2) Be suspicious and walk away from free treasure\nChoose: ");
				scanf("%d", &choice);
				if (choice == 1) 
				{
					if (cursed && rand() % 2 == 0) 
					{
						printf("The chest belches glitter in your face! It's very traumatic and disappointing.\n-30 health\n\n");
						health -= 30;
					}
					else 
					{
						int treasure = rand() % 5;
						printf("You find the legendary %s! Also, a coupon for free pizza in your favorite pizzeria!\n\n", loot[treasure]);
					}
				}
				else 
				{
					printf("You walk away from a free treasure, what a wuss!\n-20 courage\n\n");
					courage -= 20;
				}
				break;
		}

		if (health <= 0) 
		{
			printf("You collapse, forever trapped in the Silly Dungeon.\nHowever, the time somehow rewinds back for you.\n\n");
			health = 70;
			courage = 50;
			squire = 0;
			cursed = 0;
			step = 0;
			continue;
		}
	}

	printf("-- You have survived Yoonhong's Silly Dungeon! Final HP: %d, Courage: %d --\n\n", health, courage);

	//unique feature: player gets awarded with a title based on their final stats
	const char* title;

	if (cursed) 
	{
		if (health > 50)
			title = "The Cursed Abandoner";
		else
			title = "The Bedazzled";
	}
	else if (health > 90 && courage > 60) 
	{
		title = "The Anti Risk Taker";
	}
	else if (health < 50 && courage > 60) 
	{
		title = "The Fearless Disaster";
	}
	else if (health < 50 && courage < 40) 
	{
		title = "Faltering Knight";
	}
	else if (health < 20) 
	{
		title = "The Walker on Razor's Edge";
	}
	else 
	{
		title = "Seasoned Adventurer";
	}

	printf("You are henceforth known as: %s!\n\n", title);
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



