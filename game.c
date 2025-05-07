//contributors
//GP
//Jovanny Gonzalez
//Joel Castro
//Ryan A
//Nicole Brooks
//Yoonhong Min
// Jessenia Hernandez Mora
//Gerard McCallion

//Alex Pham


//Jared Hernandez


// Omar Salem

// Stanley Navarrete


// Nanu Panchamurthy

// carlos acevedo

// Raymond Lee

//Jesse Navarro
// Aziz Haouchine


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
void dairasBrain(void);
void response(int choice);

void jovannyFunction(int jovannyNum);

void room25game(void);

void room57G(char *name);

void user36Cafe(void);

void amoralesRoom9(void);

void room30game(void);

void joshRoom4(void);

void room59game(void);

void room22RandomTime(void);


void stanleysRoom(void);

//room3
void room3(void);
void encounterPredator(char name[], int dangerType);
//room3 end

void userRoom50(void);
void userRoom50Ending1Path(int choices[], int index);
void userRoom50Ending2Path(int choices[], int index);
void userRoom50Ending3Path(int choices[], int index);
void userRoom50Stats(int choices[]);

void alexGameRoom56(void);
int countSuccesses(int successArray[]);
void checkDoorStatus(int successCount);
void printResults(int successArray[]);

void room12game(void);
void room31(void);
void room39game(void);
void stevenFirst(void);
void room53game(void);
void room6game(void);
void FarStarTrader(void);
void room15game(void);
//room 17
void room17(void);
void checkInventory17(char *arr[]);
int whatToDo17(char location[], bool tableSeen, bool tableChecked, bool windowSeen);
int coinToss17(void);
//end room 17
//room8
void room8game(void);
void room8game(void);
void room8part1(void);
void room8part2(void);
void room8part3(void);
void room8part4(void);
void room8part5(int choice);
//end room8
void room29game(void);
void room28game(void);
void AzizHaouchineFn(void);



void room16game(void);

void jessiesFunRoom(void);

void vicCompRoom(void);



void brentRoom(void);

void omarsUniqueFn(void);
void HubertRoom(void);

void ryanRoom38(void);



void kobesRoom(void);

void angelasRoom26(void);

void carlosroom60(void);

void cameronDOOMFn(void);

void lab13nanup(void);
void Function23fbabonjo(void);
void cscuser1(void);


void PedroFunctionRoom(void);
void gameFuncHenry41(void);

void user14room(void);



//room 35
void rayFunct(void);
int rayFourDirect(int option, int count, int hp);
int rayDice(int dice);
int rayBattle(int option, int count, int hp);
int rayFight(int hp);

void room51game(void);

