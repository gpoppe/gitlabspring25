//contributors
//GP
//Jovanny Gonzalez
//Joel Castro
//Ryan A
//Nicole Brooks
//Yoonhong Min
// Jessenia Hernandez Mora
//Gerard McCallion

// Nanu Panchamurthy

// carlos acevedo

// Raymond Lee

//Jesse Navarro



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
void dairasBrain(void);

void jovannyFunction(int jovannyNum);

void room25game(void);

void room57G(void);

void user36Cafe(void);

void amoralesRoom9(void);

void room30game(void);

void joshRoom4(void);

void room59game(void);

void room22RandomTime(void);


void userRoom50(void);
void userRoom50Ending1Path(int choices[], int index);
void userRoom50Ending2Path(int choices[], int index);
void userRoom50Ending3Path(int choices[], int index);
void userRoom50Stats(int choices[]);


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

void carlosroom60(void);

void cameronDOOMFn(void);

void lab13nanup(void);
void Function23fbabonjo(void);
void cscuser1(void);


void PedroFunctionRoom(void);
void gameFuncHenry41(void);

//room 35
void rayFunct(void);
int rayFourDirect(int option, int count, int hp);
int rayDice(int dice);
int rayBattle(int option, int count, int hp);
int rayFight(int hp);


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
	srand(time(NULL));
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
									puts("YOU WON! You get to live your Utopian Life, for now\n");
									return;
											
								}
								case 2:
								{
									puts("You Lost, your life\n");
									return;
							
								}
							}
						}
					}
				}
				case 2:
				{
					puts("You went out of the door, but were met with a door out of a skyscraper. Goodbye World!\n");
					return;
				}
			}
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
							return;
    						}
    						case 130:
    						{
        						puts("You have gone in to a land of burning hot and will be dehydrated soon, Goodbye\n");
    							return;
						}
					}
				}
				case 2:
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
							return;
						}
					}
			}
		}
		case 3:
		{
			puts("Deep");
			for(int i=0;i<5;i++)
			{
				puts("You start drowning! And You don't make it long.\n");
			}
			return;
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
	printf("cscuser8 \n");
}


void room29game(void)
{
	printf("cscuser29\n");
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

	char* ingredients[] = {"Gatorade", "Caffeine", "Tears", "Blood", "Goat Hair", "Wilt Chamberlain's nail clippings"};
	int numOfIngredients = 6;
	int attemptsBeforeDrowning = 4;
	
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
			printf("Returning to main room, hope you know how to swim!\n");
			break;
		}

		switch (userChoice)
		{
			case 1:
			{
				int pickedVial = rand() % numOfIngredients;
				printf("There's something off about this vial, must be a clue!\n");
			}

			default:
			{
				printf("Incorrect choice, try again\n");
			}
	
		}
	}
}


void ryanRoom38(void)
{
	printf("Ryan cscuser38\n");
}

void carlosroom60(void)
{
	printf("welcome user60\n");
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