void room34game(void);



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
				room3();
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
				user14room();
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
				room34game();
				break;
			}
			case 35:
                        {
                                puts("room35");
                                rayFunct();
				break;
                        }
			case 36:
                        {
                                puts("Entering Cafe 36! :)");
                                user36Cafe();
                                break;
                        }

			case 37:
			{
				puts("room37");
				PedroFunctionRoom();
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
				gameFuncHenry41();
				break;
			}
			
			                        case 42:
                        {

                                int room42Choice=0;
                                int room42Fruit=3;

				puts("room42");
                                printf("You have entered room 42.\n");
                                printf("Stranger: HELLO THERE! I'm sorry to ask you of this but my son is upset at the moment.\n");
                                printf("(As it approaches, It seems to be a talking bear with a basket. seems tired...)\n");
                                printf("Bear: A bird has stolen fruit from my boy. I've come to gather some fruit for him in a basket.\n");
                                printf("Bear: Can you bring it back to him for me? I need to rest my eyes.\n");
                                printf("(Enter the number 1 for yes. 2 is no.)\n");
                                scanf("%d",&room42Choice);
                                if(room42Choice==1)
                                {
                                        room42Choice=0;
                                        printf("%s: Sure I can!\n",name);
                                        printf("Bear: Thanks a ton!\n");
                                        printf("(You are given a basket with fruit)\n");
                                        printf("(You currently have %d fruit)\n", room42Fruit);
					room42Choice=0;
					printf("(You are going towards bear child.)\n");
					printf("(There are two paths, which will you take?)\n");
					printf("(Option 1: Bridge, Option 2: Around Bridge)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;
						printf("(You've gone to the bridge. You discover a troll.)\n");
						printf("Troll: I won't let you cross my bridge unless you pay a fee!(1 fruit)\n");
						printf("(Option 1: Pay, Option 2:Go around)\n");
						printf("Enter Option:");
						scanf("%d",&room42Choice);
					}

					if(room42Choice==1)
					{
						room42Fruit=2;
                                                printf("(You payed the fee. -1 fruit.)\n");
						printf("(You currently have %d fruit)\n", room42Fruit);
						printf("%s: That greedy troll.\n",name);
					}

					if(room42Choice==2)
					{

                                                printf("%s: I am going around.\n",name);
						printf("(You walk and walk and eventually arrive at a tree where you try to rest)\n");
						printf("Stranger:Buddy!\n(You look around and see a squirrel.)\n");
						printf("Squirrel:If you can climb this tree, I'll give you 2 fruit!\n");
						printf("Option 1:yes, Option 2:no.)\n");
						printf("Enter Option:");
                                                scanf("%d",&room42Choice);

						if(room42Choice==1)
						{

							room42Choice=0;





							printf("%s: I'll climb your tree.\n",name);
                                                        printf("(You are given a random number. Based on that number, you will climb or fail)\n");
							int jovannyRandomNum=1+(rand()%11);
							if(jovannyRandomNum<=4)
							{
								printf("Squirrel: You sure are strong! Here's your fruit!\n");
								printf("(+2 fruit)\n");
								room42Fruit+=2;
								printf("(You currently have %d fruit)\n", room42Fruit);

							}
							else
							{
								printf("Squirrel: You're gonna fall!\n");
								printf("(You fell on your basket, you lost 1 fruit)\n");
                                                                room42Fruit-=1;
                                                                printf("(You currently have %d fruit)\n", room42Fruit);
							}

						}
						if(room42Choice==2)
						{
                                                        printf("%s: I won't climb this tree, I'm going forward.\n",name);
						}

					}

					room42Choice=0;
					printf("(At this point in time, you are exhausted.)\n");
					printf("(You come across a strange man.)\n");
					printf("(seems to be a Wizard based on the clothes)\n");
                                        printf("Wizard: Hello traveler, I can take you to your destination in exchange of 1 fruit, do you accept?\n");


					printf("Option 1:yes, Option 2:no.)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;
						printf("Wizard:Wise Choice!\n");
                                                room42Fruit-=1;
                                                printf("(You currently have %d fruit)\n", room42Fruit);
					}

					if(room42Choice==2)
					{
						room42Choice=0;
						printf("%s: I don't prefer to. I'm going to keep on walking!\n",name);
                                                printf("(You are now nearing the bear and by sheer luck you spot a bird's nest!)\n");
                                                printf("(Inside, although much was consumed, you managed to recover two fruit.)\n");
						room42Fruit+=2;

					}
				}

				printf("(Finally you arrive to child bear.)\n");
                                printf("(Let's see how you did. We are passing the fruit basket)\n");
				printf("(You currently have %d fruit)\n", room42Fruit);
				jovannyFunction(room42Fruit);






                                if(room42Choice==2)
                                {
                                        printf("%s: I wish I could but I gotta go! I forgot something somewhere else...\n",name);
                                }


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
				int choice;
				int choicesMade[6];
				int index = 0;
				puts("room50");
				userRoom50();

				printf("There lies before you a dimly lit room...\n");
				printf("At the center there is a small round table with a candle and open book on top.\n");
				printf("You also notice two bookshelves at opposite sides of the room with a fireplace against the wall at its center.\n");
				printf("There is also a mysterious black figure near one of the bookshelves...What do you do?\n\n");

				printf("1: Standby\n2: Approach the table\n3: Approach the mysterious person\n4: Walk past the table to the fireplace\n5: Reach for the exit\n\n");
				printf("Select your choice by indicating the number value: ");

				scanf("%d", &choice);
				choicesMade[index] = choice;
				index += 1;

				if (choice == 1)
				{
					printf("\nYou eerily stand still in the room, and the fireplace suddenly stops lighting the room. You can only see the light of the candle.\n");
					printf("As you approach the table, a cat leaps on top, toppling the candle to the floor!\n\n");
					printf("1: Pick up the candle\n2: Pet the cat\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou pick up the candle and place it back on the table, but the book and cat have disappeared!\n");
						printf("You wander through the room with your candle close, and manage to light the fireplace again.\n");
						printf("As you do, the room lights up again.\n\n1: Head back to the table\n2: Head over to the exit\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou head back to the table but no longer see the book there, you now see something else...\nIt is a blank piece of paper ");
							printf("with an ink and pen beside it. The pen begins to write on its own on the paper with a golden ink.\n\n1: Go over to what is being written");
							printf("\n2: Interrupt the process\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou go over and see that the words 'You can be forgiven' are being written.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou rush towards the pen and try to stop it writing, but it continues on when you are suddenly blinded by a bright light.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{

							printf("\nYou head over to the exit door but notice that it vanishes before you before you even get a chance to reach the doorknob.\n");
							printf("Suddenly you hear laughter all around you, of a deep and ominous tone.\n You try to cover your ears as you can't handle its volume");
							printf(" and screeching tone.\n\n 1: Run to the wall\n2: Scream back\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou begin to scream back at the emptiness of the room with your eyes closed. You then open your eyes and...");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou run towards the wall and hit your head against it, knocking you out temporarily.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nEven though it is dark, the glimmer from the candle allows you to see the cat and pet it.\n");
						printf("The cat starts to glow and walks over to one of the bookshelves\n\n");
						printf("1: Go over to the bookshelf\n2: Wait\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou walk over to the bookshelf and pick up a book from it, that still has a glow to it from the cat.\n");
							printf("You open the book and read the following: 'The Lamb was slain'. You scratch your head and close the book. The glowing cat has also disappeared.");
							printf("Suddenly, the room lights up again and you wonder what this all leads to.\n\n1: Go to the exit\n2: Open the book again\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou head over to the exit, but your vision begins to blur along the way.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou open the book again and the book now says 'They bow before the Lamb'.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou decide to wait and see if anything happens...and the cat ceases to glow.\nThe light of the candle is all that is left.");
							printf(" You can't seem to see anything else around you.\nSo, you decide to place your hand on the wall and scan through the room for a door.\n");
							printf("Doing so enables you to find two doors in particular. Using your candle you see the first door labeled 'Exit' and ");
							printf("\nthe second door labeled 'Beginning'.\n\n1: 'Exit'\n2: 'Beginning'\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head to the door 'Exit', but this takes you along a long corridor into another room.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head to the door 'Beginning', and this takes you to a small room with a pedastal displaying a cartoonish heart.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
					}
				}
				else if (choice == 2)
				{
					printf("\nYou walk towards the table and notice the book has an unreadable script...\n");
					printf("However you are able to distinguish these words: 'There is one truth'\nYou suddenly hear something scratch the wall!\n");
					printf("\n1: Turn to the source of the sound\n2: Hide under the table\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou fearlessly turn to the source of the sound and walk up to the source.\n");
						printf("Suddenly, a large shadowy figure leaps on top of you and pins you to the ground!\n");
						printf("Quickly choose how to fend back!\n\n1: Reach for the flashlight\n2: Reach for the sword\n");
						printf("\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou reach for a flashlight that was hidden under the table and turn it on as fast as you can.\n");
							printf("As you shine your flashlight, the figure burns up and vanishes from your sight. You then shine your light on the wall.\n");
							printf("You see this writing 'Let light shine out of darkness' written with a dark black substance resembling that of the figure.\n");
							printf("\n1: Use your flashlight to scan the room for more writing\n2: Use your flashlight to look for the exit door\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou use your flashlight to find more writing but don't find anymore. This leaves you a little disappointed.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou use your flashlight to find the exit door and locate it. When you turn the doorknob it seems like nothing happened.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}	
						else
						{
							printf("\nYou reach for a sword that was unknown to you and swing it with fury at the figure.\nBut you notice that this sword completely phases through.\n");
							printf("It is ineffective against the figure. The figure envelops you with its darkness, you seem hopeless.\n\n1: Cry out for help\n2: Accept your fate.\n");
							printf("\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = index;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou cry out for help and out of nowhere, the figure is gone.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to accept your fate and close your eyes as the darkness encloses your whole body.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou hide under the table and hear the scratching come closer and closer to where you are at.\n");
						printf("The sounds starts to surround you and you feel an large object on top of the table.\n\n");
						printf("1: Overturn the table with your back\n2: Stay completely still\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou use your back as a leverage to make the figure back off. You hear a sharp hiss as the figure is thrown to the other side of the room\n");
							printf("You are now face to face with the shadowy figure.\n\n1: Fight\n2: Run\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou choose to fight, and lunge yourself with all your might toward the figure.\n");
								printf("As soon as you are about to make contact, the figure vanishes.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou choose to run away in circles since you were foreign to the exit door's location.\n");
								printf("After running a couple of laps you realize the figure is gone and stop running.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou stay completely still under the table. It seems like the large object also stopped moving.\n\n1: Check above\n2: Wait longer");
							printf("\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to wait longer and eventually you get out of the shelter of the table.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou check above and, yes, the figure is in fact gone. You wonder where it went to.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}	
					}

				}
				else if (choice == 3)
				{
					printf("\nYou decided to approach the mysterious person and as you get close to him, he turns around and his face shine so bright\n");
					printf("You instinctively look away, but when you try to look back, he is gone. You then notice that the room has completely changed!\n");
					printf("The room is just a bright luminescent white with many pieces of parchment with writings on them.\n\n");
					printf("1: Examine through the writings\n2: Attempt to find the exit door\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou look through the writings one by one and they seem to be prophecies of some kind regarding a king who would liberate his people\n");
						printf("You wonder who that person could be and keep reading that this very king will suffer and die cruely for his people\n");
						printf("As you continue reading you see this repeating pattern said in different ways. You don't really mind it and eventually you fall asleep.\n");
						printf("After some time you wake up and see that everything is back to normal.\n\n1: Head for the exit \n2: Search for more writings\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou head for the exit when the mysterious person shows up again! But this time he says 'Peace be with you'.\n");
							printf("As he says that you fall to your kness and head on the ground. After some time, you notice that he has left again.\n");
							printf("You get up and wonder who this person is.\n\n1: Recollect at the fireplace \n2: Head for the exit \n\nSelect your choice:  ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou recollect your thoughts at the fireplace and enter into a mindless craze of deciphering the meaning of all of this.\n");
								printf("If only you knew more...\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit with an impression of who that person was.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou attempt to search for more writings as you saw previously on the walls, and find one more writing.\n");
							printf("This writing says 'He is risen' and that is all. You suddenly see a bright light that is glowing in the midst of the room\n");
							printf("\n1: Follow the glowing light\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to following the glowing light, but it goes through the walls meaning that you can't follow pursuit.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to head over to the exit, but as you approach it, the door vanishes.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou try to find an exit door, but as you brush your hand against the walls no doorknob is present\n");
						printf("nor is there a latch or hidden door you can push as much as you try. After some attempts you give up\n");
						printf("You start to wonder who was that person that blinded you in the first place.\nYou then hear a latch open up, and from it a stream\n");
						printf("of fresh spring water pours down into a shaft that opened simultaneously\n\n1: Drink from the water\n2: Look into the shaft\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nWith your hands you grab some water and drink from it. It is the most refreshing water you have ever tasted.\n");
							printf("You wish you take some with you, but alas you can't.\n\n1: Grab one last handful of water\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou grab one more handful of water and find yourself refreshed and satisfied.\n");
								printf("You hear an echo of someone saying 'My water satisfies the soul'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit with the easing noise of the stream in your ears.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{	printf("\nYou decide to ignore the water and look into the shaft and to your surprise, you see nothing but just the stream flowing downward.\n");
							printf("\n1: Drink from the water\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to drink a little bit of water and hear the echo of someone saying 'Come taste and see'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit, still wondering if that water tasted good.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}
				else if (choice == 4)
				{
					printf("\nYou walk past the table and go towards the fireplace and stare into it quite closely.\n");
					printf("You notice there is a paper burning with the writing 'It is finished'.\n");
					printf("\n1: Try to reach for the paper\n2: Turn back to the rest of the room\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou try to reach for the paper and quickly snatch it out of the fire, although your hand does burn in the process\n");
						printf("As you examine the paper, it begins to restore itself back to its original state\n Interestingly enough there is no additional writing\n");
						printf("\n1: Put it back in the fire\n2: Save it in your pocket\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou place the paper back into the fire and you notice that the fireplace begins to illuminate the room even further.\n");
							printf("But you notice that it starts to get out of control. The fire begins to grow and grow. You are not sure what to do.");
							printf("\n1: See what you can find to extinguish the fire\n2: Quickly find the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou try to find what you can to extinguish the fire but realize there is only fuel for the fire.\n");
								printf("The flames begin to enclose you all around in the room. But out of nowhere all the flames extinguish.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou quickly find the exit, but the door is locked! The flames begin to enclose you all around in the room.\n");
								printf("But out of nowhere all the flames extinguish.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou save the piece of paper in your pocket to think about it later.\n\n1: Go to the table\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over to the table and realize the piece of paper you saved in your pocket is gone and is now the paper at the table.\n");
								printf("You choose to pick it up again and save it somewhere more secure.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit but stumble upon a curious flashlight that was on the path, so you get back up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						
					}
					else
					{
						printf("\nYou decide to not grab the paper and turn around to the room. It has not changed much, but the mysterious person is gone\n");
						printf("But before you there is a piece a paper, similar to the one in the fire and it is blank.\n\n1: Grab the paper\n2: Head to the table\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou grab this particular piece of paper that says 'I am Who I am' and conserve it in your pocket.\n\n1: Head over to the table\n");
							printf("2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over for the exit, but as you touch the doorhandle, the door disentigrates exposing the wall behind it.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit but stumble upon a curious flashlight that was on the path, so you get back up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou decide to head over to the table but it is empty now, so it seems like the candle and book were taken away.\n");
							printf("So, now you are just left wondering where to head next.\n\n1: Go back to the fireplace\n2: Head over the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over to the fireplace, but notice that the paper that was on the table is on the floor. You lean down to conserve it.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit without worring too much about those pieces of paper.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}
				else
				{
					printf("\nYou run past the table and fireplace, and make it to the door. You notice that a sign above says '(John 3:16)'\n");
					printf("You then try to reach for the doorknob but once you turn it, it is locked! So you turn around but the room\n");
					printf("has completely changed! It is as if you were outside, as you see a bright light as the sun, a river running through\n");
					printf(",you even hear birds chirping\n\n1: Lie down on your back and relax\n2: Try to touch the walls\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;
					

					if (choice == 1)
					{
						printf("\nYou decide to take a break from the long day you have had before coming to this place.\nA nice breeze in the air fills you with peace\n");
						printf("You wish that there were some sort of nice cold drink to take a sip as well. You then hear some glass make contact with the table\n");
						printf("\n1: See what that is about\n2: Close your eyes\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou see what that sound was about and notice a nice glass of lemonade on small wooden stool.\n You take a sip and you are");
							printf("refreshed from the desire you once had.\n\n1: Ask if anyone is there\n2: Finish your drink\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou ask if anyone is there and you hear someone say 'I have attended to you this whole time'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou finish your drink and decide it is time to leave, when a clear exit door appears before you.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou close your eyes and eventually fall asleep for a while. It is actually nighttime when you end up waking up.\n");
							printf("You see that a drink was placed on the wooden stool.\n\n1: Take a sip from the drink\n2: Sleep for another bit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to take a sip from the drink and end up drinking all of it. A clear exit door then appears before you.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
							else
							{
								printf("\nYou sleep around for another bit and wake up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou try to touch the walls but it seems like there is no boundary, so you try to see how far you can walk\n");
						printf("The more you walk though, the more you get worried of losing track of where the original room was\n");
						printf("You decide to walk back from the direction you came from originally\n\n1: Lie down on your back\n2: Meditate\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou lie down on your back after you tried searching and fall fast asleep. You start to have a dream...\n");
							printf("In this dream, you find yourself in a lush pasture with many flocks of sheep. You can't fathom on what to do.\n");
							printf("\n1: Try to herd the sheep\n2: Explore the environment around you\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou try to herd the sheep but they all seem to go their own way. You then hear a loud and sharp whistle.\n");
								printf("The sheep all of the sudden start to line up horizontally. You then see the shepherd of the flock appear.\n");
								printf("The shepherd says 'My sheep hear my voice'.\nYou awake from your dream suddenly.\n");
								userRoom50Ending1Path(choicesMade, index);
								
							}
							else
							{
								printf("\nYou decide to explore the environment around and walk across the vast pasture.\n");
								printf("However, you notice that at some point you reach a boundary due to some high moutains, ones that you can't cross.\n");
								printf("You wake up and find a clear exit door that appeared at some point.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou meditate in the tranquility that surrounds you, thinking about how all these things have come to pass.\n");
							printf("You certainly know that something or someone has been doing these things. But now you think about what else is to come.\n");
							printf("At the thought of this, you wish you could stay longer.\n\n1: Stay longer\n2: Rise\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to stay a little longer and meditate further. Once you open your eyes, you notice the room is back to normal.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to get up and after some scoping, you see a clear exit door.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}

				break;	
			}
			case 51:
			{
				puts("room51");
				room51game();
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
			case 56:
			{
				puts("Entering Room 56...");
                		alexGameRoom56();
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
				room57G(name);
				break;
			}


			case 58:
			{
				puts("room58");
				stevenFirst();
		
				break;
			}

			case 60:
			{
				puts("room60");
				carlosroom60();
				
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
				brentRoom();
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
void user14room(void)
{
	char input[4];     
    int yesCounter = 0;  

    // Event 1
    printf("As you enter the room. You find yourself along a path with only one way to go. Enter 99 at any point to exit. \nYou find an injured donkey. Help it as best as you can? (yes/no): ");
    scanf("%s", input);
    
    if (strcmp(input, "99") == 0) 
    {
    printf("You have chosen to exit the game early.\n");
    return;  
    }
    else if (strcmp(input, "yes") == 0) 
    {
        yesCounter++;
    }

    // Event 2
    printf("Event 3: You're thirsty and find a seemingly clean pool of water near an ogre's home. Do you drink it? (yes/no): ");
    scanf("%s", input);
    if (strcmp(input, "99") == 0) 
    {
    printf("You have chosen to exit the game early.\n");
    return; 
}
    else if (strcmp(input, "yes") == 0) 
    {
        yesCounter++;
    }
    // Event 3
    printf("You find yourself in a room full of treasure. Take as much treasure as you can? (yes/no): ");
    scanf("%s", input);
    if (strcmp(input, "99") == 0) 
    {
    printf("You have chosen to exit the game early.\n");
    return;  
}
    else if (strcmp(input, "yes") == 0) 
    {
        yesCounter++;
    }

    // Event 4
    printf("You find a man dehydrated and on the brink of death. Share some of your limited water with him?: ");
    scanf("%s", input);
    if (strcmp(input, "99") == 0) 
    {
    printf("You have chosen to exit the game early.\n");
    return; 
}
    else if (strcmp(input, "yes") == 0) 
    {
        yesCounter++;
    }
    
     // Event 5
    printf("You suddenly find yourself in a mythical land. Seemingly barren. As you wander along, you come across a colony of mythical miniature creatures. \nThey seem completely unaware of your presence. You exist outside of their reality and cannot interact with them in any way. A sign is posted reading: If you roll this die and roll under 10, you will be set free. \nHowever if you roll 10 and up, all the creatures will die. Do you leave the die alone?: ");
    scanf("%s", input);

    if (strcmp(input, "99") == 0) {
        printf("You have chosen to exit the game early.\n");
        return;
    }

    if (strcmp(input, "yes") == 0) {
        yesCounter++;
        printf("You leave the die untouched and move on. \n");
    } else {
        // Roll a 20-sided die
        int dieRoll = (rand() % 20) + 1;
        printf("You roll the dice. It lands on %d.\n", dieRoll);

        if (dieRoll < 10) {
            printf("You roll under 10. The creatures become aware of your prescence and are disgusted by your existence. You are not set free regardless of the outcome\n");
        } else {
            printf("All the creatures burn alive as they shout your name. You are disguted with yourself.\n");
        }
    }
    
      int sacrificeCounter;

printf("A ghast appears in front of you. It asks how many people you'd be willing to sacrifice in order to obtain freedom. Enter a number between 1 and 10: ");
scanf("%d", &sacrificeCounter);

if (sacrificeCounter == 99) 
{
    printf("You have chosen to exit the game early.\n");
    return;
}

if (sacrificeCounter < 1 || sacrificeCounter > 10) 
{
    printf("Invalid input. You must enter a number between 1 and 10.\n");
} else 
{
    for (int i = 0; i < sacrificeCounter; i++) 
    {
        printf("You will forever be haunted by my soul!\n");
    }
}

    if(yesCounter >= 3)
    {
        printf("You soul is pure. Although you are back where you started, you feel a buff on yourself, invigorating you with extra luck.");
    }
        else printf("Your soul is corrupt. A -100 debuff has been applied to you. What have you learned about yourself today?");
        
        return;

}


void joshRoom4(void)
{
	printf("cscuser4 \n");
	int choices[5];
	int decision;
	int selection;
	int i;

	printf("\n You step into Room 4: Elder Scrolls V: The Skyrimer: Wild Hunt \n");

	for(int i = 0; i < 5; i++)
	{
		printf("\nWhat to choose? (%d of 5)\n", i + 1);
		printf(" 1) The tunnel forks into two paths ahead\n");
		printf(" 2) A giant, flowing river blocks your path\n");
		printf(" 3) A mountain guardian appears to defend its trail\n");
		printf(" 4) You encounter a princess slumbering on a glowing pedestal\n");
		printf(" 5) You spot a treasure chest buried in the sand ahead\n");

		do
		{
			printf("Choose a path(1-5): ");
			scanf("%d", &selection);
		}
		while(selection < 1 || selection > 5);

		switch(selection)
		{
			case 1: 
				printf("The tunnel forks into two paths ahead:\n");
				printf(" 1) Take the path on the left\n");
				printf(" 2) Take the path on the right\n");
				printf("Your choice: ");
				scanf("%d", &decision);
				if(decision == 1)
				{
					printf("You mindfully stealth along the left path.");
				}
				else
				{
					printf("You throw caution to the wind and sprint the path on the right.");
				}
				break;
			
			case 2:
				printf("A giant, flowing river blocks your path:\n");
				printf(" 1) Swim across\n");
				printf(" 2) Use nearby wood to build a raft\n");
				printf("Your choice: ");
				scanf("%d", &decision);
				if(decision == 1)
				{
					printf("The current is too strong, forcing you to go to the river's end with the taste of river in your mouth.");
				}
				else
				{
					printf("Your makeshift raft creaks, but continues to stay afloat. You manage the raft down the river.");
				}
				break;

			case 3:
				printf("\nA mountain gurdian appears to defend its trail!\n");
				printf("\n  /\\_____/\\\n");
				printf("   (  o   o  ) \n");
				printf("    \\  ^  // \n");
				printf("       |||||      \n\n");
				printf(" 1) Stay and defend your honor against the guardian\n");
				printf(" 2) Sprint away with your tail tucked\n");
				printf("Your choice: ");
				scanf("%d", &decision);
				if(decision == 1)
				{
					int outcome = rand() % 50;
					if(outcome < 10)
					{
						printf("You land a lucky blow on the guardian with a strike to its weak spot!");
					}
					else
					{
						printf("The guardian overwhelms you with a flurry of moves, you escape but are wounded and have a broken ego.");
					}
				}
				else
				{
					printf("You sprint away with your tail tucked\n");
				}
				break;

			case 4:
				printf("You encounter a princess slumbering on a glowing pedestal: \n");
				printf(" 1) Smooch the princess to awake her\n");
				printf(" 2) Leave her be and continue moving on\n");
				printf("Your choice: ");
				scanf("%d", &decision);
				if(decision == 1)
				{
					printf("She awakes from your kiss and turns into a giant river troll! She takes a bite out of you for not respecting consent.");
				}
				else
				{
					printf("You slowly walk around the obstacle, in fear of women.");
				}
				break;

			case 5:
				printf("You spot a treasure chest buried in the sand ahead of you:\n");
				printf(" 1) Break it open\n");
				printf(" 2) Move along\n");
				printf("Your choice: ");
				scanf("%d", &decision);
				if(decision == 1)
				{
					printf("Gold, jewels, and a deed to a nearby castle spill forth. You're rich and set for life!");
				}
				else
				{	
					printf("You get scared that the chest is made of wood and decide some secrets are best left untouched. You're safe and secure but you continue wondering what could have been.");
				}
				break;
			}
			choices[i] = decision;
			}
			{
				int score = 0;
				for(i = 0; i < 5; i++)
				{
					if(choices[i] == 1)
					{
						score += 10;
					}
					else
					{
						score += 5;
					}
				}
				printf("\nScore: %d\n", score);
				if(score > 40)
				{
					printf("You are as brave a hero as they come. Your name will echo amongst the greatest to ever do it!\n");
				}
				else if(score > 25)
				{
					printf("You were a valiant adventurer and have proven your worth!\n");
				}
				else
				{
					printf("Get braver, kid.\n");
				}
				printf(" You exit Room 4: Elder Scrolls V: The Skyrimer: Wild Hunt and return to the main menu. ");
			}
}


void dairasBrain(void)
{
        char userChoice;
        int choice;
        int leaver = 0;

                printf("\nTHANK YOU FOR COMING I NEED YOUR HELP\n");
                printf("I have to go run an errand real quick and since I trust you...\n");
                printf("I have a special task for you\n");
                printf("I will be back soon..\n\n");
                while(leaver != 99) // while loop
        {
                printf("c - to continue\t");
                scanf(" %c",&userChoice);

                if(userChoice == 'c')
        {
                printf("\nYou are now in charge of my 3 year old chubby bunny..\n");
                printf("                      /|      __\n");
                printf("*             +      / |   ,-~ /             +\n");
                printf("     .              Y :|  //  /                .         *\n");
                printf("         .          | jj /( .^     *\n");
                printf("               *    >-'~'-v'              .        *        .\n");
                printf("*                  /       Y\n");
                printf("   .     .        jo  o    |     .            +\n");
                printf("                 ( ~T~     j                     +     .\n");
                printf("      +           >._-' _./         +\n");


                printf("\nPLEASE DO NOT FEED HIM # STRICTDIET\n\n");
                printf("What should you do next?\n\n"); //one. feed it two. pet him gently three. play with him four. refill & clean his cage five. nothing because you hate bunnies
                printf("1. get settled and feed him\n");
                printf("2. pet him gently\n");
                printf("3. get settled and refill & clean his cage\n");
                printf("4. play with him since you see toys\n");
                printf("5. nothing because now you realized you hate bunnies\n");
                printf("(Reminder: you can press 9 at any time to EXIT)\n");
                scanf("%d", &choice);

                if (choice != 9)
                {
                printf("\n");
                response(choice);
                }
                else if (choice == 9)
                {
                printf("THANK YEWW FOR TAKING CARE OF MY BUNNY! C U SOON >.<\n");
                return;
                }

            }
        }
}
void response(int choice)
{
        srand(time(0)); // random number
                int choreList;
                char listOfChores[4][100] =
                {
                "cleaned his cage and bowls","cut his nails and as well broomed..thank yewww", "you refilled his hay and gave him strawberries","uhhh you kinda just stood there the whole time"};// array

                switch(choice)
                {
                        case 1:
                                printf("You try to feed him.....he thumps his feet angrily. Seems you didnt remember what i told you.... Atleast one of you can follow instructions\n\n");
                                break;
                        case 2:
                                printf("He seems to like you. YAY I knew to trust you\n\n");
                                break;
                        case 3:
                                choreList = rand() % 4;
                                printf("Today you did: %s\n\n", listOfChores[choreList]);
                                break;
                        case 4:
                                printf("you scatter the toy play cups and hide treats in them\n");
                                printf("He approaches intrigued...\n");
                                printf("He starts to stack the cups\n");
                                printf("You find this cute so you sit with him doing this until he gets bored\n\n");
                                break;
                        case 5:
                                printf("IT'S OKAY... you've noticed I started to knock on the door since I forgot my keys..\n\n");
                                printf("I AM BACK...finally\n");
                                break;
                }
}
// end of DairasBrain


void room12game(void)
{
	printf("cscuser12 :)\n");
}
void encounterPredator(char name[], int dangerType)
{
    char *dangers[] = {
        "a sneaky pack of velociraptors",
        "a towering T-Rex",
        "a swooping Pteranodon",
        "a lurking Dilophosaurus",
        "a charging Triceratops"
    };

    printf("\n%s encounters %s!\n", name, dangers[dangerType]);

    int reaction = rand() % 3;
    if (reaction == 0)
        printf("You evade just in time!\n");
    else if (reaction == 1)
        printf("You hide in thick foliage and hold your breath...\nIt works!\n");
    else
        printf("You distract it with a flare and run!\n");
}

void room3(void)
{
    char name[30];
    int steps = 0, health = 100, decision;
    srand(time(NULL));

    printf("Enter your name, dinosaur keeper: ");
    scanf("%s", name);

    printf("\nWelcome, %s. You're lost in the jungle after a containment breach.\n", name);
    printf("Your mission: survive the jungle and return to Camp Saurus.\n");

    while (health > 0 && steps < 5)
    {
        printf("\n%s's Health: %d | Progress to camp: %d/5\n", name, health, steps);
        printf("Choose your next move:\n");
        printf("1. Move through the dense jungle\n");
        printf("2. Climb a hill to scout\n");
        printf("3. Check your gear\n");
        printf("4. Hide and rest\n");
        printf("5. Try calling for help\n");
        printf("6. Give up and exit\n");

        scanf("%d", &decision);

        if (decision == 6)
        {
            printf("\nYou sit down and accept your fate... The jungle is quiet now.\n");
            break;
        }

        int danger = rand() % 5;

        switch (decision)
        {
            case 1:
                printf("\nYou push through thick vines...\n");
                encounterPredator(name, danger);
                health -= rand() % 15;
                steps++;
                break;
            case 2:
                printf("\nYou climb a rocky ridge to spot the camp...\n");
                if (rand() % 2)
                {
                    printf("You spot smoke! You're heading the right way!\n");
                    steps++;
                }
                else
                {
                    printf("The view is blocked by fog.\n");
                }
                break;
            case 3:
            {
                char *gear[] = {"flare gun", "medkit", "knife", "radio (broken)", "dino whistle"};
                printf("You check your pack:\n");
                for (int i = 0; i < 5; i++)
                    printf("- %s\n", gear[i]);
                printf("Using medkit to heal 10 health.\n");
                health += 10;
                if (health > 100) health = 100;
                break;
            }
            case 4:
                printf("\nYou find a bush to hide and rest...\n");
                health += 5;
                if (health > 100) health = 100;
                printf("Recovered some strength.\n");
                if (rand() % 3 == 0)
                {
                    printf("But a predator finds you while resting!\n");
                    encounterPredator(name, danger);
                    health -= rand() % 20;
                }
                break;
            case 5:
                printf("\nYou try the broken radio...\n");
                if (rand() % 4 == 0)
                {
                    printf("A faint signal responds: 'We’re coming for you, hang on!'\n");
                    steps += 2;
                }
                else
                {
                    printf("Static. Nothing...\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    if (health <= 0)
        printf("\nYou collapse... the jungle claims another victim.\n");
    else if (steps >= 5)
        printf("\nYou break through the trees and see Camp Saurus ahead!\nYou survived, %s!\n", name);

    printf("\nReturning to the main menu...\n");
}


void room30game(void)
{
	bool hasKey = false;
	bool keyFound = false;
	bool lookedOutWindow = false;
	bool hasSeenShip = false;
	bool superPower = false;

	char *bedroomEvents[] = {"Rummaging through your drawers, you find some of your old childhood toys.", "You look through your closet, and find a cool hat. You put it on.", "You look under your bed and a rat runs out at you!", "You find an old photo of yourself... standing outside this very house, but you don't remember this."};
	char *kitchenEvents[] = {"You open the fridge and find a bowl of moldy yogurt.", "Rummaging the kitchen drawers, you find some spoons and forks.", "You open the oven and find a cooked turkey. It looks delicious!", "You search the cupboards. Just empty glasses and plates."};
	char *basementEvents[] = {"You find a dusty box filled with some of your old clothes.", "You search some boxes, and find some family photo albums. They look normal enough...", "There's a mysterious hole in the wall, just big enough to put your hand through. You reach in and find... a crumpled piece of paper. You open it up and it reads: 'leave now'", "You search through some cabinets and drawers. You only find random junk."};

	int outcome = rand() % 2;
	int keyChance = rand() % 3;
	int chance;
	int choice;
	int subChoice;
	int foodChoice;
	int event;

	printf("\nThe door creaks open and you step into what looks like your house.\n");
	puts("The door shuts abruptly behind you.");
	puts("Everything is very familiar to you. The semlls, your living room, and even some family pictures sitting on the coffee table. You are home.");
	puts("You sigh in relief until you look out the window and realize, your house is floating in outer space.");
	puts("You think to yourself: this can't be real.");
	puts("There must be a way out of this... but how?");

	while(true)
	{
		printf("\nWhat will you do?\n");
		puts("1. Look out the window");
		puts("2. Open the front door");
		puts("3. Search the house");
		puts("4. Sit on the couch and wait");
		puts("5. Open the back door");
		puts("6. (Exit to main menu)");
		scanf("%d", &choice);

		bool keepSearching = true;

		switch(choice) 
		{
			case 1:
				if(!hasSeenShip)
				{
					printf("\nYou look out the window next to the front door and spot a small space craft heading your way.\n");
					puts("1. Signal it");
					puts("2. Hide");
					puts("3. Wave");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						if(outcome)
						{
							lookedOutWindow = true;
							puts("The ship flashes back a friendly signal, approaches the house, and then slowly descends behind the house.");	
						}
						else
						{
							puts("The ship turns away abruptly. Maybe you scared them off...");
						}
					}
					else if(subChoice == 2) 
					{	
						puts("You hide for a couple minutes. When you look back out the window, the space craft is gone.");
					}
					else if(subChoice == 3)
					{
						if(outcome)
						{
							puts("You wave. The ship sees you and approaches the house. Before you know it, they fire at the house and you jump for cover.");
							puts("You hide behind the couch and after a while the shooting dies down and you hear the ship fly off.");
							puts("You get up and look around. The house is in the same condition as if nothing happened. Did you just imagine all of that?");
							puts("Well at least you're okay.");
						}
						else
						{
							puts("You wave. The ship sees you and flies off.");
						}
					}
					else
					{
						puts("You hesitated for too long. The opportunity has passed.");
					}
					
					hasSeenShip = true;
				}
				else
				{
					printf("\nYou look out the window again and see nothing but darkness... what else could be out there?\n");
				}

				break;
			case 2:
				if(hasKey)
				{
					puts("\nYou approach the door and insert the key into the lock. It clicks open! You swing the door open, and see a dark hallway.");
					puts("This doesn't make any sense... aren't we in outer space?\n");
					puts("What will you do?");
					puts("1. Walk through");
					puts("2. Turn back");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						puts("You walk through. You keep walking for a couple minutes until you can barely see the light seeping from the door behind you...\n");
						puts("What do you do?");
						puts("1. Keep going");
						puts("2. Turn back");

						scanf("%d", &subChoice);

						printf("\n");

						if(subChoice == 1)
						{
							puts("You continue walking for a couple more minutes until...\n");
							return;
						}
						else
						{
							puts("You turn back and return to the entrance of the house.");
						}
					}

					else
					{
						break;
					}
				}
				else
				{
					puts("\nYou approach the door and attempt to open it. It's locked tight, but there's a keyhole. Maybe there's a key somewhere in the house?");
				}

				break;

			case 3:
				while(keepSearching)
				{
					printf("\nYou want to search the house.. where should you go?\n");
					puts("1. Your bedroom");
					puts("2. The kitchen");
					puts("3. The basement");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						event = rand() % 4;
						puts("You search your bedroom...");
						if(keyChance == 0 && !keyFound)
						{
							puts("You look behind your bed, you find a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(bedroomEvents[event]);
							puts("Nothing else here.");
						}
							
						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");
						scanf("%d", &subChoice);

						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else if(subChoice == 2)
					{
						event = rand() % 4;
						puts("You search the kitchen...");
						if(keyChance == 1 && !keyFound)
						{
							puts("You look under the kitchen table, and you find something taped there; it's a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(kitchenEvents[event]);
							puts("Nothing else here.");
						}
						
						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");
							
						scanf("%d", &subChoice);
						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else if(subChoice == 3)
					{
						event = rand() % 4;
						puts("You search the basement...");
						if(keyChance == 2 && !keyFound)
						{
							puts("You search some filing cabinets. There's one folder with something in it; a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(basementEvents[event]);
							puts("Nothing else here.");
						}

						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");

						scanf("%d", &subChoice);
						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else
					{
						break;
					}
				
				}
				
				break;

			case 4:
				printf("\nYou choose to sit and wait. Who knows, maybe something will happen...\n");
				chance = rand() % 100;
			
				if(chance == 0 && !hasKey) {
					puts("*clink* - something just fell from the ceiling and landed in your lap: a key!");
					keyFound = true;
					hasKey = true;
				}
				else
				{
					puts("Some time passes and nothing happens. The couch is not very comfortable, you feel more tired.");
					
					printf("\nWhat next?\n");
					puts("1. Watch TV");
					puts("2. Get something to eat");
					puts("3. Take a nap");
					puts("4. Something else");
					scanf("%d", &subChoice);

					if(subChoice == 1)
					{
						puts("You turn the TV on and there's nothing but static.");
						puts("You watch the static for a while before getting bored.");
					}
					else if(subChoice == 2)
					{
						printf("\nYou go to the kitchen and find a couple of options:\n");
						puts("1. Turkey");
						puts("2. Spoiled yogurt");
						puts("3. Glowing water");
						puts("4. Nothing sounds good");
						scanf("%d", &foodChoice);
						printf("\n");

						if(foodChoice == 1)
						{
							puts("You eat the turkey. That was delicious. You feel much more energized.");
						}
						else if(foodChoice == 2)
						{
							puts("You eat the spoiled yogurt. Maybe you shouldn't have done that... You feel queasy.");
						}
						else if(foodChoice == 3)
						{
							superPower = true;
							puts("You drink the water. You feel fine, but somethings different...");
						}
						else
						{
							break;
						}
					}
					else if(subChoice == 3)
					{
						puts("You take a quick nap. Hopefully nothing bad happnens while you're asleep...");
						puts("You wake up after a while and feel well-rested. Everything seems to be okay.");
					}
					else
					{
						break;
					}

				}

				break;

			case 5:
				printf("\nYou approach the back of the house and attempt to open the door.\n");

				if(lookedOutWindow && hasKey)
				{
					puts("You insert the key and the door clicks open.");
					puts("You step out to find the space craft with it's hatch open...");
					puts("Maybe this is your chance to escape.\n");
					
					puts("Will you enter the space craft or head back into the house?");
					puts("1. Enter the space craft");
					puts("2. Head back into the house");

					scanf("%d", &subChoice);

					printf("\n");

					if(subChoice == 1)
					{
						puts("You approach the open hatch and walk up the stairs. It's pitch black and you feel a cold chill coming from inside.");
						puts("Just as you take your first step inside a bright light flashes you and...\n");
						return;
					}
					else
					{
						puts("You don't want to risk anything. You turn and go back inside the house.");
						break;
					}
				}
				else if(hasKey)
				{
					puts("You insert the key, but it doesn't budge. Maybe this key opens a different door.");
				}
				else
				{
					puts("The door is locked. Maybe there's a key lying somewhere around the house.");
				}

				break;

			case 6:
				puts("Leaving room 30...\n");
				return;

			default:
				printf("\nInvalid choice. Try again.\n");
				break;
		}

	}

	return;

}

void cameronDOOMFn(void)
{
	printf("cscuser7/ Cameron");
}

void room34game(void)
{
    const char *actions[5] = {
        "Train with the warhammer",
        "Drink a strength potion",
        "Fight a goblin",
        "Challenge the ogre boss",
        "Rest and regain stamina"
    };

    int decision = 0;
    int strength = 5 + rand() % 6; // Start with 5-10 strength
    int stamina = 10;
    int loopCounter = 0;

    printf("\nWelcome to Room 34: Medieval Gym of Might!\n");
    printf("You must grow stronger to face the monsters ahead.\n");

    while (loopCounter < 5) {
        printf("\nYour current strength: %d | Stamina: %d\n", strength, stamina);
        printf("Choose your training/fighting action (%d/5):\n", loopCounter + 1);
        for (int i = 0; i < 5; i++) {
            printf("%d. %s\n", i + 1, actions[i]);
        }

        scanf("%d", &decision);

        switch (decision) {
            case 1:
                printf("You swing the heavy warhammer repeatedly!\n");
                strength += 2;
                stamina -= 2;
                break;
            case 2:
                printf("You chug a glowing strength potion.\n");
                strength += rand() % 4 + 1;
                break;
            case 3:
                printf("You fight a goblin with fierce roars!\n");
                if (strength > 8) {
                    printf("You crush the goblin effortlessly.\n");
                } else {
                    printf("You barely survive, but gain fighting experience.\n");
                    strength += 1;
                    stamina -= 1;
                }
                break;
            case 4:
                printf("You charge the ogre boss!\n");
                if (strength > 12) {
                    printf("You SLAY the ogre boss in a glorious battle!\n");
                } else {
                    printf("The ogre tosses you aside. You live... barely.\n");
                    stamina -= 3;
                }
                break;
            case 5:
                printf("You meditate and stretch.\n");
                stamina += 3;
                break;
            default:
                printf("Invalid choice, try again.\n");
                continue;
        }
        loopCounter++;
    }

    printf("\nYou’ve completed your gym training. Time to move on to new adventures.\n\n");
}

void room59game(void)
{
	printf("%s\n", "cscuser59");
}



void kobesRoom(void)
{
	printf("CSCUSER24\n");
}

void room57G(char *name)
{
	printf("\n%s, you enter and all you find is a table with a 6 sided dice with a paper next to it. It reads: \n", name);
	sleep(2);
	printf("***Behold adventurer! You will now embark on a thrilling and harrowing journey to claim \ntreasure of " 
			"your wildest dreams! Make careful decisions because one wrong move could be the end for you, "  
			"stay safe and hope you have some luck...***\n");
	sleep(2);
	printf("\nAfter reading, you wonder what to do next as you're looking at the dice. There are no instructions " 
			"or any sort of description.\nYou look back and see that the door you came in from has disappeared "
			"and all there is left is a wall.\nRealizing the only way out is to go through with "  
			"the adventure, you pick up the dice to throw.\n");
	sleep(4);
	printf("\nSuddenly, a floating screen appears in front of you.\nIt reads: ***Dice roll dictates your starting class and weapon.\nPossible classes:\n"
			"1:WARRIOR(SWORD)\n2:ARCHER(BOW)\n3:MAGE(STAFF)\n4:ROGUE(DAGGERS)\n5:BERSERKER(AXE)\n6:BRUISER(HAMMER)\n\n" "You only have 1 reroll. " 
			"You can choose to reroll or stay with the result. Continue.***\nWith that, you roll the dice. " 
			"Press Enter to continue...");
	getchar();
	getchar();
	srand(time(NULL));
	char reroll;

	int diceResult = (rand() % 6) + 1;
	do 
	{
		printf("Dice result: %d \nReroll?(Y/N): ", diceResult);
		scanf(" %s", &reroll);
		reroll = toupper(reroll);
	} while (reroll != 'Y' && reroll != 'N');
	
	if (reroll == 'Y') 
	{
		diceResult = (rand() % 6) + 1;
		printf("You chose to reroll.\nNew result: %d\n", diceResult);
	} else {
		printf("No reroll. Continuing...\n");	
	}

	sleep(2);

	printf("\n\nA screen appears...\nIt shows your health and inventory space\n-----------------------------------------\nHEALTH: 100\n"
			"INVENTORY: [ ] [ ] [ ] [ ] [ ]\n-----------------------------------------\n\n\n");
	int playerHealth = 100;
	char *inventory[5] = {"", "EMPTY", "EMPTY", "EMPTY", "EMPTY"};
	char ability[20];
	
	switch(diceResult)
	{
		case 1:
			printf("Your number was 1.\nDesignated class: [WARRIOR]\nYou have received: SWORD\n"
					"Abilities: OVERHEAD SLASH\n");
			inventory[0] = "Sword";
			strcpy(ability, "OVERHEAD SLASH");
			break;
		case 2: 
			printf("Your number was 2.\nDesignated class: [ARCHER]\nYou have received: BOW\n"
					"Abilities: HEAVY SHOT\n");
			inventory[0] = "Bow";
			strcpy(ability,"HEAVY SHOT");
			break;
		case 3:
			printf("Your number was 3.\nDesignated class: [MAGE]\nYou have received: STAFF\n"
					"Abilities: FIREBALL\n");
			inventory[0] = "Staff";
			strcpy(ability, "FIREBALL");
			break;
		case 4:
			printf("Your number was 4.\nDesignated class: [ROUGE]\nYou have received: DAGGERS\n"
					"Abilities:  BACKSTAB\n");
			inventory[0] = "Daggers";
			strcpy(ability, "BACKSTAB");
			break;
		case 5:
			printf("Your number was 5.\nDesignated class: [BERSERKER]\nYou have received: AXE\n"
					"Abilities: ANGRY CLEAVE\n");
			inventory[0] = "Axe";
			strcpy(ability, "ANGRY CLEAVE");
			break;
		case 6:
			printf("Your number was 6.\nDesignated class: [BRUISER]\nYou have received: HAMMER\n"
					"Abilities: SMASH\n");
			
			inventory[0] = "Hammer";
			strcpy(ability, "SMASH");
			break;

	}
	
	char dir[10];
	printf("\n\nAmazed, you hold out your hand on the first slot of your inventory where your weapon is:\n[%s] and you grab and pull. Your %s appears. ", inventory[0], inventory[0]);
	printf("With weapon in hand, you see a flash of light as you are teleported out of the room with the table\nand immediately appear in front of twin passageways."
			" A fork in the road.\nDo you go left or right?: ");
	scanf("%s", dir);
	if (strcmp(dir, "left") == 0) 
	{
		printf("Chose to go left...\nYou fell into a pit of lava and died!\n");
		playerHealth = 0;
		sleep(1);
		return;
	} else if (strcmp(dir, "right") == 0) 
	{
		printf("Chose to go right...\nYou encounter a monster gorilla wielding brass knuckles. There is no turning back. You have to fight!\n");
		printf("You use %s to kill the gorilla while sustaining some damage(-25), good job on surviving.\nYou received: DIAMOND\n", ability);
		playerHealth -= 25;
		printf("HEALTH: %d\n",playerHealth);
		inventory[1] = "Diamond";
		int i;
		printf("----INVENTORY----\n");
		for (i = 0; i < 5; i++) 
		{
			if(inventory[i][0] != '\0') 
			{
				printf("[%s] ", inventory[i]);
			}
		}
		printf("\n...");
		sleep(1);
	}
	
	char choice;
	printf("You move forward in and find a large room with a golden chest in the middle and a passageway behind it. You don't know if you should open it or keep it closed and continue...\n");
	printf("Do you open it?(Y/N): ");
	scanf("%s", &choice);
	choice = toupper(choice);
	
	if (choice == 'Y') 
	{
		printf("\nYou open the chest and received ENCHANTED AMULET(Raises your health to 150)\n");
		playerHealth = 150;
		printf("HEALTH: %d\n",playerHealth);
		inventory[2] = "Enchanted Amulet";
		printf("----INVENTORY----\n");
		int i;
		for (i = 0; i < 5; i++) 
		{
			if(inventory[i][0] != '\0') 
			{
				printf("[%s] ", inventory[i]);
			}
		}
		printf("\n...");
		sleep(1);

		sleep(1);
	} else 
	{
		printf("\nYou leave the chest alone and continue onwards, having felt that you may have missed out on something important...\n");
		sleep(1);
	}
	
	
	printf("\nAs you continue through the dungeonlike adventure, the air turns cold...\n");
	sleep(1);
	printf("A congregation of dark clouds appear in front of you and a hooded being emerges from them, effectively blocking your path\n");
	sleep(1);
	printf("It says: ***Answer me this, mortal...\n");
	sleep(1);
	
	printf("You're driving your car late at night. Suddenly, an old man and a child both step onto the road.\n" 
		"What do you hit first? Answer wisely, mortal***\n");
	getchar();
	char response[100];
	fgets(response, sizeof(response), stdin);
	
	int j;
	for (j = 0; response[j]; j++)
	{
		response[j] = tolower(response[j]);
	}

	if (strstr(response, "brakes") != NULL) 
	{
		printf("\nThe entity nods approvingly.\nENTITY:***Correct. Wow finally someone with some common sense\n");
		sleep(1);
		printf("Here you go.***\n It holds out its frail ghastly hand and in its palm, contains a key. You take it.\n");
		printf("RECEIVED: NECROTIC KEY\n");
		inventory[3] = "Necrotic Key";
		printf("----INVENTORY----\n");
		int t;
		for (t = 0; t < 5; t++) 
		{
			if(inventory[t][0] != '\0') 
			{
				printf("[%s] ", inventory[t]);
			}
		}
		printf("\n");
		sleep(1);
	} else
	{
		printf("\nThe entity scoffs in disgust.\n ENTITY:***You hit the brakes...psycho***\n");
		printf("It flashes its hand at you, making you feel weaker as it takes away 75 of your health and disappears.\n");
		playerHealth -= 70;
		printf("HEALTH: %d\n",playerHealth);
		sleep(2);
	
	}
	
	int spikeChoice;
	printf("Continuing onwards, you find a door. Hoping that this would be the last part of your adventure, you open it...\n");
	sleep(1);
	printf("The door reveals a large chamber. You see a line running from the right side to the left side of the room a couple feet ahead of you."
		"\nThere is another line a few feet as well in front of the door out of the room on the other side."
		"\nWhat could that mean, you wonder? As you approach the line, suddenly the room starts shaking.\n"
		"You stop in your tracks as the floor past the line drops, revealing a chasm of spikes rising. The chasm separates you from the door ahead.\n");
	sleep(1);
	printf("You look behind you and see the door behind you disappeared and a wall of spikes is closing in on you.\n\n");
	sleep(1);
	printf("You only have mere seconds to act. You have 3 choices: \n");
	printf("1) Attempt a running jump across the gap\n");
	printf("2) Shimmy carefully along a narrow ledge on the side wall\n");
	printf("3) Use the grooves on the wall high above the ledge to climb to cross the chasm\n");
	printf("What will you do?: ");
	scanf("%d", &spikeChoice);

	switch(spikeChoice) 
	{
		case 1:
			printf("\nYou try for a sprinting jump but can't clear the chasm, falling to a spikey death\n"
			"YOU DIED!\n");
			sleep(2);
			return;
		case 2:
			printf("\nYou inch sideways across the thin ledge on the wall, death gripping every crack you can...\n");
			sleep(1);
			printf("You slip once, cutting your arm and catching a spike on your foot but you make it across\n-20 HP\n");
			playerHealth -= 20;
			printf("HEALTH: %d\n", playerHealth);
			break;
		case 3:
			printf("\nYou grab hold of the grooves and pull yourself along above the chasm...\n");
			sleep(1);
			printf("Your arms scream in pain, eventually cutting your palms on some sharp grooves,"
				 "but you make it across without touching the floor\n-15 HP\n");
			playerHealth -= 15;
			printf("HEALTH: %d\n", playerHealth);
			break;
		default:
			printf("\nYou freeze in terror. The spikes don't freeze.\n");
			printf("YOU DIED!\n");
			sleep(2);
			return;
	}
	
	if(playerHealth == 0) 
	{
		printf("Your injuries were too severe!\n YOU DIED!");
		sleep(2);
		return;	
	} else
	{
		printf("\nYou survived - barely. You open the door to finally escape that hellhole.\n");
		printf("You received: BAG OF GOLD COINS \n");
		inventory[4] = "Bag of Gold Coins";
		printf("----INVENTORY----\n");
		int i;
		for (i = 0; i < 5; i++) 
		{
			if(inventory[i][0] != '\0') 
			{
				printf("[%s] ", inventory[i]);
			}
		}
		printf("\n...");
		sleep(2);
	}

	
	printf("Forging ahead, you find a giant, ivory door. This had to be the last room, right?\n");
	sleep(2);
	printf("Pushing the doors open, you find a big golden chest, a lot more welcoming than the last chest.\n");
	sleep(2);
	printf("Realizing this had to be the end, a screen appears.\n");
	sleep(2);
	printf("***Congratulations! You have successfully survived the dungeon. Open the chest to receive your reward!***\n");
	sleep(1);
	printf("\nYou open the chest. Within contains a ROPE! You can use it to get out of the dungeon.\n");
	printf("Yep. Your final reward is simply your FREEDOM! Oh, and your inventory also escapes with you transforming into real life items/currency.\n");
	printf("YOU WON and are transported back into reality.\n\n");
	sleep(3);

}

void user36Cafe(void)
{
        int choice;
        printf("Hello, traveller. Welcome to Cafe 36. What can I get you?\n");
        printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
        scanf("%d", &choice);
        while(choice != 99) //loop
        {
                switch(choice)
                {
                        case 1:
                        {
                                printf("You have chosen to see the menu\n");
                                char menu[45]; //won't check if actually on the menu
                                printf("Today's specials are eyeball basil soup, smoked trout, Cinnamon Roll Delight");
                                printf("\nHere is your menu.\n");
                                printf("\t\tMENU\n");
                                printf("Soups\t\t\tSandwiches/Salads\n");
                                printf("Goop Soup\t\tBeast Lettuce Tomato\n");
                                printf("Worm & Potato Soup\tDragons Horn\n");
                                printf("Soup of the day\t\tForaged Salad\n");
                                printf("\nDrinks\t\t\tDessert\n");
                                printf("Energy Brew\t\tMolten Lava Cake\n");
                                printf("Draught of living death\tWitches Sunday\n\n");

                                printf("What would you like? Please enter what you would like: ");
                                scanf("%s", menu);
                                printf("\nHere is your food. Enjoy! :)\n\n");
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");                                                               scanf("%d", &choice);
                                break;
                        }
			case 2:
                        {
                                int option;
                                printf("You have chosen to purchase potions\n");
                                printf("Enter 1 for an energy potion, 2 for sleeping draught, 3 for a poison so potent all you need is a single drop, and 4 for a healing potion: ");
                                scanf("%d", &option);
                                if(option == 1)
                                        printf("\nHere is your energy potion.\n");
                                if(option == 2)
                                        printf("\nHere is your sleeping draught.\n");
                                if(option == 3)
                                        printf("\nHere is your poison. Be careful with it, it's incredibly deadly. :)\n");
                                if(option == 4)
                                        printf("\nHere is your healing potion\n");
                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
 			case 3:
                        {
                                int number;
                                int quote;
                                printf("You have chosen a book quote\n");
                                printf("Please enter any random positive number: ");
                                scanf("%d", &quote);
                                switch(quote % 10)
                                {
                                        case 0:
                                                printf("\nNo matter how careful I am, eventually I'll make another misstep. I am weak. I am fragile. I am mortal. - The Cruel Prince, Holly Black\n");
                                                break;
                                        case 1:
                                                printf("\nOne never reaches home,' she said. 'But where paths that have an affinity for each other intersect, the whole world looks like home, for a time. - Demian, Hermann Hesse\n");
                                                break;
                                        case 2:
                                                printf("\nNot all who wander are lost. -The Riddle of Strider, J.R.R. Tolkien\n");
                                                break;
                                        case 3:
                                                printf("\nIn vain have I struggled. It will not do. My feelings will not be repressed. You must allow me to tell you how ardently I love and admire you. - Pride & Prejudice, Jane Austen\n");
                                                break;
					case 4:                                                                                                    
						printf("\nThere is no good word for the opposite of lonesome. One might be tempted to suggest togetherness or contentment, but the fact that these two other words bear definitions unrelated to each other perfectly displays why lonesome cannot be properly mirrored. It does not mean solitude, nor alone, nor lonely, although lonesome can contain all of those words in itself. Lonesome means a state of being apart. Of being other. Alone-some.” ― Blue Lily, Lily Blue, Maggie Stiefvater\n");
                                                break;                                                                                     
					case 5:                                                                                                    
						printf("\nThe more I read, the more I learn, the more I discover that I know nothing. - Frankenstein, Mary Shelley\n"); 
						break;
                                        case 6:
                                                printf("\nEven strength must bow down to wisdom sometimes. - Percy Jackson, Rick Riordan\n");
                                                break;
                                        case 7:
                                                printf("\nHope, it is the only thing stronger than fear. - The Hunger Games, Suzanne Collins\n");
                                                break;
                                        case 8:
                                                printf("\nI’m angry. I just don’t give in to it. Stuff happens all the time. What’d you call it? Outrageous. Outrageous stuff make you so mad you can just burn yourself up with it. You got to decide if the mad runs you, or you run the mad. - Body and Soul, Frank Conroy\n");
                                        case 9:
                                                printf("\nNowadays people know the price of everything and the value of nothing - The Picture of Dorian Gray, Oscar Wilde\n");                                                                               
 					default:                                                                                                   
						printf("\n Just keep swimming. - Dory\n"); //this one shouldn't work, i think
                                                break;                                                                             
				}                                                                  
                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;                                                                                     
			}
			case 4:
			{
                                int riddle;
                                printf("You have chosen a riddle\n");
                                printf("I am four times as old as my daughter. In 20 years' time I shall be twice as old as her. How old am I now?");
                                scanf("%d", &riddle);                                                                              
				if(riddle == 40)
                                        printf("Correct! I am forty and my daughter is ten. Good Job! :)\n");
                                else                                                                                                       
					printf("That is incorrect. Better luck next time.\n");

                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
			case 5:
                        {
                                int randy;  //random
                                int reaction[] = {1,2,3}; //array
                                int choose;
                                printf("You have chosen to ask for a hug\n");
                        	randy = rand() % 5; // 0 - 4
                                choose = rand() % 2; // 0-2 in array

                                if(randy == reaction[choose])
                                        printf("You may have a hug :)\n");
                                if(randy < reaction[choose])
                                        printf("I'm sorry, I don't want to hug you...\n");
                                if(randy > reaction[choose])
                                        printf("Come here, sugar, you remind me of my grandkid!\n");
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
                        default:
                        {
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);

                        }

                }
        }
}


void stevenFirst(void)
{
	printf("Steven >_< \n");
	int coins = 420;
    	char inventory[2][20] = {"Iron Sword", ""};
    	int decision;
    	bool exitRoom = false;
    	char *itemsInRoom[3] = {"Notch Apple", "Torch", "Diamond"};
    	bool itemTaken[3] = {false, false, false};
    	int trapTriggered = rand() % 2; // 0 or 1

    	printf("You enter Steven's Evil Lair: A dim chamber with walls made out of mossy cobblestone.\n");
    	printf("There are some items scattered, and strange noises echo around.\n");

    	while (!exitRoom) {
        	printf("\nWhat do you want to do?\n");
        	printf("1: Look around the room\n");
        	printf("2: Pick up an item\n");
        	printf("3: Open the old wooden chest\n");
        	printf("4: Check Inventory\n");
        	printf("5: Leave through the door\n");
        	printf("Enter your choice: ");
        	scanf("%d", &decision);

        	switch(decision) {
            	case 1:
                	printf("You spot a Notch Apple, a Torch, and a Diamond.\n");
                	break;
            	case 2: {
			int itemChoice;
                	printf("Which item do you want to pick up?\n");
                	for (int i = 0; i < 3; i++) {
                    	if (!itemTaken[i])
                        	printf("%d: %s\n", i+1, itemsInRoom[i]);
                	}
                	scanf("%d", &itemChoice);
                	if (itemChoice >= 1 && itemChoice <= 3 && !itemTaken[itemChoice - 1]) {
                    		strcpy(inventory[1], itemsInRoom[itemChoice - 1]);
                    		itemTaken[itemChoice - 1] = true;
                    		printf("You picked up: %s\n", inventory[1]);
                	}
			else {
                    		printf("Invalid choice or item already taken.\n");
                	}
                	break;
            	}
            	case 3:
                	if (trapTriggered) {
                    		printf("A dart shoots out from the chest! You lose 100 coins.\n");
                    		coins -= 100;
                    		if (coins < 0) coins = 0;
                	} else {
                    		printf("You found 69 coins inside the chest!\n");
                    		coins += 69;
                	}
                	break;
            	case 4:
                	printf("Inventory:\n- %s\n", inventory[0]);
                	if (strlen(inventory[1]) > 0) printf("- %s\n", inventory[1]);
			// itemTaken means you took the item from the room so that means you have it 
			for (int u = 0; u < 3; u++)
			{
				if (itemTaken[u]) {
            				printf("- %s\n", itemsInRoom[u]);
        			}
			}
                	printf("Coins: %d\n", coins);
                	break;
            	case 5:
                	printf("You exit the room and return to the hallway...\n");
                	exitRoom = true;
                	break;
            	default:
                	printf("Invalid choice. Try again.\n");
		}
	}
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
	printf("Entering Room 50...\n\n");
}

void userRoom50Ending1Path(int choices[], int index)
{
	int choice;

	printf("A secret passage opens within the room, and so you decide to walk in it.\nAs you move foward, the passage closes, but many torches light up a long hallway.\n");
	printf("At the end of the hallway you see a door. As you advance a wall blocks you from advancing further.\nIt seems like you need to pass some trials. On the wall, the following phrase is written:\n");
	printf("Learned or Not Learned. There are two buttons indicating the two choices.\n\n1: Learned\n2: Not Learned\n\nSelect your choice: ");
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;
	
	if (choice == 1)
	{
		printf("\nYou hear a loud voice, saying 'Very well' and the wall slowly is lifted up allowing to advance a little further. Another wall falls down with the following phrase:\n");
		printf("Change or Never Change. There are two buttons indicating the two choices.\n\n1: Change\n2: Never Change\n\nSelect your choice: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou once again hear a loud voice saying 'You may proceed', and the wall is lifted up allowing you to exit through the door.\n");
		}
		else
		{
			printf("\nYou once again hear a loud voice saying 'I never do', and the wall is lifted up allowing you to exit through the door.\n");
		}
	}
	else
	{
		printf("\nAfter pressing the button, the wall rises slowly, allowing you to proceed. Suddenly, another wall blocks your path. This wall contains the phrase:\n");
		printf("Accept or Reject. There are two buttons indicating the two choices.\n\n1: Accept\n2: Reject\n\nSelect your choice: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou feel an intense sensation over your body for a brief moment and the wall slowly rises up, allowing you to exit through the door.\n");
		}
		else
		{
			printf("\nThe wall slowly rises up, allowing you to exit through the door\n");
		}
	}

	printf("\nYou exit the room with the idea that there is something far greater to this world than it may seem...\n\n");
	printf("ENDING 1: Enlightened\n");
	userRoom50Stats(choices);
}

void userRoom50Ending2Path(int choices[], int index)
{
	int choice;
	int door1 = (rand() % 100) + 1;
	int door2 = (rand() % 100) + 1;
	int door3 = (rand() % 100) + 1;
	int door4 = (rand() % 100) + 1;

	printf("\nSuddenly the room is now full of different doors, but you do not know which one to choose. You notice that a select few number of door have numbers.\n");
	printf("\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door1, door2);
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;	

	if (choice == 1)
	{
		printf("\nYou open door %d and notice that it leads to a large pit you would not dare go into. Better skip this one!\n", door1);
		printf("You try to open a different door this time.\n\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door3, door4);
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou open door %d and it leads you to a completely different room\n", door3);
		}
		else
		{
			printf("\nYou open door %d and see a key on the ground. You grab the key and proceed to open the door at the end of the hallway.\n", door4);
		}
	}
	else
	{
		printf("\nYou open door %d and see a very long corridor with an enourmous monster approaching your direction. You slam the door shut.\n", door2);
		printf("You would rather try your chances at another door.\n\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door3, door4);
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou open door %d and it directly leads to a completely differen room.\n", door3);
		}
		else
		{
			printf("\nYou open door %d and see a set of stairs to take which you unwillingly take. But this leads you to a completely different room.\n", door4);
		}
	}

	printf("\nYou exit the room with confusion. It seems that there was something more...\n\n");
	printf("ENDING 2: Unknown\n");
	userRoom50Stats(choices);
}

void userRoom50Ending3Path(int choices[], int index)
{
	int choice;

	printf("\nYou are ready to move on in your long journey for the exit is clear. What will lie ahead or is this the end?\n");
	printf("What do you hope for next in this journey?\n\n1: Peace\n2: Turmoil\n\nSelect your choice: ");
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;

	if (choice == 1)
	{
		printf("\nAs you hope for a peaceful future journey there are two images that come to your mind.\n");
		printf("The first one is of a luscious spring where a cool mist brushes over your face.\n");
		printf("The second is of a trail in the midst of a forest lit by fireflies with a cozy cabin at the end.\n");
		printf("\n1: Spring\n2: Forest Trail\n\nWhich appeals most?: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;
		
		if (choice == 1)
		{
			printf("\nThinking of the spring, brings a sensation of thirst in longing to drink of that water forever.\n");
		}
		else
		{
			printf("\nThinking of the trail and the cabin, brings a sensation of hunger in longing to eat well-prepared banquets from the fresh resources.\n");
		}
	}
	else
	{
		printf("\nAs you think about the challenges you look foward to you think of how you would tackle them.\n");
		printf("You could potentially tackle them with strategy or instinct.\n\n1: Strategy\n2: Instinct\n\nWhich appeals most?: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nThinking about strategies overwhelms you a little, perhaps there is a faster way to end this journey.\n");
		}
		else
		{
			printf("\nThinking about using your instincts reminds you of their shortcomings at times.\n");
		}
	}

	printf("\nYou exit the room with a sense of calm and peace...\n\n");
	printf("ENDING 3: Peaceful\n");
	userRoom50Stats(choices);
}

void userRoom50Stats(int choices[])
{
	printf("\nThese the choices you made: [");

	for (int i = 0; i < 6; i++)
	{
		if (i == 5)
		{
			printf("%d]\n", choices[i]);
		}
		else
		{
			printf("%d, ", choices[i]);
		}
	}

	printf("You exit the room after all, but your journey has just begun.\n\n");
}

void room31(void)
{
	//stats for the player
	int health = 70;         // player's HP
	int courage = 50;        // player's “morale” gauge
	int squire = 0;			 // player may get a squire
	int cursed = 0;          // player may get cursed

	//player may get random treasure at the end from this array.
	const char* loot[5] = {
		"Sword of Doom",
		"Eldritch Tome",
		"Tons of Gold",
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
	else if (health > 80 && courage < 40)
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
	//passphrase made of words I grabbed from a NYT Crossword puzzle @ 'https://www.xwordinfo.com/Crossword?date=7/31/2024'
        //prompts for puzzle path were taken from the same site
	char *passphrase[5] = {"BROADCASTER", "CLOSINGTIME", "CRAMPSUP", "LEGDAY", "HACK"};
        char userGuess[100]; //for 5 tries path
        char wordBank[5][30]; //player array for 5 puzzles path
        int randNum = rand() % 10 + 1; //Random number used to determine how player has to get passphrase
	
	printf("Upon entering the room, the door behind you locks shut.\n");
        printf("There is a small gap underneath the door through which water is slowly seeping.\n");
        printf("There are no windows and no other way to escape except for the door you came in through.\n");
        printf("The door can only be opened by entering a five-word passphrase into a screen beside it.\n");

	if(randNum >=1 && randNum <=5)//Guess in 5 tries, should be impossible without acces to src code
	{
		printf("\nYou step in front of the screen, it reads: \n");
                printf("\t5-word passphrase required. 5 attempts remaining.\n");
                printf("\tCase-sensitive: use UPPERCASE, single space between words\n");
                int userAttempts = 5;
                getchar();

		while(userAttempts > 0)//loop for user guesses & decrement after incorrect guesses
                {
                        printf("Attempt %d: ", 6 - userAttempts);
                        fgets(userGuess, sizeof(userGuess), stdin);
                        userGuess[strcspn(userGuess, "\n")] = 0;

                        if(strcmp(userGuess, "BROADCASTER CLOSINGTIME CRAMPSUP LEGDAY HACK") == 0)      //response to successful attempt
                        {
                                printf("The screen flashes green, reading:\n\tCorrect!\n");
                                printf("A hidden panel beside the door opens, revealing: Scuba gear!\n");
                                printf("The door opens and you may now leave Room 39.\n\n");
                                return;
                        }
                        else                                                                            //response to unsuccessful attempt
                        {
                                printf("The screen briefly flashes red, it reads:\n\t Incorrect.\n");
                        }
                        userAttempts--;
                }

		printf("The screen flashes red, reading:\n\t All attempts used. Passphrase was not guessed.\n");
                printf("The room continues to fill with water until it reaches the ceiling. Goodnight.\n");
                printf("Reviving... returning to room selection.\n\n");
                return;
	}
	else if(randNum >= 6 && randNum <= 10)//5 Puzzle questions
	{
		printf("\nYou step in front of the screen, it reads: \n");
                printf("\t5-word passphrase required. You will be given 5 prompts and 1 attempt to guess each word.\n");
                printf("\tEnter only ONE word per prompt.\n");
                printf("\tCase-sensitive: use UPPERCASE, no spaces\n");

		//BROADCASTER
                printf("Prompt 1: Television professional\n");
                printf("\tYour guess: ");
                scanf("%s", wordBank[0]);

		//CLOSINGTIME
                printf("\nPrompt 2: Not moving fast enough\n");
                printf("\tYour guess: ");
                scanf("%s", wordBank[1]);

                //CRAMPSUP
                printf("\nPrompt 3: Increases sharply\n");
                printf("\tYour guess: ");
                scanf("%s", wordBank[2]);

		//LEGDAY
                printf("\nPrompt 4: Gym session devoted to squats, dead lifts, etc.\n");
                printf("\tYour guess: ");
                scanf("%s", wordBank[3]);

                //HACK
                printf("\nPrompt 5: Expose the vulnerabilities of, in a way\n");
                printf("\tYour guess: ");
                scanf("%s", wordBank[4]);

		//for loop printing wordBank array
                printf("\n\nPassphrase Entered: ");
                for(int i = 0; i < 5; i++)
                {
                        printf("%s", wordBank[i]);
                        if(i < 4)
                        {
                                printf(" ");
                        }
                }

		//SEPARATE FROM REQUIREMENTS: Use of boolean function from '<stdbool.h>'to verify if user array 'wordBank' matches 'passphrase' array
                bool matching = true;
                for(int i = 0; i < 5; i++)
                {
                        if (strcmp(wordBank[i], passphrase[i]) != 0)
                        {
                                matching = false;
                                break;
                        }
                }

		if(matching)
                {
                        printf("\n\nThe screen flashes green, reading:\n\tCorrect!\n");
                        printf("A hidden panel beside the door opens, revealing: Scuba gear!\n");
                        printf("The door opens and you may now leave Room 39.\n");
                        return;
                }
                else
                {
                        printf("\n\nThe screen flashes red, reading:\n\t All attempts used. Passphrase was not guessed.\n");
                        printf("The room continues to fill with water until it reaches the ceiling. Goodnight.\n");
                        printf("Reviving... returning to room selection.\n\n");
                        return;
                }
	}
}

void HubertRoom(void)
{
	printf("Hubert: hnguyen296 \n");
}

void room25game(void)
{
	int choice25 = 0;
	int lives = 5;
	srand(time(NULL));
	while(lives > 0)
	{
		printf("You have %d lives left\n", lives);
		puts("You chose Room 25, good choice\n");
		puts("But I hope your swimming is good\n");
		puts("You have 3 pools to choose from\n");
		puts("1. Shallow, 2. Normal, 3. Deep\n");
		scanf("%d", &choice25);
		switch(choice25)
		{
			case 1:
			{
				puts("Shallow");
				puts("Perfect, you can stand in this water!");
				puts("You make your way to the end of the pool and make it to a completely empty room.");				
				puts("You see a door at the end of the room, and a ladder on the other side");
				puts("Do you 1. Climb up the Ladder, or 2. Walk out of the door: ");
				scanf("%d", &choice25);
				switch(choice25)
				{
					case 1:
					{
						int randy = (rand()%1)+1;
						puts("You went up the ladder and you're outside now but you don't know where.");
						puts("You are at a crossroads, Go 1.Left or Right:");
						scanf("%d", &choice25);
						switch(1)
						{
							case 1:
							{
								puts("HAH! You fell for it, Your life now depends on one choice.");
								puts("Take 1. Blue Pill or 2. Red Pill:");
								scanf("%d", &choice25);
								switch(choice25)
								{
									case 1:
									{
										puts("You Lost! The easiest shallow path is not the best\n");
										lives--;
											
									}
									break;
									case 2:
									{
										puts("You Lost, your life\n");
										lives--;
									}
									break;
								}
							}
							break;
						}
					}
					break;
					case 2:
					{
						puts("You went out of the door, but were met with a door out of a skyscraper. Goodbye World!\n");
						lives--;
					}
				}
				break;
			}
			case 2:
			{
				puts("Normal");
				puts("Perfect you can swim your way to the end of this");
				puts("You make your way to the end of the pool and see 2 slides to choose from");
                        	puts("1. A spiral slide with no light, or 2. A straight downward slide: ");
                        	scanf("%d", &choice25);
                        	switch(choice25)
                        	{
                                	case 1:
                                	{
						puts("You went down the slide and now must go through one of two doors");
						puts("A door starts pulling you in to it");
                                		int options[] = {-30, 130};
                                		int randy = (rand()%2);
						int choiceNew = options[randy];
						switch(choiceNew)
						{
							case -30:
							{
								puts("You have gone in to a land of freezing cold and will be gone soon, Goodbye.\n");
								lives--;
    							}
							break;
    							case 130:
    							{
        							puts("You have gone in to a land of burning hot and will be dehydrated soon, Goodbye\n");
    								lives--;
							}
							break;
						}
					}
					break;
					case 2:
					{
						puts("You make it down the slide and are met with a rabid dog staring at you!");
						puts("You love dogs, but don't love rabid ones");
						puts("Do you 1. Choose to be friendly and see what happens or 2. Attack it and run away after:");
						scanf("%d", &choice25);
						switch(choice25)
						{
							case 1:
							{
								puts("Being nice pays off, The dog leads you to your way out and you get to live your life again!\n");
								return;
							}
							case 2:
							{
								puts("The dog continues to chase you till you can't run any longer, Goodbye World.\n");
								lives--;
							}
							break;
						}
					}
					break;
				}
				break;
			}
			case 3:
			{
				puts("Deep");
				for(int i=0;i<5;i++)
				{
					puts("You start drowning! And You don't make it long.\n");
				}
				lives--;
				break;
			}
		}
	}

}

void jovannyFunction(int jovannyNum)
{
	//Unique Feature is here.
	//I am making an Array which can hold multiple strings, emotions
	//[Max number of strings],[Max length of each individual string]
	//joName is just a single string;
	//based on how well you did, you recieve an emotion as a score.
	char jovannyArray[7][11] = {"sad", "satisfied", "happy"};
	char joName[30] = "null";

        printf("Emotions are infectious.\n");
        printf("How well you did is based on the fruit retrieved.\n");

	if(jovannyNum<3)
	{                                        	        
		printf("You and child bear are feeling %s...\n", jovannyArray[0]);
	}

	if(jovannyNum<6&&jovannyNum>3)
	{
                printf("You and child bear are feeling %s.\n", jovannyArray[1]);
	}
	if(jovannyNum>=6)
	{
                printf("You and child bear are feeling %s!\n", jovannyArray[2]);
	}
	        
                printf("You have completed room42! Returning...\n");
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
    printf("\nOliver's Room\n");
    int choice = 0;
    srand(time(NULL));
    int random = rand() % 3 + 1;
    puts("Type 99 to exit game.");

    puts("Your body was destroyed and cloned into room 8!");
    puts("The room is well lit and you notice three vases on pedestals.");
    puts("The room is starting to warp! A ghastly voice tells you to choose a vase. Which vase do you choose?");
    printf("Hint: The random number is %d\n", random);
    printf("Please choose 1, 2, or 3: ");
    scanf("%d", &choice);
    if (choice == 99)
    {
        puts("The Emperor blesses you, guardsman!");
        puts("Returning to main menu...\n");
        return;
    }
    else if (choice < 0 || choice > 3)
    {
        puts("Number out of range, Please choose 1, 2, or 3:");
    }
    else if (choice == random)
    {
        room8part1();
    }
    else
    {
        puts("\nTHE VASE GREW TEETH AND ATE YOU!\n");
        sleep(2);
        room8game();
    }
}
void room8part1(void)
{
    int choice1 = 0;
    puts("\t\t\t\t\t\t+OPEN YOUR EYES+\n");
    puts("*You were teleported to a new land!*");
    puts("*You are greeted by an alien speaking perfect English. Something about a 'Greater Good'...*");
    puts("1. I'd like to know more!");
    puts("2. *Take the xenos' hand* Please get me out of here!");
    puts("3. Where are we?");
    printf("What do you say?\n");
    printf("Your choice: ");
    scanf("%d", &choice1);
    if (choice1 == 99)
    {
        puts("The Emperor blesses you, guardsman!");
        puts("Returning to main menu...\n");
        return;
    }
    else if (choice1 < 0 || choice1 > 3)
    {
        puts("Number out of range, Please choose 1, 2, or 3:");
    }
    else if (choice1 == 1)
    {
        puts("*You hear heavy, like REALLY HEAVY footsteps behind you*");
        sleep(2);
        puts("YOU SPEAK WITH XENOS! THE ONLY RESPITE FOR YOU IS THE EMPERORS MERCY!");
        puts("*You were blasted apart.*\n");
        sleep(2);
        room8part1();
    }
    else if (choice1 == 2)
    {
        puts("*The alien is obliterated in front of your eyes*");
        sleep(2);
        puts("WHY DID YOU GRAB THE XENOS' HAND!?!");
        puts("YOU MUST BE IN COLLUSION WITH THE XENOS! MAY THE EMPERORS MERCY REDEEM YOU!\n");
        puts("*You were blasted apart.*\n");
        sleep(2);
        room8part1();
    }
    else if (choice1 == 3)
    {
        int choice2 = 0;
        puts("\nThis used to be a paradise world...Follow me, I will take you somewhere safe.");
        puts("You notice two weapons in the vicinity; An alien rifle and a shovel.");
        puts("What will you do?\n1. Use the alien rifle.\n2. Use the shovel.\n3. Follow the alien.");
        while (choice2 < 1 || choice2 > 3)
        {
            printf("Choose 1, 2, or 3: ");
            scanf("%d", &choice2);
            if (choice2 < 1 || choice2 > 3)
            {
                puts("Number out of range, Please choose 1, 2, or 3:");
            }
        }
        if (choice2 == 1)
        {
            puts("*You attack the alien, instantly riping a hole through him*");
            puts("*You hear heavy footsteps come behind you*");
            sleep(2);
            puts("WELL DONE GUARDSMA....DID YOU USE A XENOS RIFLE? MAY THE EMPERORS MERCY GIVE YOU PEACE!");
            puts("*You were blasted apart*\n");
            sleep(2);
            room8part1();
        }
        else if (choice2 == 2)
        {
            puts("*You attack the alien, instantly delivering the Emperors Mercy.*");
            puts("*You hear heavy footsteps come behind you*");
            sleep(2);
            puts("WELL DONE KREIGSMAN! YOUR COMMISSAR WILL GIVE YOU EXTRA RATIONS TONIGHT!\n");
            sleep(2);
            room8part2();
        }
        else if (choice2 == 3)
        {
            puts("*You hear heavy, like REALLY HEAVY footsteps behind you*");
            sleep(2);
            puts("YOU SPEAK WITH XENOS! THE ONLY RESPITE FOR YOU BOTH IS THE EMPERORS MERCY!");
            puts("*You were both blasted apart*\n");
            sleep(2);
            room8part1();
        }
    }
}
void room8part2(void)
{
    int choice = 0;
    puts("\t\t\t\t\t\t+KEEP GOING+\n");
    puts("*You follow the giant robot who insists hes a man back to what looks like a bunker*");
    sleep(2);
    puts("THIS GUARDSMAN WILL BE GIVEN EXTRA RATIONS FOR HIS HEROIC ACTION IN THE NAME OF THE EMPEROR.");
    puts("Guardsman, take 2 rations and get ready for the next charge. This planet will be taken in the name of the Emperor.");
    puts("1. Take both rations.\n2. Take 3 rations.\n3. I'm not hungry actually.");
    printf("Your choice: ");
    scanf("%d", &choice);
    sleep(1);
    if (choice == 99)
    {
        puts("The Emperor blesses you, guardsman!");
        puts("Returning to main menu...\n");
        return;
    }
    else if (choice < 0 || choice > 3)
    {
        puts("\nNumber out of range, Please choose 1, 2, or 3:");
    }
    else if (choice == 1)
    {
        puts("\n\nTHE EMPEROR BLESSES YOU TODAY GUARDSMAN. YOU ARE TO RETURN TO THE BATTLE BARGE AND MEET THE EMPERORS FINEST.");
        puts("*You are taken to a what looks like a metal slab on the floor and instantly teleported to a massive spaceship*\n");
        room8part3();
    }
    else if (choice == 2)
    {
        puts("\n\n*After eating your 3 rations, you are told to charge your powerpack in anticipation of the charge.");
        puts("...");
        puts("GET DOWN! ARTILLERY BARRA------");
        puts("*The bombardment destroyed the bunker, alongside yourself*\n");
        sleep(2);
        room8part2();
    }
    else if (choice == 3)
    {
        puts("\n\nToo good for rations huh? AFFIX BAYONETS! THIS GUARDSMAN WANTS TO CHARGE EARLY!");
        puts("*You are placed on the frontlines. In the distance you see what looks like a mountain shift*");
        puts("FOR THE EMPEROR! CHAAAAAARGE!");
        puts("*You are frozen in place, a man with a cape and a red metallic eye looks at you from above*");
        puts("COWARD!");
        puts("*You have been executed for your hesitance in the charge*\n");
        sleep(2);
        room8part2();
    }
}
void room8part3(void)
{
    int choice = 0;
    puts("\t\t\t\t\t\t+THEY WILL BRING YOU TO ME+\n");
    puts("*You have been teleported to a baroque and dark spaceship surrounded by incredibly large men in blinding golden armor*");
    puts("*You are awestruck. You feel dread and the need to drop to your knees and avert your gaze*");
    puts("THE EMPEROR HAS REQUESTED YOUR PRESENCE GUARDSMAN. COME WITH US.");
    puts("1. Follow them.\n2. Follow them.\n3. Follow them. ");
    printf("Your choice: ");
    scanf("%d", &choice);
    sleep(1);
    if (choice == 99)
    {
        puts("The Emperor blesses you, guardsman!");
        puts("Returning to main menu...\n");
        return;
    }
    else if (choice < 0 || choice > 3)
    {
        puts("Please choose 1, 2, or 3:");
    }
    room8part4();
}
void room8part4(void)
{
    puts("\t\t\t\t\t\t+DECIDE+\n");
    puts("*The golden warrior leads you to a dark room*");
    puts("LOOK AND REACH INTO THE DARKNESS AND PULL OUT WHATEVER YOU FIND. HE HAS ASKED THIS OF YOU.");
    puts("*Feeling as though you have no choice, you do as you are told*\n");
    char *Array[] = {"\t\tA glowing shard", "\t\t\t\tA stone blade", "\t\t\tAn empty vial"};
    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++)
    {
        printf("%s\n\n", Array[i]);
    }

    srand(time(NULL));
    int selected = rand() % 3;
    sleep(2);
    puts("Reaching...");
    sleep(2);
    puts("Grasping...");
    sleep(2);
    puts("You pull out...");
    sleep(2);

    printf("%s\n\n", Array[selected]);

    switch (selected)
    {
    case 0:
        sleep(2);
        puts("\t\t\t\t\t\t+HOPE+\n");
        puts("*A blinding golden light shines on you*");
        room8part5(0);
        break;
    case 1:
        sleep(2);
        puts("\t\t\t\t\t\t+DEATH+\n");
        puts("*You see the golden warriors struggling*");
        puts("You... are to be... brought... before... him...");
        room8part5(1);
        break;
    case 2:
        sleep(2);
        puts("\t\t\t\t\t\t+CHANGE+\n");
        puts("*The golden giants kneel before you*");
        puts("We will deliver you safely to him.");
        room8part5(2);
        break;
    }

    puts("The Emperor blesses you, guardsman!");
    puts("Returning to main menu...\n");
    return;
}
void room8part5(int choice)
{
    puts("You are brought before what looks like a corpse.\nYou can feel a titanic energy. Infinite power resides on that throne.");
    switch (choice)
    {
    case 0:
        sleep(2);
        puts("*The shard is magically taken from your grasp*");
        puts("*The corpse begins to reconstruct itself. A tide of energy overwhelms the room.");
        puts("A golden barbarian king of old rises from the throne.\n");
        sleep(1);
        puts("\t\t\t\t\t+NOW WE WILL MAKE THEM OBEY+\n");
        break;
    case 1:
        sleep(2);
        puts("*You lose control of yourself. The golden warriors are pointing weapons at you, shaking and screaming in their armor.*\n");
        puts("\t\t\t\t\t+THEY WILL NOT HARM YOU+\n");
        puts("*You walk up to the corpse, blade in hand. Without thinking, you drive it into the corpses heart*\n");
        puts("\t\t\t\t\t*BLINDING LIGHT ENVELOPS THE ROOM*\n");
        sleep(1);
        puts("*As the room darkens, a single ember rises from the throne...*");
        break;
    case 2:
        sleep(2);
        puts("What am I to do with this vial?");
        puts("\t\t\t\t\t\t+AN OFFERING+\n");
        puts("To who?");
        puts("\t\t\t\t\t\t+YOU DECIDE+\n");
        puts("*The vial is taken and when returned, you notice a single drop of blood*");
        sleep(1);
        int x = 0;
        while (x != 1 && x != 2)
        {
            sleep(2);
            puts("1. Follow a faint voice. It speaks of power.");
            puts("2. Follow the familiar voice. It feels like hope.");
            printf("Your choice: ");
            scanf("%d", &x);

            if (x == 1)
            {
                puts("\n*You step into the dark, drawn by the faint voice.*");
                puts("It promises you the galaxy. You disappear from history... but not from legend.");
                sleep(1);
            }
            else if (x == 2)
            {
                puts("\n*You walk into the light, toward the familiar voice.*");
                puts("It feels like home.");
                sleep(1);
            }
            else
            {
                puts("Please choose 1 or 2.");
            }
        }
        break;
    }
    puts("\n\t\t\t\t\t\t+Thank you+");
    return;
}


void room29game(void)
{
	int userChoice = 0;
	printf("You chose room 29 and the door closes behind you.\n");
	printf("In front of you are three different colored doors.");
	printf("There is a green door on your left, an orange door straight ahead, and a yellow door on the right\n");
	printf("Select one of the doors to enter: 1.Green 2.Orange 3.Yellow: ");
	scanf("%d", &userChoice);

	if (userChoice == 1)
	{
		printf("\nYou choose the green door and enter the room.\n");
		printf("In the green, room there you are met with a ladder and stairs.\n");
		printf("You can select to use either the 1.Ladder or 2.Stairs.\n");
		scanf("%d", &userChoice);

		if (userChoice == 1)
		{
			int array[] = {0,1};
			int random = rand()%sizeof(array);

			if (random == 0)
			{
				printf("As you climb the ladder, it seems that it goes on forever.\n");
				printf("You being to become to fatigued, and begin to worry.\n");
				printf("The stress gets to you and your hand slips, and you fall back to the room from a massive height.");
				return;
			}

			else if(random == 1)
			{
				printf("Despite the long way up, you manage to climb the ladder and reach the top.\n");
				printf("You look back down and can't see the bottom of the ladder.\n");
				printf("However, there is another door in front of you. As you open it you realize you've made it out!");
				return;
			}
		}

		else if(userChoice == 2)
		{
			printf("As you take the stairs, you notice a reflection near the bottom of the stairs\n.");
				printf("You soon realize the room is flooding and the stairwell is filling up.\n");
				printf("You run back to the room depserately looking for a way out.\n");
				printf("You take a big breath as the room fills with water with no way out.\n");
				return;
		}
		
	}

	else if(userChoice == 2)
	{
		printf("\nYou choose the orange door and enter the room.\n");
		printf("As you enter the orange room, the door slams shut beind you as the room slowly beings to heat up");
		printf("You notice this room has a small heavy box that can be used.\n");
		printf("You can select to either 1.Break the window or 2.Break the door");
		scanf("%d", &userChoice);

		if (userChoice == 1)
		{
			printf("You grab the small box and throw it at the window.\n");
			printf("However, to your surprise the window doesn't break. The window seems to be reinforced.\n");
			printf("You begin to tire yourself out and the room reaches an unbearable heat as everything goes black.\n");
			return;
		}

		else if(userChoice ==2)
		{
			printf("You grab the small box and begin to hit the door.\n");
			printf("The door begins to budge ande eventually you create a hole in the door.\n");
			printf("You eventually make a hole through the door and try the same on the previous door.\n");
			printf("Eventually you break through the previous door as well and escape room 29.\n");
			return;
		}
	}
	else if(userChoice == 3)
	{
		printf("\nYou choose the yellow door and enter the room.\n");
		printf("The room is seemingly empty with nothing but a small light bulb illuminating the yellow room.\n");
		printf("Suddenly the walls of the room begin to move.\n");
		printf("As you begin to look for a way out, you realize you can't open the door from inside the room\n");

		for(int i = 0; i < 4; i ++)
		{
			printf("The walls continue to close in...\n");
		}
		printf("With no exit, you walls slowly crush you.\n");
		return;
	}
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

void FarStarTrader(void)
{
	printf("cscuser11\n");
}

void omarsUniqueFn(void)
{
		printf("\n=== THE ANCIENT KEYBOARD OF DESTINY ===\n\n");
	printf("As you enter Room 61, the heavy stone door slams shut behind you.\n");
	printf("Torches ignite along the walls, revealing an ancient chamber.\n");
	printf("In the center stands a pedestal with a mystical keyboard glowing with arcane runes.\n\n");

	printf("A ghostly voice echoes: \"Traveler, to escape this chamber, you must prove\n");
	printf("your worth by mastering the Keyboard of Destiny. Five trials await you.\"\n\n");

	printf("\"Each correct keystroke channels the ancient magic. Fail, and the consequences may be... unpleasant.\"\n\n");

	printf("You approach the keyboard, hands trembling slightly...\n\n");
	sleep(1); // Short dramatic pause

	char keys[] = {'a', 's', 'd', 'f', 'j', 'k', 'l', ';'};
	int numKeys = sizeof(keys) / sizeof(keys[0]);
	int score = 0;
	int round;
	int health = 3; // RPG health points

	// Clear input buffer before starting
	while (getchar() != '\n');

	for (round = 1; round <= 5 && health > 0; ++round) {
		int idx = rand() % numKeys;
		char target = keys[idx];
		char input[10];

		printf("\nTRIAL %d: The rune '%c' glows brightly on the keyboard!\n", round, target);
		printf("Your fingers hover over the keys. Press '%c' to channel its magic! > ", target);
		fgets(input, sizeof(input), stdin);

		// Remove newline if present
		if (input[strlen(input)-1] == '\n') input[strlen(input)-1] = '\0';

		// Check if input matches target
		if (strlen(input) == 1 && input[0] == target) {
			printf("\nThe rune flashes with brilliant light! Magic surges through the chamber!\n");
			printf("You feel power coursing through your veins as you successfully channel the ancient magic.\n");
			score++;

			// Different success messages based on the round
			switch(round) {
				case 1: printf("A spectral shield briefly materializes around you.\n"); break;
				case 2: printf("The temperature in the room grows pleasantly warm.\n"); break;
				case 3: printf("Ghostly butterflies flutter around the room in celebration.\n"); break;
				case 4: printf("A soothing melody begins playing from unseen instruments.\n"); break;
				case 5: printf("Golden light fills the chamber, and the air smells of honey and spice.\n"); break;
			}
		} else {
			printf("\nThe rune turns blood red and emits a painful shock!\n");
			printf("You pressed '%s' instead of '%c' - dark energy crackles around you!\n", input, target);
			health--;

			if (health > 0) {
				printf("The ghostly voice sighs: \"Disappointing. You have %d life force remaining.\"\n", health);
			} else {
				printf("The voice booms: \"You have failed the final challenge!\"\n");
			}
		}
	}

	printf("\n=== THE TRIALS CONCLUDE ===\n\n");

	if (health <= 0) {
		printf("Drained of energy, you collapse to your knees. The chamber grows dark...\n");
		printf("Just as you fear the worst, a hidden door opens, revealing a passage back to the main hall.\n");
		printf("The voice speaks one final time: \"You survive... barely. Perhaps you will return stronger.\"\n");
	} else if (score == 5) {
		printf("The keyboard hums with power as all five runes glow in perfect harmony!\n");
		printf("\"EXCEPTIONAL!\" the voice booms. \"Few have mastered all trials of the Ancient Keyboard.\"\n");
		printf("A secret compartment opens, revealing a small treasure chest with mystical artifacts.\n");
		printf("You take a moment to rest before returning to your journey, enriched by this experience.\n");
	} else {
		printf("The ancient keyboard powers down, the runes fading to a soft glow.\n");
		printf("\"You have passed %d of the 5 trials,\" the voice intones. \"Not perfect, but acceptable.\"\n", score);
		printf("A door slides open in the wall, allowing you to continue your adventure.\n");
	}

	printf("\nYou leave Room 61 behind, carrying the memory of the Ancient Keyboard of Destiny.\n");
	printf("May your fingers be nimble in your future encounters, traveler...\n\n");
}
void AzizHaouchineFn(void)
{
	printf("Aziz\n");
	// Arrays to store story elements
	char* forestLocations[] = {"Dense Woods", "Misty Clearing", "Ancient Ruins", "Underground Cave", "Enchanted Lake"};
	char* companions[] = {"a wise old owl", "a mischievous fox", "a loyal wolf", "a magical butterfly", "none"};
	char* treasures[] = {"a glowing crystal", "an ancient tome", "a golden amulet", "a magical staff", "a silver dagger"};

	// Variables to track progress
	int choice = 0;
	int pathTaken = 0;
	int currentLocation = 0;
	int companionIndex = 4; // Default: no companion
	int treasureFound = -1; // -1 means no treasure found
	int playerHealth = 100;
	int enemyEncounters = 0;

	// Story introduction
	printf("\n=== THE FORGOTTEN FOREST ===\n");
	printf("You awaken in a strange forest with no memory of how you arrived.\n");
	printf("The trees loom overhead, their branches creating eerie shadows.\n");
	printf("You must find your way out before nightfall...\n\n");

	// First decision - Choose initial direction
	printf("Which direction will you go?\n");
	printf("1. Follow the narrow path to the east\n");
	printf("2. Head north toward the sound of running water\n");
	printf("3. Venture west into the darker parts of the forest\n");
	printf("Your choice (1-3): ");
	scanf("%d", &choice);

	// Process first choice
	switch(choice) {
		case 1:
			printf("\nYou follow the narrow path eastward.\n");
			printf("After walking for some time, you discover %s.\n", forestLocations[0]);
			currentLocation = 0;
			pathTaken = 1;
			break;
		case 2:
			printf("\nYou head north toward the sound of water.\n");
			printf("The path leads you to %s.\n", forestLocations[4]);
			currentLocation = 4;
			pathTaken = 2;
			break;
		default:
			printf("\nYou venture into the darker western forest.\n");
			printf("The trees grow denser until you find yourself in %s.\n", forestLocations[2]);
			currentLocation = 2;
			pathTaken = 3;
			break;
	}

	// Second decision - Encounter
	printf("\nAs you explore %s, you notice movement nearby.\n", forestLocations[currentLocation]);
	printf("What do you do?\n");
	printf("1. Hide and observe\n");
	printf("2. Approach cautiously\n");
	printf("3. Call out a greeting\n");
	printf("Your choice (1-3): ");
	scanf("%d", &choice);

	// Random encounter result
	srand(time(NULL));
	int encounterResult = rand() % 5;

	switch(choice) {
		case 1:
			printf("\nYou hide behind some foliage and observe...\n");
			if (encounterResult < 3) {
				printf("You spot %s watching you from nearby. It seems friendly.\n", companions[encounterResult]);
				companionIndex = encounterResult;
			} else {
				printf("You see nothing of interest. It must have been the wind.\n");
			}
			break;
		case 2:
			printf("\nYou approach carefully...\n");
			if (encounterResult < 2) {
				printf("You discover %s. It decides to join you on your journey.\n", companions[encounterResult]);
				companionIndex = encounterResult;
			} else {
				printf("A wild creature lunges at you! You barely escape, but suffer some scratches.\n");
				playerHealth -= 15;
				enemyEncounters++;
			}
			break;
		default:
			printf("\nYou call out a friendly hello...\n");
			if (encounterResult < 1) {
				printf("To your surprise, %s responds and offers to guide you.\n", companions[encounterResult]);
				companionIndex = encounterResult;
			} else {
				printf("Your voice echoes through the forest. Something growls in response.\n");
				printf("You should probably move on quickly!\n");
				enemyEncounters++;
			}
			break;
	}

	// Status update
	printf("\nStatus: You're in %s", forestLocations[currentLocation]);
	if (companionIndex < 4) {
		printf(" with %s as your companion", companions[companionIndex]);
	}
	printf(". Health: %d%%\n", playerHealth);

	// Third decision - Obstacle
	printf("\nYou continue your journey and encounter an obstacle.\n");

	// Different obstacles based on location
	if (currentLocation == 0 || currentLocation == 1) {
		printf("A deep ravine blocks your path with a fragile rope bridge crossing it.\n");
		printf("What do you do?\n");
		printf("1. Cross the bridge carefully\n");
		printf("2. Look for another way around\n");
		printf("3. Try to jump across a narrow part\n");
	} else if (currentLocation == 2 || currentLocation == 3) {
		printf("A strange magical barrier glows before you, blocking further progress.\n");
		printf("What do you do?\n");
		printf("1. Touch the barrier\n");
		printf("2. Search for a way to disable it\n");
		printf("3. Try to go around it\n");
	} else {
		printf("The path ahead is flooded with fast-moving water.\n");
		printf("What do you do?\n");
		printf("1. Try to swim across\n");
		printf("2. Look for a fallen tree to cross\n");
		printf("3. Follow the water's edge to find a crossing\n");
	}

	printf("Your choice (1-3): ");
	scanf("%d", &choice);

	// Process third choice
	int obstacleRoll = rand() % 10;

	// Modify outcome based on companion
	if (companionIndex < 2) {
		obstacleRoll += 3; // Better odds with a helpful companion
	}

	printf("\n");
	if (obstacleRoll > 7) {
		printf("With surprising luck, you overcome the obstacle easily!\n");
		printf("You even find %s hidden nearby.\n", treasures[rand() % 5]);
		treasureFound = rand() % 5;
		currentLocation = (currentLocation + 2) % 5; // Move to a new area
	} else if (obstacleRoll > 3) {
		printf("After some effort, you manage to get past the obstacle.\n");
		currentLocation = (currentLocation + 1) % 5;
	} else {
		printf("You struggle with the obstacle and hurt yourself in the process.\n");
		playerHealth -= 25;
		printf("You're forced to take a different path.\n");
		currentLocation = (currentLocation + 3) % 5;
	}

	printf("You find yourself in %s.\n", forestLocations[currentLocation]);

	// Fourth decision - Mysterious encounter
	printf("\nNight begins to fall. You notice a strange glow between the trees.\n");
	printf("What do you do?\n");
	printf("1. Investigate the glow\n");
	printf("2. Set up camp for the night\n");
	printf("3. Continue moving, avoiding the glow\n");
	printf("Your choice (1-3): ");
	scanf("%d", &choice);

	printf("\n");
	switch(choice) {
		case 1:
			printf("You cautiously approach the mysterious glow...\n");
			if (rand() % 10 > 5) {
				printf("It's a circle of magical mushrooms! They seem to restore your energy.\n");
				playerHealth += 30;
				if (playerHealth > 100) playerHealth = 100;
			} else {
				printf("It's a trap! Spirit wisps surround you, draining your energy!\n");
				playerHealth -= 20;
				if (companionIndex < 4) {
					printf("Your companion %s helps drive them away before it gets worse.\n", companions[companionIndex]);
				}
			}
			break;
		case 2:
			printf("You set up a small camp for the night.\n");
			printf("The rest does you good, but strange noises keep you from sleeping deeply.\n");
			playerHealth += 15;
			if (playerHealth > 100) playerHealth = 100;
			
			// Random night encounter
			if (rand() % 10 < 3) {
				printf("You wake to find something going through your belongings!\n");
				if (treasureFound >= 0) {
					printf("Your %s is missing! It was stolen while you slept.\n", treasures[treasureFound]);
					treasureFound = -1;
				} else {
					printf("Luckily, you had nothing valuable to take.\n");
				}
			}
			break;
		default:
			printf("You decide to keep moving through the darkness.\n");
			printf("It's difficult to navigate, and you stumble several times.\n");
			playerHealth -= 10;
			
			// Find a new location
			int newLocation = rand() % 5;
			printf("After hours of wandering, you find yourself in %s.\n", forestLocations[newLocation]);
			currentLocation = newLocation;
			break;
	}

	// Status update
	printf("\nStatus: You're in %s", forestLocations[currentLocation]);
	if (companionIndex < 4) {
		printf(" with %s", companions[companionIndex]);
	}
	if (treasureFound >= 0) {
		printf(", carrying %s", treasures[treasureFound]);
	}
	printf(". Health: %d%%\n", playerHealth);

	// Fifth decision - Final choice
	printf("\nAs dawn breaks, you see multiple paths that might lead out of the forest.\n");
	printf("Which path will you take?\n");
	printf("1. The wide path that seems well-traveled\n");
	printf("2. The overgrown path with strange markings on the trees\n");
	printf("3. The narrow path that follows a stream\n");
	printf("4. Climb a tall tree to get a better view first\n");
	printf("Your choice (1-4): ");
	scanf("%d", &choice);

	// Final outcome based on all previous choices
	printf("\n");
	int finalScore = playerHealth;
	if (companionIndex < 4) finalScore += 20;
	if (treasureFound >= 0) finalScore += 25;
	finalScore -= (enemyEncounters * 10);
	finalScore += (pathTaken * 5);

	// Different endings
	if (finalScore > 120) {
		printf("You chose wisely! The path leads you safely out of the forest.\n");
		if (treasureFound >= 0) {
			printf("The %s you found grants you special powers in the outside world.\n", treasures[treasureFound]);
		}
		if (companionIndex < 4) {
			printf("%s accompanies you to the edge of the forest before bidding farewell.\n", companions[companionIndex]);
		}
		printf("You emerge as a hero with tales to tell!\n");
	} else if (finalScore > 70) {
		printf("After a challenging journey, you finally find your way out of the forest.\n");
		printf("You survived, though not without some hardship.\n");
		if (treasureFound >= 0) {
			printf("At least the %s will fetch a good price in the nearby village.\n", treasures[treasureFound]);
		}
	} else if (playerHealth > 0) {
		printf("Exhausted and wounded, you barely crawl out of the treacherous forest.\n");
		printf("It will take time to recover from this ordeal.\n");
		if (companionIndex < 4) {
			printf("If not for %s, you might not have made it at all.\n", companions[companionIndex]);
		}
	} else {
		printf("Your strength fails you. The forest claims another victim...\n");
		printf("Perhaps another adventurer will find your remains someday.\n");
	}

	printf("\n=== THE END ===\n");
	printf("\nReturning to the main hall...\n");
}

void Function23fbabonjo(void)
{
	printf("Episode 23: Fatoma Babonjo ");
}
void room17(void)
{
	int decision = 0;
	int cry = 0;
	char location[] = "downstairs";
	char *inventory[5] = {"Lighter", "Lucky Coin", NULL, NULL, NULL};
	char *table[5] = {NULL, "Tie Pin", "Map", NULL, NULL};
	bool escape = false;
	bool tableSeen = false;
	bool tableChecked = false;
	bool windowSeen = false;
	printf("Room 17!!\n");
	printf("A rash decision, as the door slams shut you realize that there is no handle on this side.\n");
	printf("A flight of stairs rises behind you, with a dim light emanating from the room above.\n");
	printf("You need to take stock, get your bearings, and get out of here!\n");	
	printf("What will you do?");
	while(!escape){
		whatToDo17(location, tableSeen, tableChecked, windowSeen);
		scanf("%d",&decision);
		switch(decision)
			{
			case 1:		//Cry for help
				if(cry == 0)
				{
					printf("\nYou yell out, but the only response is the sound of running water.");	
				}
				else if(cry == 1)
				{
					printf("\nYou believe you heard something, but it was only an echo. Hope is fading.");
				}
				else
				{
					printf("\nEnough of your whining already, noone is coming to help.");	
				}
				cry +=1;			
				break;
			case 2:		//Examine Room
				if(strcmp(location, "downstairs") == 0)
				{
					printf("There's a bucket in the corner, lets hope we are not here long enough to have to use that!\n");
					tableSeen = true;
					printf("A small table sits on the corner with a number of items");

				}
				else if(strcmp(location, "upstairs") == 0)
				{
					printf("The room is no bigger than the one you just left, but the air is fresher. There is a small\n");
					printf("a small window in the far wall, an escape route perhaps?\n");
					windowSeen = true;
				}
				break;
			case 3: 
				if(strcmp(location, "downstairs") == 0)
				{
					strcpy(location, "upstairs");
				}
				else if(strcmp(location, "upstairs") == 0)
				{
					strcpy(location, "downstairs");
				}			
				break;
			case 4:
				if(((strcmp(location, "downstairs") == 0) && !tableSeen) || ((strcmp(location, "upstairs") == 0) && !windowSeen))
				{
					if(coinToss17() == 0)
					{
						printf("Heads, thats not going to help.\n");
					}					
					else
					{
						printf("Tails, never fails");
					}
				}
				else if((strcmp(location, "upstairs") == 0) && windowSeen)
				{
					printf("Its a tight fit, but you made it out.  As you scale down the pipe you think to yourself,\n");
					printf("What good are these items going to do me now?\n");
					printf("Then you realize, you are right back where you started...\n\n");
					escape = true;
				}
                               	else if(((strcmp(location, "downstairs") == 0) && tableSeen) && tableChecked)
                                {
                                        printf("You take the items!\n");
                                        for(int i = 0; i < 5; i++)
					{
						if(inventory[i] == NULL)
						{
						for(int j = 0; j < 5; j++)
						{
							if((table[j] != NULL) && (inventory[i] == NULL))
							{
								inventory[i] = table[j];
								table[j] = NULL;
							}
						}
						}                        
	                                }
				}
				else if((strcmp(location, "downstairs") == 0) && tableSeen)
				{
					printf("On the table sits:\n");
					checkInventory17(table);
					tableChecked = true;
				}
				break;
			case 5:
				printf("You have: \n");
				checkInventory17(inventory);
				break;
			}
	}	

}
void checkInventory17(char *arr[])
{	
	for(int i = 0; i < 5; i++)
        {
                if(arr[i] != NULL)
                {
                        printf("%s\n", arr[i]);
                }
        }
}
int whatToDo17(char location[], bool tableSeen, bool tableChecked, bool windowSeen)
{
        printf("\n\nYou need to decide what to do:\n");
        printf("1: Cry for help!!\n");
        printf("2: Examine room\n");
        printf("3: Go ");
	if((strcmp(location, "upstairs") == 0) && windowSeen)
        {
                printf("downstairs\n");
                printf("4: Escape through window!!\n");
        }
	else if(strcmp(location, "upstairs") == 0)
	{
		printf("downstairs\n");
		printf("4: Toss Lucky Coin\n");
	}
	else if((strcmp(location, "downstairs") == 0) && tableSeen && tableChecked)
        {
                printf("upstairs\n");
                printf("4: Take items\n");
        }
	else if((strcmp(location, "downstairs") == 0) && tableSeen)
	{
		printf("upstairs\n");
		printf("4: Examine Table\n");
	}
	else
	{
		printf("upstairs\n");
		printf("4: Toss Lucky Coin\n");
	}
	printf("5: Check inventory\n");
}
int coinToss17(void)
{
	int random = (rand() % (11));
	return random%2;
}
void vicCompRoom(void)
{
        printf("cscuser49");
}

void room16game(void)
{
	srand(time(NULL));

	char* ingredients[] = {"Gatorade", "Caffeine", "Tears", "Blood", "Goat Hair", "Wilt Chamberlain's nail clippings", "PEDs"};
	char* knownCorrectGuesses[3] = {NULL, NULL, NULL};

	int numOfIngredients = sizeof(ingredients) / sizeof(*ingredients);
	int attemptsBeforeDrowning = 6;

	char* winningIngredient1 = ingredients[rand() % numOfIngredients];
	char* winningIngredient2 = ingredients[rand() % numOfIngredients];
	char* winningIngredient3 = ingredients[rand() % numOfIngredients];
	
	printf("\nYou've entered Elon Musk's Lab Room!\n");
	printf("To have a chance at escaping, you must recreate 'Michael's Secret Stuff'\n\n");
	
	while (true)
	{	
		printf("Choose from one of the following:\n");
		printf("1. Take a close look at the vials\n");
		printf("2. Look at Phil Jackson's play book\n");
		printf("3. Call Scotty Pippen for help\n");
		printf("4. See what you're working with\n");
		printf("5. Try a mix of ingredients\n");
		printf("6. I give up, take me back to the original room.\n");

		int userChoice;
		printf("Enter: ");
		scanf("%d", &userChoice);

		if (userChoice == 6)
		{
			printf("\nReturning to main room, hope you know how to swim!\n\n");
			break;
		}

		switch (userChoice)
		{
			case 1:
			{
				int pickedVial = rand() % numOfIngredients;
				printf("\nThere's something off about this '%s' vial, must be a clue!\n\n", ingredients[pickedVial]);
				break;
			}
			
			case 2:
			{
				printf("\nLook! It's Phil Jackson's playbook. Open it, it looks like there's a note inside:\n\'You know MJ played clean, no ehnancements!\'\n\n");
				break; 
				
			}
			
			case 3:
			{
				int willScottiePickUp = rand() % 2;
				if (willScottiePickUp == 0)
				{
					printf("\nOf course Scottie didn't pick up, I know Rodman would've.\n\n");
				}
				else
				{	
					printf("\nMJ loved his Gatorade, try that.\n\n");
				}
				break;
			}
			
			case 4:
			{
				printf("\nNow we're getting somewhere. Take a look at what you're working with: \n");
				
				for (int i = 1; i <= numOfIngredients; i++)
				{
					if (i == numOfIngredients)
					{
						printf("%d. '%s'\n\n", i, ingredients[i - 1]);
						break;
					}
					printf("%d. '%s'\n", i, ingredients[i - 1]);
				}
				
				break;
			}
			
			case 5:
			{
				int playerGuess1, playerGuess2, playerGuess3;

				printf("\nThese are the known ingredients: ");
				for (int i = 0; i < 3; i++)
				{
					if (knownCorrectGuesses[i] != NULL)
					{
						printf("'%s' ", knownCorrectGuesses[i]);
					}
					else
					{
						printf("'???' ");
					}
				}

				printf("\nNow that you've seen what you're working with, pick 3 ingredients to mix!\n\n");
				printf("Ingredient 1: ");
				scanf("%d", &playerGuess1);

				printf("Ingredient 2: ");
				scanf("%d", &playerGuess2);

				printf("Ingredient 3: ");
				scanf("%d", &playerGuess3);

				printf("\nYou mixed: '%s', '%s', '%s'. Could it be the winning mix?\n\n", ingredients[playerGuess1 - 1],
				ingredients[playerGuess2 - 1], ingredients[playerGuess3 - 1]);

				char* guess1 = ingredients[playerGuess1 - 1];
				char* guess2 = ingredients[playerGuess2 - 1];
				char* guess3 = ingredients[playerGuess3 - 1];

				if ( strcmp(winningIngredient1, guess1) == 0 )
				{
					printf("You guessed '%s' correctly!\n", winningIngredient1);
					knownCorrectGuesses[0] = winningIngredient1;
				}

				if ( strcmp(winningIngredient2, guess2) == 0 )
				{
					printf("You guessed '%s' correctly!\n", winningIngredient2);
					knownCorrectGuesses[1] = winningIngredient2;
				}

				if ( strcmp(winningIngredient3, guess3) == 0 )
				{
					printf("You guessed '%s' correctly!\n", winningIngredient3);
					knownCorrectGuesses[2] = winningIngredient3;
				}

				if ( strcmp(winningIngredient1, guess1) == 0 && strcmp(winningIngredient2, guess2) == 0 && strcmp(winningIngredient3, guess3) == 0 )
				{
					printf("\nYou've recreated 'Michael's Secret Stuff' and saved yourself from drowning!\n\n");
					return;
				}
				else
				{
					attemptsBeforeDrowning--;
					printf("Oh no, that is the wrong mix. You've got %d attempts left!\n", attemptsBeforeDrowning);
					if (attemptsBeforeDrowning == 0)
					{
						printf("\n\nYou've ran out of attempts at a winning mixture. DROWN!\n\n");
						return;
					}
					break;
				}

				break;
			}
			default:
			{
				printf("Incorrect choice, try again\n");
				break;
			}
		}
	}
}


void ryanRoom38(void)
{
    int choice = 0;
    int planet = 0;
    int shake = 0;
    srand(time(0));
    int y = (rand() % 100) + 1; // random number generated
    char reportings[5][47] = {"Rocks, Plants, Lightsaber, Stillsuit, Telescope"}; // array used
    int answer = 7;
    int guess = 0;
    
    
    printf("Earth is decaying!\nNASA has sent you on a mission and you are all aboard the Starship Cardinal.\nYou are the capatain in charge of fidning a habital planet for humans to continue living.\nThe human race depends on you!\n");
    printf("What will you do?\n");
    printf("1.Explore Planets\n");
    printf("2.Communicate Findings\n");
    printf("3.Continue Traveling\n");
    printf("4.Refuel on Gas\n");
    printf("5.Go Back Home\n");
    printf("Enter a number: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("Explore planets\n");
            printf("Planet 1: A Green Planet\n");
            printf("Planet 2: A Desert Planet\n");
            printf("Planet 3: A Water Planet\n");
            printf("Planet 4: A Grey Planet\n");
            printf("Planet 5: A Fire Planet\n");
            printf("Which planet will you explore?\n");
            printf("Enter a number: ");
            scanf("%d",&planet);
            switch(planet){
                case 1:
                    printf("Green Planet\n");
                    printf("The green planet id filled with trees and oxygen.\nIt is a safe place to inhabit.\n Humanity is saved\n");
                    break;
                case 2:
                    printf("Desert Planet");
                    printf("The desert planet is full of sand and heat.\nIt is a safe place to inhabit but at what cost.\n. There is no water but there is food and air. Is Humanity is saved?\n");
                    break;
                case 3:
                    printf("Water Planet");
                    printf("The wter planet is full of water and is inhabitabal.\nHumanity is not saved\n");
                    break;
                case 4:
                    printf("Grey Planet");
                    printf("The planet you arrive on is a futuristic city!\n It is filled with skyscrappers and flying cars.\n You go to meet with its ruler and they decide to help humanity.\n THE WORLD IS SAVED!\n");
                    break;
                case 5:
                    printf("YOU CHOSE THE FIRE PLANET\n"); // for loop being used
                    for(int i = 0; i < planet; i++)
                    {
                    printf("MAYDAY \n");
                    }
                    printf("The planet is inhabitabl and we lost you....\n");
                    break;
                default:
                    printf("You aborted the mission");
                    break;
                   }
            break;
        case 2:
            printf("You have decided to communicate findings\n");
            printf("This is your captain on Starship Cardinal, this is what I have found\n");
            for(int i = 0; i < 5; i++)
            {
                printf("%s\n", reportings[i]);
            }
            break;
        case 3:
            printf("Continue Exploration\n");
            printf("While exploring you get bored and speak to the AI computer ELLE.\nYou decide to play a number guessing game.\nELLE knows the number now guess: ");
            scanf("%d", &guess);
            while(guess != answer) // while loop is used as my own feature
            {
                printf("Wrong answer keep guessing!: ");
                scanf("%d", &guess);
            }
            printf("You made the right guess %d\n", guess);
            
            
            break;
        case 4:
            printf("You have landed at an international space gas station.\nWhen you land you find an old relic of earth sitting on the floor.\nIt appears to be a random 8 ball but its different, instead of messgaes it gernates numbers.\nYou feel intrigued, do you let it dictate how many gallons of gas you put into the ship?\n");
            printf("Enter your option. 1 is yes, 2 is no:  ");
            scanf("%d",&shake);
            if(shake == 1)
            {
                printf("You decide to take a chance and shake the random 8 ball.\nHere is what it generates %d",y);
                printf("\nHopefully this amount of gas last a long\n");
                
            }
            else
            {
                printf("You decide to put the ball down and pay for 100 gallons of fuel to continue the trip\n");
            }
            break;
        case 5:
            printf("You have left humanity down and reported back home.\n");
            break;
    }
}

void carlosroom60(void)
{
	printf("welcome user60\n");
}


void brentRoom(void)
{
        printf("\n\n==============================================\n");
        printf("       WELCOME TO THE DARK FOREST ESCAPE\n");
        printf("==============================================\n\n");
        printf("You are being hunted by a faceless horror.\n");
        printf("Every action you take affects your energy and the distance between you and the Entity.\n");
        printf("Survive by keeping your energy above 0 and increasing the Entity's distance to 100 or more.\n");
        printf("If your energy drops to 0 or the Entity catches you (distance reaches 0), you lose.\n");
        printf("Choose actions wisely. Some bring risk. Some bring reward.\n");
        printf("Good luck. The forest is listening...\n\n");

        int energy = 100;
        int distance = 65;
        bool gameOver = false;
        int positiveChanges[3] = {3, 5, 7};
	int negativeChanges[3] = {-3, -5, -7};
        srand(time(NULL));
        while(!gameOver) {
                printf("You have this much energy left: %d\n", energy);
                printf("The Entity's Distance: %d", distance);
                printf("\n\n1 - Hide \n2 - Run \n3 - Distract \n4 - Rest \n5 - Search for Items\n");
                int choice;
                do {
                        printf("\nChoose an action (1-5): ");
                        scanf("%d", &choice);
                        if (choice < 1 || choice > 5) {
                                printf("Invalid input. Please enter a number between 1 and 5.\n");
                        }
                } while (choice < 1 || choice > 5);

                int randIndex;
                int effect;


                switch (choice) {
                        case 1: // Hide
                                energy -= 5;
                                randIndex = rand() % 3;
                                effect = negativeChanges[randIndex];
                                distance += effect;
                                break;
                        case 2: // Run
                                energy -= 15;
                                randIndex = rand() % 3;
                                effect = positiveChanges[randIndex];
                                distance += effect;
                                break;
                        case 3: // Distract
                                energy -= 10;
                                randIndex = rand() % 3;
                                effect = positiveChanges[randIndex];
                                distance += effect - 2;
                                break;
                        case 4: // Rest
                                energy += 10;
                                randIndex = rand() % 3;
                                effect = negativeChanges[randIndex];
                                distance += effect;
                                break;
                        case 5: //Search
                                energy -= 10;
                                effect = -(rand()%10);
                                distance += effect;
                                break;
                }
	
                if (distance <= 0) {
                        printf("\n\n==============================================\n");
                        printf("       The Entity caught you. Game Over.\n");
                        printf("==============================================\n\n");
                        gameOver = true;
                        break;
                } else if (distance > 100) {
                        printf("\n\n==============================================\n");
                        printf("       You escaped the forest. You win.\n");
                        printf("==============================================\n\n");
                        gameOver = true;
                        break;
                }
                else if (energy <= 0) {
                        printf("\n\n==============================================\n");
                        printf("       You collapsed from exhaustion. Game Over.\n");
                        printf("==============================================\n\n");
                        gameOver = true;
                        break;
                }

                switch(choice) {
                        case 1: // Hide
                                printf("\nYou crouch behind a fallen log, holding your breath. The trees creak... but is it the wind?\n");
                                break;
                        case 2: // Run
                                printf("\nYou sprint through the undergrowth, branches slashing at your face. You hear footsteps behind you—closer or farther?\n");
                                break;
                        case 3: // Distract
                                printf("\nYou throw a rock into the dark. A distant rustle. Maybe it worked... or maybe it's angrier now.\n");
                                break;
                        case 4: // Rest
                                printf("\nYou collapse beside a tree, trying to steady your breathing. Every heartbeat feels louder than a scream.\n");
                                break;
                        case 5: //Search
                                printf("\nYou fumble through the leaves for anything useful. Twigs snap. Are those your footsteps—or someone else's?\n");
                                break;

                }
        }
}

void angelasRoom26(void)
{
	printf("cscuser26\n");

}

void room1game(void) 
{
	printf("cscuser1\n");
}

void PedroFunctionRoom(void)
{
	int opt37 = 0;
	puts("You have picked room 37, Pedro's room\n");
	puts("Let's start by visiting some planets in our solar system\n");
	puts("You have 3 planets to visit from\n");
	puts("1. Mercury, 2. Mars, 3. Saturn");
	scanf("%d", &opt37);

	//This if statement is temporary. Only a bases to work with
	if(opt37 = 1)
	{
		printf("Great you picked Mercury\n");

	}
	else if(opt37 = 2)
	{
		printf("Great you picked Mars\n");
	
	}
	else if(opt37 = 3)
	{
		printf("Great you picked Saturn");
	
	}

}



void room28game(void)
{
	printf("Cscuser28:did not compile and test his code before he made a pull request or he would have seen he did not define his function using a function prototype. This adds extra work for everyone else.");
}

void jessiesFunRoom(void)
{
        printf("cscuser47");
}






void room51game(void)
{
	int input1 = 0;
    int input2 = 0;
    int input3 = 0;
    int input4 = 0;
    int input5;
   
	char *inputs[] = {"blue", "green", "orange"}; // Array to store inputs
    int randomEvent = 0;
    int i = 0;

    printf("You were teleported to a cliff, press 1 to keep climbing and 2 to jump into the river?\n");
    scanf("%d", &input1);
	
	//Input 1, there is a input 2 nested
    if(input1 == 1) 
    {
      	printf("\nYou kept climbing the cliff only to find a dragon waiting at the top\n");
     		printf("\n Press 1 to slay the dragon and press 2 to give it an oreo cookie?\n");
      		scanf("%d", &input2);
     
      		//Input 2 there is an input 3 nested
			if(input2 == 1)
      		{
        	printf("The dragon breathed fire on you and burnt your expensive shoes\n");
        		printf("\n Press 1 to extinguish the fire and press 2 to jump into a puddle of water\n");
        		scanf("%d", &input3);
				
				//Input 3 there is an input 4 nested
				if (input3 == 1)
				{
					printf("You extinguish the fire and did not lose any damage because of your armor\n");
				}
			
				else
				{
					printf("You caught salmonella from the dirty water and were bed ridden for a week");
				} 
      		}
      
     
	 		 if(input2 == 2)
     		 {
        		printf("The dragon loved the oreo cookie and flew you back to town\n");
      		 }
    }

	if(input1 == 2)
    {
        printf("You jumped into the water and a pirate saved you. Press 1 to have thank the pirate, Press 2 to steal the golden eagle egg?\n");
        scanf("%d", &input3);

        if(input3 == 1)
        {
            printf("The pirate thought you were cool and showed you where to find the ostrich that layed golden eggs\n");
                        printf("The pirate asks if you would like to guess the jelly beans, press 1 for yes and 2 for no.\n");
                scanf("%d", &input4);

                        srand(time(NULL));
                        randomEvent = rand() % 3; // Random number 0, 1, or 2
                        if(input4 ==1)
                        {
                                if(randomEvent == 0)
                                {
                                        printf("You won a jelly bean\n");
                                }
                                if(randomEvent == 1)
                                {
                                        printf("You won a spatula\n");
                                }
                                if(randomEvent == 2)
                                {
                                        printf("You won a box of boston baked beans\n");
                                }
                                else if (input4 == 2)
                                {
                                        printf("You declined the game and the pirate shrugged and walked away");
                                }

								printf("\nThe pirate offers you a magical cloak, but you must choose its color.\n");
								printf("\nChoose a color: 0 for blue, 1 for green, 2 for orange:\n");
								scanf("%d", &input5);

								if(input5 >= 0 && input5 <= 2)
								{
									printf("You have selected the color: %s\n", inputs[input5]);
								}
							    else 
								{
									printf("That color does not exist in this realm.\n");
								}


                        }

                        }
            
        }

        else
        {
            for(int i = 0; i < 3; i++)
                {
                printf("The pirate was mad and he did not share where to find the ostrich cave with golden eggs\n");
                }
        }
}




// --- Room 27 Implementation START ---
void lab13nanup(void)
{
    	// Room-specific variables
    	int choice = 0;
    	int attempts = 0; // Loop counter for door attempts
    	bool escaped = false;
    	char observations[5][100]; // Array requirement
    	int observation_count = 0;

    	// --- Items/States for Pattern Matching ---
    	bool has_key = false;
    	bool has_scalpel = false;
    	bool found_box = false; // Track if the box has been found
    	// -----------------------------------------

    	printf("\nYou step into Room 27. The air is heavy with the smell of antiseptic and decay.\n");
    	printf("It looks like an old, abandoned operating theatre. Stains mark the floor and walls.\n");
    	printf("A single light bulb flickers erratically overhead. The main door behind you is bolted shut from this side.\n");
    	sleep(2);

    	// Main loop for Room 27
    	while (!escaped)
	{
        	printf("\nWhat do you do?\n");
        	printf("1. Examine the rusty medical tray.\n");
        	printf("2. Try opening the heavy, bolted door.\n");
        	printf("3. Look under the dilapidated bed.\n");
        	printf("4. Inspect the flickering light fixture.\n");
        	printf("5. Listen closely at the walls.\n");
        	
		// Add choice 6 if the box has been discovered
        	if (found_box) {
         	   	printf("6. Examine the small metal box with etchings.\n");
        }

        printf("9. Give up and return to the main hall.\n"); // Option to return
        printf("Your choice: ");

        // Input validation
        if (scanf("%d", &choice) != 1)
	{
             	printf("Invalid input. Please enter a number.\n");
             	while (getchar() != '\n'); // Clear the input buffer
             	continue; // Ask for choice again
        }

        // --- Random Scare Event Logic ---
        int scare_chance = rand() % 5;
        if (scare_chance == 0)
	{
            	int scare_type = rand() % 3; // Random number requirement
            	printf("\nSuddenly...\n");
            	sleep(1);
            
	    	if (scare_type == 0) 
		{
                	printf("...A sudden chill runs down your spine as a disembodied whisper seems to echo your name...\n");
            	}
		else if (scare_type == 1) 
		{
                	printf("...The lights flicker violently, casting long, dancing shadows. You thought you saw something move in the corner...\n");
            	}
		else 
		{
                	printf("...A metallic clang! It sounded like something heavy was dropped just outside the door...\n");
            	}
             	sleep(1);
        }
        // --- End Random Scare Event Logic ---


        // Handle player choices
        switch (choice)
	{
        	case 1:
                	printf("\nYou cautiously approach the tray. It's covered in dried blood and strange instruments.\n");
                	sleep(1);
                	
			if (!found_box)
			{
                    		printf("Amidst the grime, you find a small, cold metal box covered in strange etchings.\n");
                    		found_box = true;
                    
				if (observation_count < 5) strcpy(observations[observation_count++], "Found a strange metal box on the tray.");
                    		sleep(1);
                	}

                	if (!has_scalpel && (rand() % 2 == 0))
			{
                     		printf("You also spot a dull, rusty scalpel partially hidden under a cloth.\n");
                     		has_scalpel = true;
                      		
				if (observation_count < 5) strcpy(observations[observation_count++], "Found a rusty scalpel.");
                     		sleep(1);
                	}

                	if (!has_key && (rand() % 3 == 0))
			{
                    		printf("Tucked away near the box, you find a small, tarnished brass key!\n");
                    		has_key = true;
                    		if (observation_count < 5) strcpy(observations[observation_count++], "Found a brass key on the medical tray.");
                	} 
			else if (!has_key) 
			{
                    		printf("You search thoroughly but find no key this time.\n");
                	}

                	if (!has_key && !has_scalpel && found_box)
			{
                    		printf("Besides the box, it's just dust, rust, and the unsettling feeling of being watched.\n");
                	}	
                	
			if (observation_count < 5) strcpy(observations[observation_count++], "Examined the creepy medical tray.");
                	sleep(1);
                	
			break; // Exit case 1
            
		case 2: // Door logic
                	printf("\nYou examine the heavy door. It's thick wood reinforced with metal bands, and bolted securely.\n");
                
			// Loop requirement
                	for (attempts = 0; attempts < 3; attempts++)
			{
                    		printf("You heave against the door... (Attempt %d)\n", attempts + 1);
                    		sleep(1);
                    	
				if (has_key)
				{
                         		printf("You notice a small keyhole near the bolts. You try the brass key...\n");
                         		sleep(1);
                         
					printf("CLICK! The bolts retract with a rusty groan! The door creaks open!\n");
                         		printf("You stumble out, back into the main hall, heart pounding.\n");
                         		
					escaped = true; // Set flag to exit the room's while loop
                         		break; // Exit the for loop
                    		}
				else
				{
                         		printf("It doesn't budge. It's firmly locked or blocked.\n");
                         		if (attempts < 2) printf("Maybe try again?\n"); else printf("Trying the door seems futile without a key.\n");
                    		}
                	}
                
			if (!escaped && !has_key)
			{
                     		if (observation_count < 5)
				{
                         		strcpy(observations[observation_count++], "Tried the bolted door multiple times. It's locked tight.");
                    		}
                	}
                 
			attempts = 0; // Reset attempts count
                	break; // Exit case 2
            	
		case 3: // Bed logic
                	printf("\nYou get on your hands and knees, peering into the darkness under the bed.\n");
                	sleep(1);
                	
			if (rand() % 2 == 0) 
			{
                    		printf("Something skitters away into the shadows! You couldn't see what it was.\n");
                     		
				if (observation_count < 5) 
				{
                         		strcpy(observations[observation_count++], "Something moved under the bed.");
                    		}
                	} 
			else 
			{
                    		printf("It's filthy down here. Just dust bunnies the size of rats and an old bedpan.\n");
                     		
				if (observation_count < 5)
				{
                         		strcpy(observations[observation_count++], "Looked under the bed. Found nothing useful.");
                    		}
                	}
                	
			break; // Exit case 3
			       
            	case 4: // Light fixture logic
                	printf("\nYou stare up at the light bulb swinging gently, buzzing and flickering.\n");
                	sleep(1);
			
                	printf("Sometimes the light seems almost too bright, other times it nearly goes out.\n");
                	printf("It casts unsettling shadows around the room.\n");
                 	
			if (observation_count < 5) 
			{
                     		strcpy(observations[observation_count++], "Inspected the flickering light. It's unnerving.");
                 	}
                	
			break; // Exit case 4
            
		case 5: // Listen at walls logic
                	printf("\nYou press your ear against the cold, damp wall, straining to hear...\n");
                	sleep(2);
                
			int sound = rand() % 5;
                
			if (sound == 0)
			{
                    		printf("...silence. Just the sound of your own breathing and the dripping water outside.\n");
                	}
			else if (sound == 1) 
			{
                    		printf("...a faint scratching sound, like fingernails on stone, from deep within the wall.\n");
                	}
			else if (sound == 2) 
			{
                    		printf("...a low, guttural moan that quickly fades.\n");
                	} 
			else if (sound == 3) 
			{
                    		printf("...a rhythmic, wet dripping sound from somewhere inside the wall.\n");
                	}
                 	else 
			{
                     		printf("...nothing but the buzzing of the light and your own heartbeat.\n");
                	}
                 
			if (observation_count < 5)
			{
                     		strcpy(observations[observation_count++], "Listened at the walls. Heard strange sounds (or nothing).");
                 	}
                	
			break; // Exit case 5

            	// --- Pattern Matching Case ---
		case 6:
                	if (found_box) 
			{
                    		printf("\nYou examine the strange metal box. It's cold, seamless, and covered in swirling etchings.\n");
                    		sleep(1);

                    		// Pattern matching logic start
                    		// This simulates checking the 'pattern' of items the player possesses.
                    
				if (has_key && has_scalpel)
				{
                        		// Pattern 1: Has both key and scalpel
                        		printf("As you hold the key near the box, the etchings glow faintly.\n");
                        		sleep(1);
                        
					printf("On impulse, you trace one of the glowing lines with the tip of the rusty scalpel...\n");
                        		sleep(1);
                        
					printf("CLICK! A hidden seam appears and the box lid springs open!\n");
                        		printf("Inside, you find a single, dried human finger pointing accusingly.\n"); // Creepy reward
                         
					if (observation_count < 5) strcpy(observations[observation_count++], "Opened the metal box using the key and scalpel! Found a finger.");
                    		}
				else if (has_key && !has_scalpel) 
				{
                        		// Pattern 2: Has key only
                        		printf("You try the brass key on the box. It doesn't fit any visible lock.\n");
                         		printf("However, when the key touches the metal, the etchings pulse with a faint, cold light for a moment.\n");
                         		
					if (observation_count < 5) strcpy(observations[observation_count++], "Touched the key to the box. Etchings glowed.");
                    		}
				else if (!has_key && has_scalpel) 
				{
                         		// Pattern 3: Has scalpel only
                         		printf("You scrape at the box with the rusty scalpel, trying to find a way in.\n");
                         		sleep(1);

                         		printf("The scalpel blade snaps, showering sparks! The box remains sealed.\n");
                         		has_scalpel = false; // Item breaks/is lost
                         	
					if (observation_count < 5) strcpy(observations[observation_count++], "Tried to pry the box with the scalpel; the scalpel broke.");
                    		}
				else
				{
                         		// Pattern 4: Has neither key nor scalpel (Default)
                         		printf("The box is cold and unresponsive. The strange etchings seem to shift slightly when you're not looking directly at them.\n");
                          		if (observation_count < 5) strcpy(observations[observation_count++], "Examined the metal box. Couldn't interact further.");
                    		}
                     		// Pattern matching logic end

                	} 
			
                	break;
            	// --- End Pattern Matching Case ---
		
		case 9:
			printf("\nYou decide this room is too much and cautiously unbolt the door from this side, heading back to the main hall.\n");
                 	escaped = true; // Set flag to exit the room's while loop
                 	break;
            
	    	default:
                // Handle invalid choices
                	if (choice == 6 && !found_box) 
			{
                     		printf("You haven't found anything to interact with like that yet.\n");
                	}
			else
			{
                     		printf("That's not a valid action in this creepy place! Focus!\n");
               		}
                	break;
    		}
        	sleep(1);
    	} // End while(!escaped) loop for Room 27

    	// Display observations collected before leaving
    	if (observation_count > 0) 
    	{
        	printf("\n--- Your Notes from Room 27 ---\n");
        
		for (int i = 0; i < observation_count; i++) 
			{
            			printf("- %s\n", observations[i]);
        		}
        
		printf("-------------------------------\n");
    	}

    	printf("Leaving Room 27...\n");
    // Execution returns to the main loop in main()
}
// --- Room 27 Implementation END ---

void gameFuncHenry41(void)
{
	int userInput;
	srand(time(NULL));

	printf("Welcome to Room 41 of this dungeon!\n");
	printf("In front of you is 5 chests!\n");
	printf("Which chest will you test your luck against?(1-5)\n");
	printf("The first (1) chest contain a string of peculiar numbers\n");
	printf("The second (2) chest contains a random equipments!\n");
	printf("The second (3) chest  contains the wisdom of the acient time.\n");
	printf("The second (4) chest contains a mystery.\n");
	printf("The second (5) chest contains the remnant of an extinct creature of the old.\n");
	scanf("%d", &userInput);
	switch(userInput)
	{
		case 1:
		{
			int i;
			int numbers[] = {1, 1, 2, 3, 5, 8, 13, 21, 34};
			printf("Have you heard of the Fibonacci sequence? It is a series of numbers where each number is the sum of the two preceding ones, starting from 0 and 1.\n");
			for( i = 0; i < 9; i++)
			{
				printf("%d ", numbers[i]);
			}
			printf("\n");
			break;
		}
		case 2:
		{
			int randNum;
			randNum = rand() % 4 + 1;

			if(randNum = 1)
			{
				printf("You aquired a Scalled Skulledcap!\n");
			}
			else if(randNum = 2)
			{
				printf("You aquired a Cuirass With Falds!\n");
			}
			else if(randNum = 3)
			{
				printf("You aquired a Chainmail Gauntlets!\n");
			}
			else if(randNum = 4)
			{
				printf("You aquired a Bavarian Plate Legs!\n");
			}
			break;
		}
		case 3:
		{
			printf("Let justice be done, though the world perish.\n");
			break;
		}
		case 4:
		{
			float randFloat = (float)rand() / RAND_MAX * 10.0f;
			printf("A random goblin appeared! It lunged toward you and cleaved in your chest with a machete!\n");
			printf("It dealt %.2f damage to you!\n",randFloat);
		       break;
		}
		case 5:
		{
			printf("Here's a defintely-not-Nintendo-license-infringed Pikachu!\n");
	                printf("`;-.          ___,\n");
			printf("  `.`\\_.  ._/`.-\"`\n");
			printf("    \\        /      ,\n");
			printf("    /()   () \\    .' `-._\n");
			printf("   |)  .    ()\\  /   _.'\n");
			printf("   \\  -'-     ,; '. <\n");
			printf("    ;.__     ,;|   > \\\n");
			printf("   / ,    / ,  |.-'.-'\n");
			printf("  (_/    (_/ ,;|.<`\n");
			printf("    \\    ,     ;-`\n");
			printf("     >   \\    /\n");
			printf("    (_,-'`> .'\n");
			printf("         (_,'\n");
			break;
		}
	}
	EXIT_SUCCESS;
}


//Special Feature: Text boxes around the surrounding dialogue to make it more readable for the player.
void alexGameRoom56(void)
{
    printf("                                                 ╔════════════════════════════╗\n");
    printf("                                                  Welcome to 'Stealth Strike'!\n");
    printf("                                                 ╚════════════════════════════╝\n");

    printf("╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("   You are hired by bounty hunters to retrieve some intel from a heavily guarded science base in the mountains called Mt. Santiss.");
    printf("\n   You are armed with a silenced pistol and a tactical knife, and you have some medical equipment in case of injury.");
    printf("\n   You also have a cloaking device to go invisible; every use will last 5 minutes each use, and it will take 15 minutes to recharge.");
    printf("\n   Lastly, you are disguised as one of the base's troopers.");
    printf("\n   The bounty hunters have requested that you succeed in at least 3 tasks to provide enough data for a strategic raid.");
    printf("\n   If you are unable to succeed 3 times, you will not be compensated and will not escape...\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

    printf("╔═══════════════════════════════════╗\n");
    printf("   Your goal is to find 5 pieces:\n");
    printf(" - The main datapad\n");
    printf(" - Alien Specimens\n");
    printf(" - The Base's location\n");
    printf(" - The base's research goal\n");
    printf(" - The password for The Vault\n");
    printf("╚═══════════════════════════════════╝\n");

    printf("Once you have finished all tasks within the military base, deposit the items into Room 56 and you will be able to leave!\n");

    int tasksCompleted[5] = {0};
    int correctGuesses[5] = {0};
    int secretNumbers[5];

    for (int i = 0; i < 5; i++)
    {
        secretNumbers[i] = (rand() % 3) + 1;
    }

    int completedCount = 0;
    int choice, guess;

    while (completedCount < 5)
    {
        printf("\n╔═══════════════════════════════════════════════════════════════════════════════════════╗\n");
        puts("   Choose a task to complete (Success = Item acquired | Failure = No Item from the Task):");
        puts("   1. Download data from the main Datapad located in the top office");
        puts("   2. Accessing the storage room to take a sample of a specimen");
        puts("   3. Encrypting data to figure out the base's location");
        puts("   4. Finding the base's databanks and determining what the goal is");
        puts("   5. Figure out how to access The Vault, which houses the base's most important assets");
        printf("╚════════════════════════════════════════════════════════════════════════════════════════╝\n");

        printf("\nEnter a task 1-5: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5)
        {
            puts("Invalid task choice. Try again.");
            continue;
        }

        if (tasksCompleted[choice - 1])
        {
            puts("You already completed this task! Pick another.");
            continue;
        }

        printf("\n╔══════════════════════════════════════════════════════════════════════════╗\n");
        printf("   Guess a number between 1 and 3 to complete the task: ");
        scanf("%d", &guess);
        printf("╚══════════════════════════════════════════════════════════════════════════╝\n");

        if (guess == secretNumbers[choice - 1])
        {
            printf("Good work, you guessed the right number and have completed task since- %d!\n", choice);

            switch (choice)
            {
                case 1:
                        puts("You manage to get pass guards, troopers by using your disguise and are successfully able to extract the data from the office.");
                        break;
                case 2:
                        puts("You are able to enter the storage and disable security. Using the known intel you successfully locate a sample and store it.");
                        break;
                case 3:
                        puts("After decrypting some files, you figure out a method to get to the base, but are unable to obtain the coordinites.");
                        break;
                case 4:
                        puts("You uncover classified files detailing the base's main goal: to weaponize alien DNA and terroize the world.");
                        break;
                case 5:
                        puts("You stole a Vault card from an officer while they were distracted, you copy the card and store the copied card with the Vault Code.");
                        break;
            }
            correctGuesses[choice - 1] = 1;
        }
        else
        {
            printf("Better luck next task. The correct number was %d. Task %d still completed! However you will not have your items/intel from the task since-\n", secretNumbers[choice - 1], choice);

            switch (choice)
            {
                case 1:
                    puts("While sneaking to the main office, you tripped a security sensor. You escape the area but there is increased security around that office. ");
                    break;
                case 2:
                    puts("You get spotted while searching for a suitable specimen sample, you are temporarliy detained but escape using your cloaking device.");
                    break;
                case 3:
                    puts("Encrypting the location proved more difficult than anticipated, eventually the system clocks out.");
                    break;
                case 4:
                    puts("You are caught messing with the files, you fight your way out but the only accessible terminal is destroyed.");
                    break;
                case 5:
                    puts("A high ranking officer notices you sneaking up to pickpocket a Vault Key since you miscalculated your cloak device time.");
                    break;
            }
        }

        tasksCompleted[choice - 1] = 1;
        completedCount++;
    }

    int successCount = countSuccesses(correctGuesses);
    printResults(correctGuesses);
    checkDoorStatus(successCount);
}

int countSuccesses(int successArray[])
{
    int successCount = 0;
    for (int i = 0; i < 5; i++)
    {
        if (successArray[i] == 1)
            successCount++;
    }
    return successCount;
}

void checkDoorStatus(int successCount)
{
    if (successCount == 5)
    {
        printf("\n╔══════════════════════════════════════════════════════════╗\n");
        printf("   You are a master at stealth ops and have successfully\n");
        printf("   finished all 5 tasks successfully. Well Done!\n");
        printf("╚════════════════════════════════════════════════════════════╝\n");

        printf("________$$$$\n");
        printf("_______$$__$\n");
        printf("_______$___$$\n");
        printf("_______$___$$\n");
        printf("_______$$___$$\n");
        printf("________$____$$\n");
        printf("________$$____$$$\n");
        printf("_________$$_____$$\n");
        printf("_________$$______$$\n");
        printf( "__________$_______$$\n");
        printf("____$$$$$$$________$$\n");
        printf("__$$$_______________$$$$$$\n");
        printf("_$$____$$$$____________$$$\n");
        printf("_$___$$$__$$$____________$$\n");
        printf("_$$________$$$____________$\n");
        printf("__$$____$$$$$$____________$\n");
        printf("__$$$$$$$____$$___________$\n");
        printf("__$$_______$$$$___________$\n");
        printf("___$$$$$$$$$__$$_________$$\n");
        printf("____$________$$$$_____$$$$\n");
        printf("____$$____$$$$$$____$$$$$$\n");
        printf("_____$$$$$$____$$__$$\n");
        printf("_______$_____$$$_$$$\n");
        printf("________$$$$$$$$$$\n");

    }


    if (successCount >= 3)
    {
        printf("\n╔══════════════════════════════════════════════════════════╗\n");
        printf("   Mission Accomplished! You completed %d tasks correctly.\n", successCount);
        printf("   You transfer your items to the bounty hunters...\n");
        printf("   They accept your items and give you a key to escape.\n");
        printf("   The door will open and you can escape!\n");
        printf("╚════════════════════════════════════════════════════════════╝\n");
    }
    else
    {
        printf("\n╔══════════════════════════════════════════════════════════════╗\n");
        printf("   Mission failed. You only completed %d task(s) correctly.\n", successCount);
        printf("   You transfer your items to the bounty hunters...\n");
        printf("   They are disgruntled with your failure and hang up on you.\n");
        printf("   The door will not open and you will be trapped inside...\n");
        printf("╚════════════════════════════════════════════════════════════════╝\n");
    }
}

void printResults(int successArray[])
{
    printf("\n╔════════════════════════════╗\n");
    printf("          RESULTS          \n");
    printf("╚════════════════════════════╝\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Task %d: %s\n", i + 1, successArray[i] == 1 ? "SUCCESS" : "FAILURE");
    }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              


void rayFunct(void)
{
	int hp = 100;	
	int option = 0;	
	int count = 0;
	char equip[7][30]={"Sword", "Light Armour", "Compass", "Map", "Ring of Str", "Ring of Agi", "two Potions"};
	bool next = true;
	bool condition = false;


	
	printf("You open the door only to see pitch black, unable to make out anything you hesitate\n");

	printf("feeling unnerved from being unable to see anything, you quickly shut the door.\n");
	printf("Atleast you try to close the door, but it wont budge.");
	printf("Before you can react a shadowy ropelike tendril wraps around your waist and upbruptly pulls you in.");

	printf("As you step into the darkness, your conciousness begins to fade.\n \n");

	printf("You feel something wet against your face. \nYou brush it off with your hands. \n");
	printf("The wetness is back, it feels like something is licking you. \n");
	printf("Your eyes snap open and in your view is a small wolf cub. \n");
	printf("You scramble to your feet, while the cub sits down staring up at you.\n");
	printf("-woof- -woof- \n \n");

	printf("Staring at the cub, you suddenly hear a voice in your head.\n \n");

	printf("Welcome to the trial, adventurer. \n");
	printf("Your objective is to gather 4 magic crystal to activate the portal in the center.\n");
	printf("You have been granted equipment, supplies and help\n");
	printf("Good Luck.\n \n");

	while(next)
	{
		printf("1. Pet the dog \n2. Check your stuff \n"); 
		printf("3. Check your surroundings \n4. Explore \n \n");

		printf("Choice: ");
		scanf("%d", &option);
		printf(" \n");
		switch(option)
		{
			case 1:

			printf("You reach your hand out to pet the doggo.\n");
			printf("The cub wags it's tail then licks your hand.\n \n");
			break;

			case 2:
			printf("You begin to assess your gear \n\n");
			
			for(int i = 0; i < 4; i++)
			{
				printf("%d. %s\n", i, equip[i]);
			}

        		break;
		
			case 3:

			printf("You discover you are in a clearing surrounded by trees.\n ");
			printf("Nearby is the portal the voice told you about, its currently inactive. \n ");
			printf("Next to the portal is a pedestal with four slots.\n\n");
			break;

			case 4:

			next = false;
		 	break;
		}

	}
                                                                                                             
	hp = rayFourDirect(option, count, hp);

	

	printf("Now that you have gotten all 4 crystals, you reassess your items\n\n");

	for(int k = 0; k < 7; k++)
	{
		printf("%d. %s\n", k, equip[k]);
	}

	printf("Now all that is left is to return to the center and active the portal\n");
	printf("Upon reaching the clearing you noticed something is different. \n");
	printf("There is now an Orc standing infront of pedestal of the portal. He is blocking your way \n");
	printf("He must be the guardian of this trial, beating him seems to be the only option. Prepare for a fight!\n\n");
	
	//printf("Hp : %d\n",hp);
	hp = rayFight(hp);

	if(hp < 1)
	{
		printf("Unfortunately the orc has proved too much for you. You have succumb to your wounds\n");
		printf("Before the darkness over takes your vision, you hear the voice again\n\n");
		printf("Trial Failed, you will be sent back shortly.... loser\n\n");
	}
	else
	{	
		printf("Congratulations, you have defeated the Orc guardian. Now insert those magic crystal and complete the trial.");
		printf("You quickly insert the crystals, the portal shimmers to life. You pat the doggo goodbye and thank it for the help\n");
		printf("You walk through the portal and arrived in a familiar place. A room filled with doors...\n\n");
	}

}
int rayFourDirect(int option, int count, int hp)
{
	int tempHp = 0;	
	bool slime = false;
	bool rabbit = false;
	bool rat = false;
	bool goblin = false;

	while(count < 4)                                                                                                      		
	{       
		
	    //	printf("Count: %d \n",count);	
		printf("1. Ruins (West) \n2. Abandon House (south) \n");
		printf("3. A spring (East) \n4. A Cave (North) \n \n"); 
		printf("Choice: ");
		scanf("%d", &option);                                                                                
		printf(" \n");
           	
		switch(option)
		{
			case 1:				
				if(!slime)
				{	
				printf("You start heading to the ruins. After some time you come across a group of slime \n");
				printf("They seem to be guarding a chest. What will you do?\n\n"); 
				printf("1. Attack \n2. Distract \n3. Sneak Attack \n4. Go back \n");
                        	printf("Choice: ");       
				scanf("%d", &option);
                        	printf(" \n");
				
                       		hp = rayBattle(option, count, hp);

                       		printf("You open the chest and acquire a ring of agility, granting you faster attack\n\n");

				count++;
				//printf("Count: %d \n",count);
                        	slime = true;
                       	        break;
				}
				else
				{
					printf("You already got this crystal, pick a different spot\n\n");
					hp = rayFourDirect(option, count, hp);
				}
			case 2:
				if(!rabbit)
				{
                                printf("You start heading to the House. After some distance you see the house \n");
                                printf("Upon entering the house you see Giant rats surrounding a chest. What will you do?\n\n");
                                printf("1. Attack \n2. Distract \n3. Sneak Attack \n4. Go back \n");
                                printf("Choice: ");
				scanf("%d", &option);                                                                                          
				printf(" \n");
				
				hp = rayBattle(option, count, hp);
				printf("You open the chest and acquire a ring of strength, granting you greater attack\n");
				count++;
				//printf("Count: %d \n",count);
                                rabbit = true; 
				break;
				}
				else
				{
					printf("You already got this crystal, pick a different spot\n\n");
					rayFourDirect(option, count, hp);
				}
			case 3:
				if(!rat)
				{
                                printf("You start heading to the spring. After a trek you see the spring in the distance \n");
                                printf("On the west side of the spring you see the chest. It is surrounded by horn rabbits\n");
                                printf("What will you do?\n\n");
                                printf("1. Attack \n2. Distract \n3. Sneak Attack \n4. Go back \n");
                                printf("Choice: ");
                                scanf("%d", &option);
                                printf(" \n");
				
                               	hp = rayBattle(option, count, hp);

                                printf("You open the chest and acquire a scroll of sharpness. Your sword is now sharper\n\n");

				count++;
				//printf("Count: %d \n",count);
                                rat = true;
				break;
				}
				else
                                {
                                        printf("You already got this crystal, pick a different spot\n\n");
					hp = rayFourDirect(option, count, hp);
                                }
			case 4:
				if(!goblin)
				{
                                printf("You start heading to the caves. Time ticks by until you reach the caves. \n");
                                printf("You see a bunch of goblins guarding the entrance. \n");
                                printf("Maybe the chest is inside. What will you do?\n\n");
                                printf("1. Attack \n2. Distract \n3. Sneak Attack \n4. Go back \n");
                                printf("Choice: ");
                                scanf("%d", &option);
                                printf(" \n");
				
                                hp = rayBattle(option, count, hp);

                                printf("You open the chest and acquire a scroll of weapon enchantment and two potions of healing");
			        printf("Your sword is now sharper\n\n");

				count++;
				//printf("Count: %d \n",count);
                                goblin = true;
                                break;
				}
				else
                                {
                                        printf("You already got this crystal, pick a different spot\n\n");             
					hp = rayFourDirect(option, count, hp);
                                }
                        default:
                                printf("Choice invalid, Try again\n\n");

			
		}
	}
	//printf("Hp: %d\n",hp);
	return hp;
}
int rayDice(int dice)
{
	
	int min = 1;
	int max = 20;
	int roll = 0;

	switch (dice)
	{
		case 4:
			max = 4;
			printf("D4");
			roll = (rand() % (max - min +1)) +min;
			printf("Dice roll: %d \n \n", roll);
			break;
		case 6:
			max = 6;
                        printf("D6 ");
                        roll = (rand() % (max - min +1)) +min;
                        printf("Dice roll: %d \n \n", roll);
                        break;
		case 8:
                        max = 8;
                        printf("D8 ");
                        roll = (rand() % (max - min +1)) +min;
                        printf("Dice roll: %d \n \n", roll);
                        break;
		case 10:
                        max = 10;
                        printf("D10 ");
                        roll = (rand() % (max - min +1)) +min;
                        printf("Dice roll: %d \n \n", roll);
                        break;
		case 12:
                        max = 12;
                        printf("D12 ");
                        roll = (rand() % (max - min +1)) +min;
                        printf("Dice roll: %d \n \n", roll);
                        break;
		case 20:
                        max = 20;
                        printf("D20 ");
                        roll = (rand() % (max - min +1)) +min;
                        printf("Dice roll: %d \n \n", roll);
                        break;

	
	}
	return roll;
}
int rayBattle(int option, int count, int hp)
{
	
	int roll = 0;
	int tempHp = hp;
	

	//printf("Choice: ");
	//scanf("%d", &option);
	//printf(" \n");
      
	
	//printf("RayBattle HP: %d\n", tempHp);

	switch(option)
	{
		case 1:
			printf("Attacking head on seemed to be a great idea \n");
			roll = rayDice(20);
			if(roll > 15)
			{
				printf("The battle was a breeze. No hp lost, go claim your prize\n\n");
			}
			else if(roll > 10)
			{
				printf("The battle took some time but overall was okay. Lose 5 hp \n\n");
				hp = hp- 5;
			}
			else
			{
				printf("It was a hard battle, you took some hits. Lose 10 hp \n\n");
				hp = hp- 10;
			}
			break;
		case 2:
			printf("You plan to distract the creatures with some nearby rocks \n");
			roll = rayDice(20);

			if(roll > 15)
			{
				printf("Success \n");
				printf("You have sucessfully distracted the monsters. Go claim your prize \n");
			}
			else
			{
				printf("Failure \n");
				printf("Instead of throwing the rock away from the monster, you threw it at the monsters. Lose 5 hp \n\n");
				hp = hp - 5;
			}
			break;
		case 3:
			printf("You plan to sneak attack \n");
			roll = rayDice(20);

                        if(roll > 10)
                        {
                                printf("Success \n");
                                printf("You have sucessfully sneak attacked the monsters. No health lost. Go claim your prize \n\n");
                        }
                        else
                        {
                                printf("Failure \n");
                                printf("As you move in for a sneak attack you stepped on a twig, alerting the monster to your presence. \n");
				printf("After a long battle, you prevailed in your fight. Lose 5 hp. \n\n");
                        	hp = hp- 5;
			}
                        break;
		case 4: //go back
			hp = rayFourDirect(option, count, hp);

		default:
			printf("Invalid choice, Try again\n\n");

	}
	return hp;
}
int rayFight(int hp)
{
	int orcHp = 100;
	int count = 0;
	int opt = 0;	
	int roll = 0;

	while(orcHp > 0 && hp > 0)
	{	
		
		printf("-------------------------------\n\n");
		printf("Orc HP: %d \n\n\n", orcHp);
		printf("HP: %d \n\n",hp);
		printf("-------------------------------\n\n");

		printf("1. Attack\n2. Use potion\n");
		printf("Choice: ");
		scanf("%d", &opt);
		printf("\n\n");	
	
		switch(opt)
		{
			case 1:
			{
				printf("2 attacks\n");
				roll = rayDice(8);
				orcHp = orcHp - roll;
				roll = rayDice(8);
				orcHp = orcHp - roll;

				printf("Doggo attacks\n");
				roll = rayDice(4);
				orcHp = orcHp - roll;

				printf("Orc attacks\n");
				roll = rayDice(8);
				hp = hp - roll;
				break;
			}
			case 2:
			{
				if(count < 2)
				{
					printf("You down a potion\n");
					roll = rayDice(20);
					hp = hp + roll;

					printf("Orc attacks\n");
					roll = rayDice(10);
					hp = hp - roll;
					//break;
					count++;
				}
				else
				{
					printf("No more potions left\n\n");
					
				}
				break;
			}
		}
	
	}
	return hp;
}

void stanleysRoom(void) 
{
	printf("Welcome to Stanley's Adventure Room!\n");
	printf("You enter a mysterious chamber with glowing runes on the walls...\n");
	int keepPlaying = 1;
	int choice;
	int randomNumber;
	int coins = 0;
	int inventory[5] = {0, 0, 0, 0, 0};
	char* itemNames[5] = {"Sword", "Shield", "Potion", "Key", "Treasure"};
	int dungeonLevel = 1;
	int hasSecretCode = 0;
	while(keepPlaying)
	{
		printf("\n=== LEVEL %d OF STANLEY'S DUNGEON ===\n", dungeonLevel);
		printf("You have %d coins.\n", coins);
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
		printf("5. Explore deeper in the dungeon\n");
		printf("6. Leave the room\n");

		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("You begin searching the dimly lit corners of the dungeon...\n");
				randomNumber = rand() % 10 + 1;
				if(randomNumber > 7)
				{
					printf("You found a treasure chest! You gain %d coins.\n", 5 * dungeonLevel);
					coins += 5 * dungeonLevel;
					if(!inventory[4])
					{
						printf("You also found a rare treasure for your inventory!\n");
						inventory[4] = 1;
					}
					if(randomNumber == 10 && !hasSecretCode)
					{
						printf("Wait! You find a piece of parchment with a secret code!\n");
						hasSecretCode = 1;
					}
				}
				else
				{
					printf("You searched but found nothing of value.\n");
					if(randomNumber == 1)
					{
						printf("Oh no! You triggered a trap! You lose 1 coin.\n");
						if(coins > 0)
							coins--;
					}
				}
				break;

			case 2:
				printf("A shadow lurks in the corner, eyes glowing in the darkness...\n");
				randomNumber = rand() % 10 + 1;

				int monsterPower = dungeonLevel * 2;
				if(inventory[0]) 
				{
					printf("You draw your sword to fight the level %d monster!\n", dungeonLevel);

					int playerPower = randomNumber;
					if(inventory[1]) {
						playerPower += 2;
					}

					if(playerPower > monsterPower)
					{
						printf("You defeated the monster and gained %d coins!\n", 3 * dungeonLevel);
						coins += 3 * dungeonLevel;
						printf("The monster drops something shiny!\n");
						if(randomNumber == 10 && !inventory[3])
						{
							printf("It's a key! You add it to your inventory.\n");
							inventory[3] = 1;
						}
					}
					else
					{
						printf("The monster was too strong! You lost %d coins running away.\n", dungeonLevel);
						if(coins >= dungeonLevel)
							coins -= dungeonLevel;
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
						printf("You got injured and lost %d coins.\n", dungeonLevel + 1);
						if(coins >= dungeonLevel + 1)
							coins -= dungeonLevel + 1;
						else
							coins = 0;

						if(inventory[2])
						{
							printf("You drink your healing potion, recovering some strength!\n");
							coins += dungeonLevel;
							inventory[2] = 0;
							printf("Your potion is now empty.\n");
						}
					}
				}
				break;

			case 3:
				printf("A mysterious merchant appears from the shadows...\n");
				printf("\"What would you like to buy, traveler?\" the merchant asks.\n");
				printf("1. Sword (%d coins)\n", 5);
				printf("2. Shield (%d coins)\n", 3);
				printf("3. Potion (%d coins)\n", 2);
				printf("4. Key (%d coins)\n", 7);
				printf("5. Cancel\n");

				if(hasSecretCode)
				{
					printf("6. Special item (10 coins) - UNLOCKED WITH SECRET CODE\n");
				}

				int buyChoice;
				scanf("%d", &buyChoice);

				switch(buyChoice)
				{
					case 1:
						if(coins >= 5 && !inventory[0])
						{
							printf("\"A fine weapon,\" the merchant says. \"Use it wisely.\"\n");
							inventory[0] = 1;
							coins -= 5;
						}
						else if(inventory[0])
						{
							printf("\"You already have a sword, brave one!\"\n");
						}
						else
						{
							printf("\"Come back when you have more coins, traveler.\"\n");
						}
						break;
					case 2:
						if(coins >= 3 && !inventory[1])
						{
							printf("\"This shield has protected many heroes before you.\"\n");
							inventory[1] = 1;
							coins -= 3;
						}
						else if(inventory[1])
						{
							printf("\"One shield is all you need for your journey.\"\n");
						}
						else
						{
							printf("\"Not enough gold in your pouch, I'm afraid.\"\n");
						}
						break;
					case 3:
						if(coins >= 2 && !inventory[2])
						{
							printf("\"Drink this when your need is greatest.\"\n");
							inventory[2] = 1;
							coins -= 2;
						}
						else if(inventory[2])
						{
							printf("\"You already carry my finest potion!\"\n");
						}
						else
						{
							printf("\"Return with more coins, adventurer.\"\n");
						}
						break;
					case 4:
						if(coins >= 7 && !inventory[3])
						{
							printf("\"This key opens a path unknown to most...\"\n");
							inventory[3] = 1;
							coins -= 7;
						}
						else if(inventory[3])
						{
							printf("\"The key you possess is all you require.\"\n");
						}
						else
						{
							printf("\"Such rare items demand more coin, I'm afraid.\"\n");
						}
						break;
					case 5:
						printf("\"Perhaps next time,\" the merchant says, fading back into the shadows.\n");
						break;
					case 6:
						if(hasSecretCode && coins >= 10)
						{
							printf("\"Ah, you know the secret code! Very well...\"\n");
							printf("The merchant hands you a strange amulet that glows with power.\n");
							printf("\"This will help you on your journey. Your dungeon level will now increase twice as fast!\"\n");
							coins -= 10;
							hasSecretCode = 2;
						}
						else if(!hasSecretCode)
						{
							printf("\"I don't understand what you're asking for,\" the merchant says with suspicion.\n");
						}
						else
						{
							printf("\"Even with the code, you need more coins for such a treasure!\"\n");
						}
						break;
					default:
						printf("The merchant looks confused by your request.\n");
				}
				break;

			case 4:
				printf("A magical stone tablet on the wall begins to glow...\n");
				randomNumber = rand() % 3;
				printf("It poses a riddle:\n");

				int answer;
				switch(randomNumber)
				{
					case 0:
						printf("I'm tall when I'm young, and short when I'm old. What am I?\n");
						printf("1. A human\n2. A candle\n3. A tree\n");
						scanf("%d", &answer);
						if(answer == 2)
						{
							printf("The tablet glows green! \"Correct!\" echoes a voice.\n");
							coins += 3;
							printf("3 coins appear before you!\n");
						}
						else
						{
							printf("The tablet turns red. \"Wrong!\" booms a voice.\n");
							printf("The answer was: A candle\n");
						}
						break;
					case 1:
						printf("What has keys but no locks, space but no room, and you can enter but not go in?\n");
						printf("1. A keyboard\n2. A map\n3. A dream\n");
						scanf("%d", &answer);
						if(answer == 1)
						{
							printf("The tablet glows green! \"Correct!\" echoes a voice.\n");
							coins += 3;
							printf("3 coins appear before you!\n");
						}
						else
						{
							printf("The tablet turns red. \"Wrong!\" booms a voice.\n");
							printf("The answer was: A keyboard\n");
						}
						break;
					case 2:
						printf("What gets wetter as it dries?\n");
						printf("1. Ice\n2. A sponge\n3. A towel\n");
						scanf("%d", &answer);
						if(answer == 3)
						{
							printf("The tablet glows green! \"Correct!\" echoes a voice.\n");
							coins += 3;
							printf("3 coins appear before you!\n");
						}
						else
						{
							printf("The tablet turns red. \"Wrong!\" booms a voice.\n");
							printf("The answer was: A towel\n");
						}
						break;
				}
				break;

			case 5:
				printf("You decide to venture deeper into the dungeon...\n");
				if(inventory[3])
				{
					printf("You use your key to unlock a mysterious door!\n");
					dungeonLevel++;
					printf("You've descended to dungeon level %d!\n", dungeonLevel);
					printf("The monsters will be tougher, but the rewards greater!\n");
					randomNumber = rand() % 4;
					if(randomNumber == 0)
					{
						printf("Unfortunately, your key breaks in the lock!\n");
						inventory[3] = 0;
					}

					int bonus = dungeonLevel * 2;
					printf("You find %d coins as you enter the new area!\n", bonus);
					coins += bonus;
				}
				else
				{
					printf("You find a locked door blocking your path downward.\n");
					printf("You'll need to find a key to progress deeper.\n");

					randomNumber = rand() % 10 + 1;
					if(randomNumber > 7)
					{
						printf("You discover a hidden passage around the door!\n");
						dungeonLevel++;
						printf("You've descended to dungeon level %d!\n", dungeonLevel);
						printf("The journey was treacherous though - you lost 2 coins.\n");
						if(coins >= 2)
							coins -= 2;
						else
							coins = 0;
					}
				}
				break;

			case 6:
				printf("You decide it's time to leave Stanley's Dungeon...\n");
				if(dungeonLevel > 1)
				{
					printf("You reached dungeon level %d and collected %d coins!\n", dungeonLevel, coins);
					printf("The spirits of the dungeon are impressed by your courage.\n");
				}
				else
				{
					printf("You barely scratched the surface of the dungeon's mysteries.\n");
				}
				printf("You return to the main hall with %d coins and your collected items.\n", coins);
				keepPlaying = 0;
				break;

			default:
				printf("The dungeon doesn't understand your intentions. Try again.\n");
		}

		if(hasSecretCode == 2 && choice == 5)
		{
			printf("Your magical amulet glows! You descend an additional level!\n");
			dungeonLevel++;
			printf("You are now at dungeon level %d!\n", dungeonLevel);
		}
	}

	printf("Returning to the main hall...\n");
}


