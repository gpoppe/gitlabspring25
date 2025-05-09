//contributors
//GP
//Jovanny Gonzalez
//Joel Castro
//Ryan A
//Nicole Brooks
//Yoonhong Min
// Jessenia Hernandez Mora
//Gerard McCallion


// Angela Jovanovic


//Fatoma Babonjo


//Santiago Tecuanhuey Garcia 


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

// room 12 functions.
void room12Loading(const char *printOut, unsigned seconds);
void room12desertScenario(void);
void room12mountainScenario(void);
void room12jungleScenario(void);
void room12cosmicScenario(void);
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

void gameroom19(void);

void kobesRoom(void);

void angelasRoom26(char *item);
bool checkChekhov(char *mystery);
char room26Encounter(int random);

void carlosroom60(void);

void cameronDOOMFn(void);

void lab13nanup(void);
void Function23fbabonjo(void);
void room1game(void);


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
				room1game();
				break;
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
				gameroom19();
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
				int choice = 0;
				char inventory[3][30] = {"NULL", "NULL", "Chekhov's Gun"};
				char ally = 'X';
				char mystery[30] = "unknown";
				int count = 0;
				int random = 0;
				bool cliffhanger = false;
				bool chekhov = false;

				printf("\nAs you walk through the door, you find yourself standing atop a small hill overlooking a vast kingdom.\n");
				puts("You see towns and villages stretching out as far as the eye can see, but they appear empty, lifeless as far as you can tell.");
				puts("Even the capital city, marked by the unmistakably massive castle sitting in the center, seems like a once shining jewel dulled and left to rot.");
				puts("Something is very wrong here, and that is where you come in, my heroic friend.");
				printf("You, %s, must save this kingdom from the great threat that has befallen it!\n\n", name);
				puts("And as your dutiful narrator, I will assist you in your journey.");
				puts("I know exactly where you should start!");
				printf("Or well, technically, I know two places where you could start.\n\n");
				puts("To your left, there is an armory maintained by the imperial guard.");
				printf("Since they don't seem to be doing their jobs very well, I doubt anyone would mind terribly if you helped yourself to some of their stock.\n\n");
				puts("And to your right, there is an arcane tower previously inhabited by the great mage Bakington III, known for his mastery of magical artifacts.");
				puts("Last I heard, the poor fellow turned himself into approximately fourteen cheese wheels.");
				printf("So I doubt he’ll be needing those artifacts anytime soon.\n\n");
				puts("Oh, and do try to be careful with that gun in your waistband.");
				puts("I'm not sure where you got it from, and even worse, I'm not even sure you know how to use it.");
				printf("Just remember that's there and we should be fine.\n\n");
				puts("Now then, where would you like to go?");
				printf("1. Armory\n2. Arcane Tower\n3. Turn around and leave.\n");
				scanf("%d", &choice);
				printf("\n-----------------------------------_-^-_-----------------------------------\n");
				
				if(choice == 1 || choice == 2)
				{
					if(choice == 1)
					{
						printf("\n---------------\n");
						printf("| ARMORY PATH |");
						printf("\n---------------\n");
						printf("\nForearmed is forewarned, as they say. Or is it the other way around?\n\n");
						puts("No matter, as you step into the armory, you notice that much of the shelves and cases are barren.");
						puts("From the other side of the room, a soldier rushes in, moving frantically through the center aisle before he suddenly slips and falls.");
						printf("Looking terribly embarrassed, he picks himself up and grabs an item at random before running back from whence he came.\n\n");
						printf("Now alone, you take a moment to glance around.\n\n");
						puts("On the right-hand wall, you notice a gleaming sword with intricate carvings hanging from the center rack.");
						printf("And just off to the side, there sits a mannequin bearing a chest piece that seems to glow a faint shade of blue.\n\n");
						puts("Suddenly, that same soldier comes back into the room, taking the exact same path he took just moments before.");
						puts("And, wouldn’t you know it, he slips and falls again in the exact same spot.");
						printf("That can't just be a coincidence, can it?\n\n");
						puts("Well, what would you like to do?");
						printf("1. Pick up the sword.\n2. Don the armor.\n3. Take a closer look at the spot the where the soldier fell.\n");
						scanf("%d", &choice);
						printf("\n-----------------------------------_-^-_-----------------------------------\n");
					
						if(choice == 1)
						{
							printf("\nExcellent choice!\n");
							printf("As you take hold of the blade, you feel a great power thrumming in your hands.\n\n");
						
							strcpy(inventory[0], "Sword of Plot Advancement");
							count++;

							printf("\n-------------------------------------------------------------------\n");
							printf("| The Sword of Plot Advancement has been added to your inventory. |");
							printf("\n-------------------------------------------------------------------\n");
						}
						else if(choice == 2)
						{
							printf("\nI always say that the best defense is a good defense!\n");
							printf("And this piece of armor in particular feels as if it could shrug off anything that comes your way.\n\n");

							strcpy(inventory[0], "Plot Armor");
							count++;

							printf("\n------------------------------------------------\n");
							printf("| Plot Armor has been added to your inventory. |");
							printf("\n------------------------------------------------\n");
						}
						else
						{
							printf("\nYou…slip and fall. Hard.\n");
							puts("After getting up with some difficulty, you look down to find a banana peel sitting on the floor.");
							printf("How did you not notice that?\n\n");
							printf("Ah, doesn't matter, just pick it up.\n\n");

							strcpy(inventory[0], "Running Gag");
							count++;

							printf("\n------------------------------------------------\n");
							printf("| The Running Gag was added to your inventory. |");
							printf("\n------------------------------------------------\n");
						}
					}
					else if(choice == 2)
					{
						printf("\n---------------------\n");
						printf("| ARCANE TOWER PATH |");
						printf("\n---------------------\n");
						printf("\nAh, the allure of magic is ever persistent. Let's see what weird and wonderful things you find!\n\n");
						puts("As you step into the arcane tower, you find yourself faced with a spiral staircase that seems to go up forever.");
						printf("I hope you haven't been skipping leg day too often or else this is going to be rough.\n\n");
						puts("...or maybe not?");
						puts("As you make your way up a set of stairs, an alcove appears to open up in the wall next to you.");
						puts("Nestled inside, there are several items locked away in display cases.");
						printf("But the most noticeable item is the pair of sunglasses sat smack dab in the middle, it's case unlocked and open.\n\n");
						puts("Indulging your curiosity, you decide to climb up a bit higher, and wouldn't you know it: another alcove opens up.");
						puts("This one holds little more than a work bench, though it is covered in scattered tools and mechanical parts.");
						puts("There is a pocket watch, shiny and seemingly brand new, amongst the mess.");
						printf("It's presence feels significant.\n\n");
						puts("But something is telling you to check for at least one more alcove, so you begin climbing once more.");
						puts("And true to your assumption, the wall shifts once more.");
						puts("The pungent smell emanating from this one hits you with force of a tsunami.");
						puts("Once the tears clear from your eyes, you are shocked to find nothing more than a bright red fish on the floor.");
						printf("It's oddly difficult to tear your gaze away from it.\n\n");
						puts("Well, which item tickles your fancy?");
                				printf("1. The sunglasses, of course.\n2. The pocket watch, naturally.\n3. The fish.\n");
                				scanf("%d", &choice);
						printf("\n-----------------------------------_-^-_-----------------------------------\n");

						if(choice == 1)
						{
							printf("\nThe rule of cool, eh? I can't blame you.\n\n");
							puts("You make your way back down to grab the sunglasses.");
							printf("And as you tuck them away, you feel as though the future flashes before your eyes for a split second.\n\n");

							strcpy(inventory[0], "Foreshadowing");
							count++;

							printf("\n----------------------------------------------\n");
							printf("| Foreshadowing was added to your inventory. |");
							printf("\n----------------------------------------------\n");
						}
						else if(choice == 2)
						{
							printf("\nTime is something you can never have enough of, my friend.\n\n");
							puts("So you head down the stairs to pick up the pocket watch.");
							puts("As you fiddle around with it, a spring clatters onto the floor.");
							printf("But when you press down on the watch, you look up to find the spring right back where it was.\n\n");

							strcpy(inventory[0], "Time Loop");
							count++;

							printf("\n--------------------------------------------\n");
							printf("| A Time Loop was added to your inventory. |");
							printf("\n--------------------------------------------\n");
						}
						else
						{
							printf("\nReally?! You're really going to carry that around?\n\n");
							puts("You know what? Just take it");
							printf("Ugh, I shouldn't even be able to smell it, but I can!\n\n");

							strcpy(inventory[0], "Red Herring");
							count++;

							printf("\n------------------------------------------------\n");
							printf("| The Red Herring was added to your inventory. |");
							printf("\n------------------------------------------------\n");
						}
					}

					printf("Now that you've gotten your hands on an item of immeasurable power...\n\n");
					printf("I think it's time we head for the capital city!\n\n");
					puts("The walk is long and grueling...");
					puts("Bandits, trolls, and wyverns. Oh my!");
					printf("Blah, blah, blah---Let's get to the good part!\n\n");
					puts("As you make your way through the capital city, you notice signs of life all around you.");
					printf("But there is not a soul to be seen.\n\n");
					puts("It's not difficult to imagine what it would've looked like before all this big bad evil business began.");
					puts("The marketplace bustling, the royal courtyard teeming with flora and fauna, the people going about their daily lives...");
					printf("You can bring that all back for us, you know?\n\n");
					puts("Well, at any rate, you're approaching the castle gates.");
					printf("Now it'll just be you and---\n\n");

					random = rand() % 30;
					ally = room26Encounter(random);

					switch(ally)
					{
						case 'A':
							strcpy(inventory[1], "Offscreen Moment");
							count++;
							printf("\n-----------------------------------------------------------------\n");
							printf("| You have gained an ally! Offscreen Moment added to inventory. |");
							printf("\n-----------------------------------------------------------------\n");
							break;
						case 'B':
							strcpy(inventory[1], "Deus Ex Machina");
							count++;
							printf("\n----------------------------------------------------------------\n");
							printf("| You have gained an ally! Deus Ex Machina added to inventory. |");
							printf("\n----------------------------------------------------------------\n");
							break;
						case 'X':
							cliffhanger = true;
							printf("\n-------------------------------\n");
							printf("| Guess you're on your own... |");
							printf("\n-------------------------------\n");
							break;
					}

					printf("\nWell, time for the final confrontation, isn't it?\n\n");
					printf("I suppose I should finally tell you what you're up against, shouldn't I?\n\n");
					printf("1. Yes\n2. Absolutely\n3. I guess so...\n\n");
					// Input not actually used, just breaking up the wall of text with a choice so it's easier to follow.
					scanf("%d", &choice);
					printf("\n-----------------------------------_-^-_-----------------------------------\n");

					printf("\nThe truth is: you're not the first person to stumble into this world of ours.\n");
					printf("No, you see, we've acutally had quite a few strange interlopers waltz through.\n\n");
					puts("Most of them stuck around for an adventure or two and then left.");
					printf("But one in particular decided to stick around.\n\n");
					puts("Meorge GG Rartin was his name.");
					printf("A writer.\n\n");
					puts("He liked this world of ours, said it inspired him.");
					puts("But it wasn't long before he grew unsatisifed.");
					printf("Said the worldbuilding wasn't robust enough, needed a conflict to spice things up.\n\n");
					puts("I don't know how, but he got his hands on some very powerful magic.");
					puts("The kind that could change reality itself.");
					printf("And he put it to work immediately, made himself the villain of this story in the process.\n\n");
					printf("Nothing's been the same since.\n\n");
					puts("But you're here now, aren't you?");
					printf("Let's change the ending of this story, my friend.\n\n");
					puts("You push open the doors to the castle's central chamber.");
					printf("In the center, sat on the former King's throne, Meorge watches you enter.\n\n");
					printf("\"So, it's you who's been meddling with my story...\"\n\n");
					puts("He pushes himself up, and you notice his hand begin to crackle with magic.");
					printf("This is your moment.\n\n");
				
					while(count > 0)
					{
						int num = count + 1;
						printf("What do you want to do?\n\n");
						printf("1. Use %s\n", inventory[0]);
						if(count == 2)
						{
							printf("2. Use %s\n", inventory[1]);
						}
						printf("%d. Try to remember...\n", num);
						scanf("%d", &choice);
						printf("\n-----------------------------------_-^-_-----------------------------------\n");

						if(choice == 1)
						{
							angelasRoom26(inventory[0]);
							if((strcmp(inventory[1], "NULL")) == 0)
							{
								strcpy(inventory[0], "NULL");
							}
							else
							{
								strcpy(inventory[0], inventory[1]);
								strcpy(inventory[1], "NULL");
							}
							count--;
						}
						else if(choice == 2)
						{
							if((strcmp(inventory[1], "NULL")) == 0)
							{			
								puts("There's something you're forgetting.");
								puts("Something you have that could be very useful right now...");
								printf("But what is it? Enter a word:\n\n");
								scanf("%s", mystery);
								printf("\n-----------------------------------_-^-_-----------------------------------\n");

								chekhov = checkChekhov(mystery);
								if(chekhov == true)
								{
									count = 0;
								}
							}
							else
							{
								angelasRoom26(inventory[1]);
								strcpy(inventory[1], "NULL");
								count--;
							}
						}
						else if(choice == 3)
						{
							puts("There's something you're forgetting.");
                                                	puts("Something you have that could be very useful right now...");
                                                	printf("But what is it? Enter a word:\n\n");
                                                	scanf("%s", mystery);
                                                	printf("\n-----------------------------------_-^-_-----------------------------------\n");
						
                                                	chekhov = checkChekhov(mystery);
                                                	if(chekhov == true)
                                                	{
                                              			count = 0;
                                                	}
						}
					}

					if(chekhov == true)
					{
						// Chekhov's Gun ending
						printf("\n------------------------\n");
						printf("| CHEKHOV'S GUN ENDING |");
						printf("\n------------------------\n");
						printf("\nYou pull the gun out of your waistband.\n");
						puts("A quick inspection reveals an engraving on the side:");
						printf("Chekhov, it reads.\n\n");
						puts("Meorge looks horrified as you point the gun straight at him, clicking the safety off.");
						printf("And when you pull the trigger, he suddenly disintegrates into a sparkly cloud.\n\n");
						puts("A small rainbow appears where he once stood, and a bright light pulses outwards.");
						puts("You watch as the world around you turns instantaneously brighter.");
						printf("And when you step outside, a crowd gathered by the castle gates cheers for you!\n\n");
						puts("You did it! I knew you would!");
						printf("And now you may leave a hero, having restored this world to it former glory!\n\n");
						printf("Goodbye, %s, and safe travels.\n\n", name);
					}
					else if(cliffhanger == true)
					{
						// Cliffhanger ending
						printf("\n----------------------\n");
						printf("| CLIFFHANGER ENDING |");
						printf("\n----------------------\n");
						printf("\nThat's all you had.\n\n");
						printf("Now what?\n\n");
						puts("Meorge is still standing. He still has one good hand.");
						printf("You have to run.\n\n");
						puts("But you don't make it very far before you trip and fall, the gun in your waistband sliding out.");
						printf("As it hits the ground, it goes off, a bullet flying out to hit a nearby pillar.\n\n");
						printf("Oh no. That was a load-bearing pillar!\n\n");
						puts("The castle crumbles around you as you stumble towards the exit.");
						puts("You narrowly avoid getting crushed under a particularly large piece of rubble and slide through the doorway.");
						printf("Behind you, you hear Meorge's yelling begin to fade off into the distance.\n\n");
						printf("Oh dear, I'm afraid you might not have defeated him...\n\n");
						puts("But you must leave now.");
						puts("You have done all you could, and it was not enough.");
						printf("Goodbye, %s, and wish us luck...\n\n", name);
					}
					else
					{
						// Normal ending
						printf("\n-----------------\n");
						printf("| NORMAL ENDING |");
						printf("\n-----------------\n");
						printf("\nThe evil has been defeated!\n\n");
						puts("Your work is over, my friend. But ours is not.");
						printf("You have given us an opportunity to rebuild, and rebuild we will.\n\n");
						puts("But this is something we must do on our own.");
						printf("I'm sorry, but this is goodbye.\n\n");
						printf("%s, you are a hero...and you must leave.\n\n", name);
					}
				}
				else
				{
					printf("\n-----------------\n");
                                        printf("| COWARD ENDING |");
                                        printf("\n-----------------\n");
                                        printf("\nReally?! You're just going to leave?\n\n");
                                        printf("Some hero you turned out to be.\n\n");
                                        printf("You know what? Good riddance. Sayonara. See if I care.\n\n");
				}
				printf("You walk through a door that looks exactly like the one you came in from...\n\n");
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

// start of room 12(Santi's) room functions.

void room12Loading( const char *printOut, unsigned seconds){ // user 12 (Santi's) own function for load time + added sentence(s).
        printf("%s\n", printOut);
        sleep(seconds);
}


// red portal -> desert.
void room12desertScenario(void){
        int choice, subChoice;
        int waterSupply = 3;
        bool hasCompass = false;
        bool hasMap = false;
        bool foundOasis = false;

        printf("\n[DESERT OF SECRETS] The crimson portal deposits you onto burning sands.\n");
        printf("Two suns blaze overhead as a voice whispers: \"Find the True Oasis to return...\"\n");
        sleep(2);

        while (!foundOasis && waterSupply > 0){
            // stats overview.
            printf("\n----- WATER REMAINING: %d UNITS -----\n", waterSupply);
            if (hasCompass) printf("Your magical compass pulses steadily.\n");
            if (hasMap) printf("The ancient map glows faintly.\n");

            printf("\nWhat will you do?\n");
            printf("1) Search for water (costs 1 water)\n");
            printf("2) Follow strange dune formations (costs 1 water)\n");
            printf("3) Climb the tallest dune to survey (costs 2 water)\n");
            if (hasCompass) printf("4) Follow compass toward True Oasis (costs 1 water)\n");
            if (hasMap) printf("5) Use ancient map for shortcut (costs 1 water)\n");
            printf("\nYour choice: ");
            scanf("%d", &choice);

            // this processes the water cost.
            switch (choice){
                case 1: case 2: waterSupply -= 1; break;
                case 3: waterSupply -= 2; break;
                case 4: if (hasCompass) waterSupply -= 1; else continue; break;
                case 5: if (hasMap) waterSupply -= 1; else continue; break;
                default: printf("Choose again.\n"); continue;
            }

            // handle the main choices.
            switch (choice){
                case 1: // searches for water.
                    printf("\nYou scan the horizon for any signs of moisture...\n");
                    sleep(1);
                    if (rand() % 10 < 3){
                        printf("A mirage shimmers in the distance! You rush forward... it vanishes.\n");
                    }
                    else if (rand() % 10 < 6){
                        printf("You find a water-rich cactus! +1 water unit!\n");
                        waterSupply += 1;
                    }
                    else{
                        printf("You meet desert nomads who gift you a strange compass.\n");
                        hasCompass = true;
                        sleep(2);
                    }
                    break;

                case 2: // forms dunes.
                    printf("\nYou follow the mysterious patterns in the dunes...\n");
                    sleep(1);
                    if (rand() % 2 == 0){
                        printf("The dunes lead to buried ruins with ancient hieroglyphs!\n");
                        printf("1) Search for treasures\n2) Study the hieroglyphs\n");
                        scanf("%d", &subChoice);
                        if (subChoice == 1){
                            printf("You find a clockwork scarab that points the way!\n");
                            hasCompass = true;
                        }
                        else{
                            printf("You decipher symbols and copy a map from the wall.\n");
                            hasMap = true;
                        }
                        sleep(2);
                    }
                    else{
                        printf("A sandstorm approaches! You lose your bearings but find a tattered map!\n");
                        hasMap = true;
                    }
                    break;

                case 3: // allows user to climb the dunes.
                    if (waterSupply <= 0){
                        printf("You collapse from thirst before reaching the top...\n");
                        break;
                    }
                    printf("\nYou struggle up the massive dune, scanning the horizon...\n");
                    sleep(1);
                    if (hasCompass || hasMap){
                        printf("With your navigation aid, you spot the True Oasis!\n");
                        sleep(2);
                        printf("After hours of determined travel, you reach your destination!\n");
                        foundOasis = true;
                    }
                    else{
                        printf("You see several possible oases but can't tell which is real.\n");
                        printf("You discover an abandoned camp with navigation tools!\n");
                        if (rand() % 2 == 0) hasMap = true; else hasCompass = true;
                    }
                    break;

                case 4: // allows user to follow the compass.
                    printf("\nYou follow the ancient compass as it pulls you forward...\n");
                    sleep(2);
                    printf("Your faith in the compass leads you to the shimmering True Oasis!\n");
                    foundOasis = true;
                    break;

                case 5: // user uses map.
                    printf("\nYou study the ancient map's landmarks carefully...\n");
                    sleep(2);
                    printf("The map guides you perfectly to the hidden True Oasis!\n");
                    foundOasis = true;
                    break;
            }

            //last min emergency water depletion.
            if (waterSupply <= 0 && !foundOasis){
                printf("\nYour throat burns with thirst. A spectral figure approaches...\n");
                sleep(2);
                printf("\"Not your time yet.\" You awaken with 1 unit of water.\n");
                waterSupply = 1;
                hasCompass = false;
            }
        }

        // oasis ending for desertPortal :)
        if (foundOasis){
            printf("\n----- THE TRUE OASIS -----\n");
            printf("You stumble into the shade of towering palms. The central pool glows with magic.\n");
            sleep(3);
            printf("\nAs you touch the glowing waters, a tingling sensation spreads through you...\n");
            printf("The oasis dissolves into swirling colors, returning you to the portal chamber.\n");
        } else {
            printf("\nYou collapse into the sand, defeated by the harsh desert...\n");
            sleep(3);
            printf("A swirl of red energy rescues you, returning you to the portal chamber.\n");
        }
    }

// blue portal -> snowy mountain.
void room12mountainScenario(void){

        char friend1[50], friend2[50], friend3[50];
        int oxygenLevel = 100, stamina = 100, altitude = 0;
        bool hasRope = true, hasPickaxe = true;
        bool foundSecretRoute = false;

        printf("\n[MOUNTAIN OF WHISPERS] The azure portal deposits you onto an icy ledge.\n");
        printf("A fierce wind cuts through your gear as you gaze at the treacherous peak.\n");
        sleep(2);

        printf("\nWho are the 2 or 3 friends climbing with you today?\n");
        printf("Enter name of first friend: ");
        scanf("%s", friend1);
        printf("Enter name of second friend: ");
        scanf("%s", friend2);
        printf("Enter name of third friend (or type 'none'): ");
        scanf("%s", friend3);

        if (strcmp(friend3, "none") == 0 || strcmp(friend3, "NONE") == 0){
            printf("\nYou check your gear with %s and %s, preparing for the climb.\n", friend1, friend2);
        }
        else{
            printf("\nYou check your gear with %s, %s, and %s, preparing for the climb.\n", friend1, friend2, friend3);
        }

        // the main climbing loop.
        while (altitude < 100 && oxygenLevel > 0 && stamina > 0){
            // stats overview for this portal.
            printf("\n----- CLIMBER STATUS -----\n");
            printf("Altitude: %d%% | Oxygen: %d%% | Stamina: %d%%\n", altitude, oxygenLevel, stamina);

            int choice;

            if (altitude < 50){ // for lower/middle of the mountain.
                printf("\nThe challenging climb continues:\n");
                printf("1) Take the established route - safer but slower\n");
                printf("2) Try a shortcut - faster but riskier\n");
                printf("3) Make camp and rest to recover strength\n");
                if (altitude > 20) printf("4) Explore a mysterious cave entrance\n");
                printf("\nYour decision: ");
                scanf("%d", &choice);

                switch (choice){
                    case 1: // the safe route.
                        printf("\nYou follow the established route with proper technique.\n");
                        printf("%s leads this section, securing the lines expertly.\n", friend2);
                        altitude += 15;
                        stamina -= 15;
                        break;

                    case 2: // the risky route.
                        printf("\nYou opt for a treacherous ice chute that could save time.\n");
                        sleep(2);
                        if (rand() % 10 < 7){ // a 70% success rate.
                            printf("Your team navigates the dangerous passage successfully!\n");
                            altitude += 25;
                            stamina -= 30;
                        }
                        else{
                            printf("Disaster! %s slips on the ice! Everyone loses energy in the rescue.\n", friend1);
                            altitude += 5;
                            stamina -= 40;
                            sleep(3);
                        }
                        break;

                    case 3: // rest option.
                        printf("\nYou set up a temporary camp to rest and acclimate.\n");
                        stamina = stamina + 40 > 100 ? 100 : stamina + 40;
                        oxygenLevel = oxygenLevel + 20 > 100 ? 100 : oxygenLevel + 20;
                        break;

                    case 4: // the cave exploration option.
                        if (altitude > 20){
                            printf("\nYou explore the mysterious cave in the mountainside...\n");
                            sleep(2);
                            if (rand() % 3 == 0){
                                printf("Incredible! You find an ancient climber's journal with a secret route!\n");
                                foundSecretRoute = true;
                                sleep(2);
                            }
                            else{
                                printf("You discover a hot spring! The warm waters rejuvenate everyone.\n");
                                stamina = 100;
                            }
                        }
                        else{
                            printf("That's not an option yet. Choose again.\n");
                            continue;
                        }
                        break;

                    default:
                        printf("That's not a valid choice. Choose again.\n");
                        continue;
                }
            }
            else{ // the death zone *dun, dun, duuuuuun*
                printf("\nYou've reached the 'Death Zone' where oxygen is dangerously scarce:\n");
                printf("1) Push straight for the summit - fastest but most dangerous\n");
                printf("2) Take a measured pace with regular oxygen breaks\n");
                if (foundSecretRoute) printf("3) Use the secret route from the journal\n");
                printf("\nYour decision: ");
                scanf("%d", &choice);

                switch (choice){
                    case 1: // user pushes the summit option.
                        printf("\nYou make an aggressive push toward the summit...\n");
                        sleep(2);
                        if (oxygenLevel < 30 || stamina < 30){
                            printf("Your vision blurs from oxygen deprivation! %s saves you!\n", friend2);
                            stamina -= 50;
                            oxygenLevel -= 30;
                        }
                        else{
                            printf("The final climb tests your limits, but you reach the summit!\n");
                            altitude = 100;
                            stamina -= 40;
                            oxygenLevel -= 30;
                            sleep(3);
                        }
                        break;

                    case 2: // user selects the pace option.
                        printf("\nYou choose a measured approach with regular breaks.\n");
                        if (rand() % 10 > 2) { // 80% success rate.
                            printf("After hours of grueling effort, you reach the summit plateau!\n");
                            altitude = 100;
                            stamina -= 30;
                            oxygenLevel -= 20;
                            sleep(3);
                        } else {
                            printf("A sudden storm brings whiteout conditions, slowing progress.\n");
                            altitude += 20;
                            stamina -= 35;
                            oxygenLevel -= 25;
                        }
                        break;

                    case 3: // a secret route.
                        if (foundSecretRoute){
                            printf("\nYou follow the secret passage described in the journal...\n");
                            sleep(2);
                            printf("The hidden chimney bypasses the most dangerous section!\n");
                            printf("You emerge near the summit with relatively little effort!\n");
                            altitude = 100;
                            stamina -= 20;
                            oxygenLevel -= 15;
                            sleep(3);
                        }
                        else{
                            printf("That's not an option. Choose again.\n");
                            continue;
                        }
                        break;

                    default:
                        printf("That's not a valid choice. Choose again.\n");
                        continue;
                }
            }

            // applies environmental effects.
            oxygenLevel -= 5;
            stamina -= 5;
        }

        // the possible endings for the mountainPortal.
        if (altitude >= 100) {
            printf("\n----- SUMMIT REACHED -----\n");
            printf("You stand atop the world, gazing out over an ocean of clouds!\n");
            printf("After celebrating with %s and %s, you begin the descent.\n", friend1, friend2);
            sleep(3);
            printf("\nBack at base camp, you notice the blue portal glowing behind your tent.\n");
            printf("You step through the shimmering doorway, mission accomplished!\n");
        }
        else{
            printf("\nThe mountain has defeated your team this time...\n");
            sleep(2);
            printf("As you descend, the blue portal appears to take you back to the chamber.\n");
        }
    }


// green portal -> jungle.
void room12jungleScenario(void){
        int choice, subChoice;
        int health = 100;
        int time = 18; // starts at 6:00 PM (18:00).
        bool hasMap = false;
        bool hasWeapon = false;
        bool foundShelter = false;
        bool signalFire = false;

        printf("\n[EMERALD JUNGLE] The verdant portal deposits you in a dense, humid rainforest.\n");
        printf("Your satellite phone shows 6:00 PM. A rescue helicopter will arrive at 5:31 AM.\n");
        printf("You must survive the night and reach the extraction point by morning.\n");
        sleep(3);

        // the main jungle loop.
        while (time < 29 && health > 0) { // the user must survive until 5:00 AM (18 + 11 = 29).
            int hours = time % 24;

            // stats overview for this portal.
            printf("\n----- STATUS UPDATE -----\n");
            printf("Time: %02d:%02d %s | Health: %d%%\n",
                   hours == 0 ? 12 : (hours > 12 ? hours - 12 : hours),
                   0, // Simplified time display
                   (hours >= 12 && hours < 24) ? "PM" : "AM",
                   health);

            // the nighttime vs. daytime options.
            if (hours >= 19 || hours < 6) { // night time option.
                printf("\nThe jungle is alive with mysterious sounds in the darkness:\n");
                printf("1) %s\n", !foundShelter ? "Find shelter for the night" : "Reinforce your shelter");
                printf("2) %s\n", !foundShelter ? "Continue moving toward extraction" : "Sleep to recover strength");
                printf("3) %s\n", !foundShelter ? "Climb a tree for safety" : "Keep watch with a small fire");
                printf("\nYour choice: ");
                scanf("%d", &choice);

                switch (choice){
                    case 1: // the shelter actions.
                        if (!foundShelter){
                            printf("\nYou search for shelter as darkness falls...\n");
                            sleep(2);
                            if (rand() % 10 < 6){
                                printf("You discover a small cave that offers perfect protection!\n");
                                printf("Inside, you find a crude map scratched on the wall.\n");
                                foundShelter = true;
                                hasMap = true;
                            }
                            else{
                                printf("You build a basic lean-to shelter against a large tree.\n");
                                foundShelter = true;
                            }
                        }
                        else{
                            printf("\nYou reinforce your shelter with branches and thorny barriers.\n");
                            if (rand() % 10 < 3){
                                printf("While gathering materials, you find a useful machete!\n");
                                hasWeapon = true;
                            }
                        }
                        time += 2.0;
                        break;

                    case 2: // sleep and movement options.
                        if (!foundShelter){
                            printf("\nMoving at night is dangerous but might save time...\n");
                            sleep(2);
                            if (rand() % 10 < 5){
                                printf("You fall in the darkness, collecting cuts and bruises!\n");
                                health -= 15;
                            }
                            else{
                                printf("You discover an old logging trail heading in the right direction!\n");
                                hasMap = true;
                            }
                            time += 2.0;
                        }
                        else{
                            printf("\nYou try to sleep, recovering strength for tomorrow.\n");
                            sleep(2);
                            int sleepQuality = rand() % 10;
                            if (sleepQuality < 3){
                                printf("Something prowls around your shelter all night!\n");
                                health += 5;
                            }
                            else{
                                printf("You get enough rest despite the strange jungle sounds.\n");
                                health += 20;
                                if (health > 100) health = 100;
                            }
                            time += 6.0;
                        }
                        break;

                    case 3: // the tree & a fire options.
                        if (!foundShelter){
                            printf("\nYou climb a tall tree to stay safe during the night.\n");
                            sleep(2);
                            if (rand() % 2 == 0){
                                printf("From your perch, you spot distant lights - the extraction point!\n");
                                hasMap = true;
                            }
                            foundShelter = true;
                            time += 6.0;
                            health -= 10;
                        }
                        else{
                            printf("\nYou maintain a small fire through the night, keeping watch.\n");
                            sleep(2);
                            if (rand() % 10 < 2){
                                printf("A large predator stalks your camp! You keep it at bay with fire.\n");
                                health -= 15;
                                sleep(3);
                            }
                            else{
                                printf("The night passes without major incidents.\n");
                            }
                            time += 6.0;
                            signalFire = true;
                        }
                        break;

                    default:
                        printf("That's not a valid choice. Choose again.\n");
                        continue;
                }
            }
            else{ // day time.
                printf("\nDaylight filters through the jungle canopy:\n");
                printf("1) Push toward extraction point with urgency\n");
                printf("2) Move carefully while gathering resources\n");
                printf("3) Build a signal fire for the helicopter\n");
                if (hours >= 4){
                    printf("4) Find high ground to signal the approaching helicopter\n");
                }
                printf("\nYour decision: ");
                scanf("%d", &choice);

                switch (choice){
                    case 1: // fast user movement.
                        printf("\nYou move quickly through the jungle toward extraction.\n");
                        sleep(1);
                        if (hasMap){
                            printf("Your map helps you avoid obstacles and make excellent progress!\n");
                            time += 2.0;
                        }
                        else{
                            if (rand() % 10 < 4){
                                printf("Without a map, you get partially lost and waste time.\n");
                                time += 3.5;
                            }
                            else{
                                printf("You stumble upon a trail with directional markers!\n");
                                hasMap = true;
                                time += 2.0;
                            }
                        }
                        break;

                    case 2: // gather resources.
                        printf("\nYou search for useful items while maintaining progress.\n");
                        int finding = rand() % 10;
                        if (finding < 3){
                            printf("You identify several edible fruits that boost your energy!\n");
                            health += 15;
                            if (health > 100) health = 100;
                        }
                        else if (finding < 6 && !hasWeapon){
                            printf("You craft a serviceable spear from a fallen branch.\n");
                            hasWeapon = true;
                        }
                        else if (finding < 8){
                            printf("You find a weathered sign pointing toward the extraction zone!\n");
                            hasMap = true;
                        }
                        time += 3.0;
                        break;

                    case 3: // signal fire.
                        printf("\nYou gather materials and build a signal fire on high ground.\n");
                        sleep(2);
                        printf("Thick smoke rises above the canopy - perfect for being spotted!\n");
                        signalFire = true;
                        time += 2.0;
                        break;

                    case 4: // ending extraction prep.
                        if (hours >= 4){
                            printf("\nWith extraction approaching, you climb to higher ground...\n");
                            sleep(3);
                            printf("You hear helicopter rotors in the distance!\n");

                            if (time >= 28.5 && (signalFire || hasMap)){
                                printf("The helicopter spots your position and begins its approach!\n");
                                time = 29.5; // end scenario successfully.
                            }
                             else if (time < 28.0){
                                printf("The helicopter is still searching, but you're now prepared!\n");
                                signalFire = true;
                                time += 1.0;
                            }
                        }
                        else{
                            printf("That's not a valid option now. Choose again.\n");
                            continue;
                        }
                        break;

                    default:
                        printf("That's not a valid choice. Choose again.\n");
                        continue;
                }
            }
        }

        // checks for the end conditions.
        if (health <= 0){
            printf("\n----- MEDICAL EMERGENCY -----\n");
            printf("You collapse from injuries and exhaustion. As consciousness fades...\n");
            sleep(3);
            printf("You hear helicopter rotors... You awaken back in the portal chamber.\n");
        }
        else if (time >= 29){ // 5am+ extract time.
            printf("\n----- EXTRACTION TIME: 5:31 AM -----\n");
            sleep(2);

            if (signalFire || hasMap){
                printf("The rescue helicopter spots you and drops a harness!\n");
                sleep(3);
                printf("As you're pulled aboard, reality dissolves into swirling green light...\n");
                printf("You step back into the chamber of portals, jungle trial complete.\n");
            }
            else{
                printf("Without a signal, the helicopter searches but cannot find you.\n");
                sleep(2);
                printf("As hope fades, the jungle dissolves into green energy...\n");
                printf("You find yourself back in the portal chamber, mission incomplete.\n");
            }
        }
    }


 // purple portal -> outer space.
void room12cosmicScenario(void){
        int choice, subChoice, alienGameRound = 0;
        int oxygenLevel = 100;
        int shipIntegrity = 100;
        bool hasNavigation = false;
        bool hasTranslator = false;
        bool alienFriendly = false;
        int alienGameScore = 0;

        printf("\n[COSMIC FRONTIER] The violet portal hurls you through a kaleidoscope of stars...\n");
        printf("You materialize in a spacesuit, floating outside a damaged space station.\n");
        printf("Your mission: find a way back to Earth.\n");
        sleep(3);

        // the main space loop.
        while (oxygenLevel > 0 && shipIntegrity > 0){
            // stats overview for this portal.
            printf("\n----- SPACE STATUS -----\n");
            printf("Oxygen: %d%% | Ship Integrity: %d%%\n", oxygenLevel, shipIntegrity);
            printf("Equipment: %s%s\n", hasNavigation ? "Navigation, " : "", hasTranslator ? "Translator" : "");
            if (alienGameScore > 0) printf("Alien game progress: %d/3\n", alienGameScore);

            // prompt different options for user to choose.
            printf("\nYour options:\n");
            printf("1) Explore the damaged space station\n");
            printf("2) Study the nearby alien planet\n");
            printf("3) %s\n", hasNavigation ? "Repair the escape pod" : "Search for navigation systems");
            printf("4) %s\n", alienFriendly ? "Request alien assistance" :
                             (alienGameScore > 0 ? "Continue the alien's challenge" : "Scan for life signs"));
            printf("\nYour decision: ");
            scanf("%d", &choice);

            switch (choice){
                case 1: // check space station.
                    printf("\nYou enter the damaged station through an airlock...\n");
                    printf("1) Search command center\n2) Check engineering\n3) Investigate lab noises\n");
                    scanf("%d", &subChoice);

                    if (subChoice == 1){
                        printf("You access the main console to download navigation data...\n");
                        sleep(2);
                        if (rand() % 10 < 4){
                            printf("Success! You download star charts showing Earth's position!\n");
                            hasNavigation = true;
                        }
                        else{
                            printf("You only get partial data, but it's better than nothing.\n");
                        }
                    }
                    else if (subChoice == 2) {
                        printf("You search engineering for useful technology...\n");
                        if (rand() % 10 < 4){
                            printf("You find components that enhance your suit's oxygen efficiency!\n");
                            oxygenLevel += 20;
                            if (oxygenLevel > 100) oxygenLevel = 100;
                        }
                        else{
                            printf("You collect parts that might help repair an escape pod.\n");
                            shipIntegrity += 10;
                            if (shipIntegrity > 100) shipIntegrity = 100;
                        }
                    }
                     else{
                        printf("You investigate strange sounds in the science lab...\n");
                        sleep(2);
                        printf("A strange device pulses with energy similar to the portal!\n");
                        if (rand() % 10 < 4){
                            printf("It projects a hologram of a crystalline alien entity!\n");
                            printf("It seems to want to challenge you to a game of some kind.\n");
                            alienGameScore = 1;
                        }
                        else{
                            printf("The device creates a translator attachment for your helmet!\n");
                            hasTranslator = true;
                        }
                    }
                    oxygenLevel -= 10;
                    break;

                case 2: // case for alien planet.
                    printf("\nYou scan the alien planet below with your suit sensors.\n");
                    sleep(1);
                    if (rand() % 10 < 3){
                        printf("You detect exotic materials perfect for repairs!\n");
                        shipIntegrity += 20;
                        if (shipIntegrity > 100) shipIntegrity = 100;
                    }
                    else if (rand() % 10 < 7){
                        printf("You detect an energy signature similar to the portal!\n");
                        hasNavigation = true;
                    }
                    else{
                        printf("You detect what might be an alien communication beacon.\n");
                        alienGameScore = 1;
                    }
                    oxygenLevel -= 10;
                    break;

                case 3: // navigation/escape options.
                    if (hasNavigation){
                        printf("\nYou work on repairing the station's escape pod...\n");
                        sleep(2);
                        printf("1) Fix propulsion\n2) Repair life support\n3) Calibrate navigation\n");
                        scanf("%d", &subChoice);

                        if (rand() % 10 < 7){
                            printf("Your repairs are successful! The pod is nearly space-worthy.\n");
                            shipIntegrity += 20;
                            if (shipIntegrity > 100) shipIntegrity = 100;
                        }
                        else{
                            printf("You make some progress, but more work is needed.\n");
                            shipIntegrity += 10;
                        }

                        // checks if ready for launch.
                        if (shipIntegrity >= 80){
                            printf("\n----- ESCAPE POD LAUNCH SEQUENCE -----\n");
                            sleep(3);
                            printf("With repairs complete, you launch toward Earth!\n");
                            printf("As Earth appears in your viewport, purple energy surrounds you...\n");
                            printf("The portal returns you to the chamber, mission complete.\n");
                            oxygenLevel = 0; // end the scenario successfully.
                        }
                    }
                    else{
                        printf("\nYou search for navigation data to find Earth's position...\n");
                        sleep(2);
                        if (rand() % 10 < 5) {
                            printf("Success! You locate Earth's coordinates in the computer!\n");
                            hasNavigation = true;
                        } else {
                            printf("You find only partial data. You'll need to keep searching.\n");
                        }
                    }
                    oxygenLevel -= 10;
                    break;

                case 4: // case for alien interaction.
                    if (alienFriendly){
                        printf("\nThe crystalline entity helps you repair the escape pod...\n");
                        sleep(3);
                        printf("With its advanced knowledge, Earth's position is locked in!\n");
                        printf("The alien's technology transports you directly to Earth orbit.\n");
                        printf("Purple energy returns you to the portal chamber.\n");
                        oxygenLevel = 0; // ends the scenario successfully.
                    }
                    else if (alienGameScore > 0){
                        // game implementation.
                        printf("\n----- ALIEN CHALLENGE: ROUND %d -----\n", alienGameScore);
                        printf("The crystalline entity presents a cosmic pattern game:\n");
                        printf("1) Choose Pattern Alpha(Rock)\n");
                        printf("2) Choose Pattern Beta(Paper)\n");
                        printf("3) Choose Pattern Gamma(Scissors)\n");
                        scanf("%d", &subChoice);

                        int alienChoice = rand() % 3 + 1;
                        printf("The alien selects Pattern %d.\n", alienChoice);
                        sleep(2);

                        // the win conditions (rock-paper-scissors logic).
                        if ((subChoice == 1 && alienChoice == 3) ||
                            (subChoice == 2 && alienChoice == 1) ||
                            (subChoice == 3 && alienChoice == 2)){
                            printf("You win this round! The alien's colors shift approvingly.\n");
                            alienGameScore++;
                            sleep(2);
                        }
                        else if (subChoice == alienChoice){
                            printf("A draw! The alien seems intrigued and offers another attempt.\n");
                        }
                         else{
                            printf("You lose this round. The alien demonstrates the correct solution.\n");
                        }

                        if (alienGameScore >= 3){
                            printf("\nYou've won all three challenges! The alien vibrates with delight.\n");
                            sleep(3);
                            printf("It activates a teleportation system that will return you to Earth.\n");
                            printf("As you materialize in Earth orbit, purple energy pulls you back.\n");
                            alienFriendly = true;
                            oxygenLevel = 0; // ends the scenario successfully.
                        }
                    }
                    else{
                        printf("\nYou scan for intelligent life signs...\n");
                        sleep(2);
                        if (rand() % 10 < 5){
                            printf("You detect a non-biological intelligence in the station!\n");
                            printf("It manifests as a crystalline entity and seems curious about you.\n");
                            alienGameScore = 1;
                        }
                        else{
                            printf("You detect unusual energy patterns but nothing conclusive.\n");
                        }
                    }
                    oxygenLevel -= 10;
                    break;

                default:
                    printf("That's not a valid choice. The vacuum of space is unforgiving.\n");
                    continue;
            }

            // checks for the end conditions.
            if (oxygenLevel <= 0 || shipIntegrity <= 0) {
                if (alienFriendly || (hasNavigation && shipIntegrity >= 80)) {
                }
                else{
                    printf("\n----- EMERGENCY SITUATION -----\n");
                    sleep(2);
                    printf("As resources deplete, purple energy surrounds you...\n");
                    printf("The portal returns you to the chamber before true harm occurs.\n");
                }
            }
        }
    }


void room12game(void)
{
	int userChoiceSelection = 0;

        // introduce the user to my room :)
        printf("You cautiously step into Santi's Abandoned Vault!\n");
        sleep(2);

        room12Loading("As you enter the room, you feel the air start to feel heavy. Shadows dance on the walls as a singular light bulb brightens the room from the middle.\n", 5);
        room12Loading("Suddenly, gears grind and a circular platform rises, illuminating the entire room!\n", 3);
        room12Loading("Four glowing portals emerge, each humming with a strange whisper-like sound.\n", 3);
    
        while (userChoiceSelection != 5){
            printf("  +---------------------+  \n");
            printf("  |        [ ^ ]        |  <-- Portal straight ahead\n");
            printf("  |                     |  \n");
            printf("  |                     |  \n");
            printf("  |                     |  \n");
            printf("[<]|                   |[>] <-- Portals left and right\n");
            printf("  |        [ v ]        |  <-- Portal on the floor (below)\n");
            printf("  |         o           |  \n");
            printf("  |        /|\\          |  \n");
            printf("  |        / \\          |  \n");
            printf("  +---------------------+  \n");

            // print out the decisions for the user.
            puts("1) Left  — a blazing RED swirl");
            puts("2) Right — an icy BLUE vortex");
            puts("3) Ahead — a pulsating GREEN tunnel");
            puts("4) Floor — a cosmic PURPLE rift");
            puts("5) Chicken out and return to the main chamber -.- ");
            printf("\nEnter a number (1–5): ");
    
            // check if the user input is valid.
            while (scanf("%d", &userChoiceSelection) != 1 ||
                   userChoiceSelection < 1 ||
                   userChoiceSelection > 5) {
                printf("Invalid choice. Please enter 1–5: ");
                scanf("%*s");   // discard bad token
            }
    
            // use switch-case to select specified function based on decision.
            switch (userChoiceSelection){
                case 1:
                    printf("\n-- THE DESERT OF SECRETS --\n");
                    room12desertScenario();
                    break;
    
                case 2:
                    printf("\n-- THE MOUNTAIN OF WHISPERS --\n");
                    room12mountainScenario();
                    break;
    
                case 3:
                    printf("\n-- THE LOST ONE WITHIN THE AMAZON --\n");
                    room12jungleScenario();
                    break;
    
                case 4:
                    printf("\n-- THE COSMIC FRONTIER --\n");
                    room12cosmicScenario();
                    break;
    
                case 5:
                    printf("\nYou step back from the portals with caution and return to the main room.\n");
                    break;
            }
    
            // take a brief pause before re-showing menu(unless they chose 5).
            if (userChoiceSelection != 5){
                printf("\n(Reality blurs... you’re back at Santi's vault..)\n");
                sleep(3);
            }
        }

}

//end of room 12. 

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
	 int choice = 0;
    int attempts = 0;

    const char *actions[] = {
        "Tiptoe carefully across the room",
        "Throw a rock at the vials (what could go wrong?)",
        "Try to collect a vial for later use",
        "Yell really loud and see what happens",
        "Do a backflip for dramatic effect"
    };

    const char *results[] = {
        "A vial explodes and covers you in glitter. Harmless, but humiliating.",
        "The entire room shakes! One vial explodes, revealing confetti. That was close.",
        "You successfully collect a vial labeled 'Definitely Not Dangerous'.",
        "All the vials start to vibrate. Nothing explodes... yet.",
        "You land the backflip, but knock over a shelf. Miraculously, nothing breaks."
    };

    printf("\n--- Room 7: VIAL MAYHEM ---\n");
    printf("You step into Room 7... and instantly regret it.\n");
    printf("The floor is covered wall to wall with explosive red vials.\n");
    printf("They're bubbling, humming, and inexplicably labeled 'DO NOT TOUCH'.\n");
    printf("Whatever you do... don't screw this up. You have 5 actions.\n");

    while (attempts < 5)
    {
        printf("\nWhat will you do? (%d/5)\n", attempts + 1);
        for (int i = 0; i < 5; i++)
        {
            printf("%d. %s\n", i + 1, actions[i]);
        }

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("\nYou decide to: %s\n", actions[choice - 1]);
            int randEvent = rand() % 5;
            printf("Result: %s\n", results[randEvent]);
            attempts++;
        }
        else
        {
            printf("That's not a valid move. The vials gurgle disapprovingly...\n");
        }
    }

    printf("\nYou've survived the Vial Mayhem... for now.\n");
    printf("You tiptoe backward and return to the hallway.\n");
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

void gameroom19(void)
{
        int choice19;
        int move;
        int fight;
        int chest;
        int poke;
        printf("Welcome to the dungeon\n");
        printf("You awaken in a dimly light room, you see a big yellow rat as you approach it you see its a pikachu!\n");
        printf("You see pikachu is hurt, yoou check your pockets and find a super potion, ");
        printf("Do you 1. help pikachu, 2. attack the giant rat, 3. exit and go back to the main\n");
        scanf("%d", &choice19);

        switch(choice19)
        {
                case 1:
                        printf("You use your super potion and pikachu is thankful and decides to help you guide the dungeon\n");
                        printf("Pika pi, meaning i got you homie follow me\n");
                        printf("As you follow pikachu he leads you in a room with the boss MAgikarp. There is no way around him\n");
                        printf("WHat do you do?, 1.Fight the magikarp, or 2.Run around him\n");
                        scanf("%d", &fight);
                        if(fight == 1)
                        {
                                printf("A hud pops over pikachu with moves 1.Thunderbolt, 2.Quickattack 3.Iron tail 4.Rock Smash\n");
                                printf("pikachu awaits your command\n");
                                scanf("%d", &move);
                                switch(move){
                                        case 1:
                                                printf("Its super effective and magikarp faints\n");
                                                printf("Pikachu leads you further into the dungeon\n");
                                                break;
                                        case 2:
                                                printf("Pikachu launches himself at Magikarp\n");
                                                printf("Magikarp is unable to continue the battle\n");
                                                break;
                                        case 3:
                                                printf("Pikachu tail turn into iron smacking magikarp\n");
                                                printf("Magikarp head hurts and doesnt want to continue fighting and swims away\n");
                                                break;
                                        case 4:
                                                printf("Pikachu punches magikarp and the fish goes flying\n");
                                                printf("Pikachu is smug now and continues leading you out\n");
                                                break;
                                }


                        }
                        else
                        {
                                printf("Its a big fish... So yeah  he cant attack so you make it past him\n");
                        }

                        printf("As you and pikachu walk further into the dungeon you both find a ches\n");
                        printf("Do you open and risk another pokemon ambush, 1.Open the mysterious chest, 2. ignore the possible trap\n");
                        scanf("%d", &chest);

                        if(chest == 1)
                        {
                                printf("You open the chest...\n");
                                printf("You find a pokeball\nDO you take it with you in your journey\n");
                                printf("1.do you take it with you, 2. do you leave it\n");
                                scanf("%d", &poke);
                                if(poke == 1)
                                {
                                        printf("You add the pokeball into your inventory\n");
                                        printf("as you walk with pikachu you bond as you fight and make your way out the dungeon\n");
                                        printf("you make it to a large door, pikachu uses rocksmash to force th door open\n");
                                        printf("your journey has come to an end, you turn back and see pikachu wave goodbye\n");
                                        printf("You look at the pokeball in your pocket, do you catch pikachu and contiue your journey\n");
                                        printf("Yes you do you do not get a choice, you catch pikachu and your journey contunues\n");

                                }
                                else
                                {
                                        printf("Smarty pants, could have been a voltorb and iy was gam over\n");
                                        printf("YOur journey comes to and end as pikachu shows you the exit\n");
                                        printf("Pikachu opens the door for you, waves goodbye as you two bonded\n");
                                        printf("Too bad you didnt take the pokeball you could have caught pikachu. Hint Hint\n");

                                }
                        }
                        else
                        {
                                printf("you are a smarty pants, that chest couldve been a gimighoul\n");
                                printf("You tred foward seeing all sort of pokemons, after a few hours pikachu leads you to a large door\n");
                                printf("you did it, Pikachu uses iron tail to open the door for you\n");
                                printf("As you exit you look at pikachu, the doors slowly close as you stare at pikachus sad eyes\n");
                                printf("Pikachus only friend is leaving him, if only you had a pokeball\n");
                        }

                        break;
                case 2:
                        printf("pikachu is spooked and uses thunderbolt on you\n");
                        printf("Sorry you aint built like Ash, GAME OVER");
                        break;
                case 3:
                        printf("boo youre no fun bye");
                        break;
                default:
                        printf("Invalid choice");
                        break;
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
	srand(time(NULL));
    int playerDiceRoll = 1 + (rand() %6);
    int MrDiceDiceRoll = 1 + (rand() %6);
    int choice;
    const char *pokerHand[] = {"High", "Pair", "Two Pair", "Three of Kind", "Straight", "Flush", "Full House", "Four of Kind", "Straight Flush", "Royal Flush"};
    int playerScore = 0;
    int MrDiceScore = 0;
    int wallet = 100;
    printf("You went to room 44... You enter the room and suddenly the door closes behind you.\n");
    printf("You walk around aimless in the dark for a minute until you see a light. It's like a spotlight shining on something.\n");
    printf("You walk closer to the light and see a console plugged in to a tv. It's a console you never seen before and it's running a game called 'Mr.Dice Casino' and it shows a man with a die as a head and a nice suit and tie.\n");
    printf("You looked at the screen and said 'You feeling lucky?' and highlights the only option 'Yes'. You also realized that the controller only has one button.\n");
    printf("You picked up the controller and...\n");
    printf("1. Press yes to play.\n");
    printf("2. Drop the controller and walk away.\n");
    scanf("%d", &choice);

    while(choice == 2)
    {
        printf("You decided to drop the controller and walk a bit more.\n");
        printf("As you walk in darkness for another minute, you start to see the light again. You came closer and see that it is the same console and game. You were confused because you walked passed by it and now its in front of you, beckoning for you to play his game.\n");
        printf("You pick up the controller again and...\n");
        printf("1. Press yes to play.\n");
        printf("2. Drop the controller and walk away.\n");
        scanf("%d", &choice);
    }

    if(choice == 1)
    {
	printf("All of the sudden, a portal has formed in front of you and sucks you into the video game. You started falling from the sky until you slammed onto the ground unconscious.\n");
	printf("As you black out, a mysterious voice speaks to you.\n\n\n");
	printf("IF YOU ARE LISTENING, YOU MUST PLAY SOME GAMES TO WIN. WIN SOME MONEY. IT CAN HELP YOU IF YOU LOSE TO MR.DICE'S GAME...\n\n\n");
	printf("As you wake up, you realized you have landed in front of the entrance of 'Mr.Dice Casino'.\n");
	printf("You walk inside and notice people having fun! They are playing many games like poker, blackjack, slots and more. \n");
	printf("Although you are freaking out of what just happened, you feel your pockets and see that you have $100.\n");
	printf("You remember that a mysterious voice advice you to play some games to earn money. It didn't say how much to get, but you corner your resolve and decide to test your luck.\n");
	printf("You decide to...\n");
	printf("1. Go to the poker table \n");
	printf("2. Get on the slots.\n");
        printf("3. Get to the Blackjack table.\n");
	printf("4. Ask for help.\n");
	scanf("%d", &choice);

	while(choice == 1 || choice == 2 || choice == 3)
	{
	    if(choice == 1)
	    {
 		printf("You arrived at a poker table. The buy in is $20. Let see if you have the funds.\n");

		if(wallet >= 20)
		{
		    wallet -= 20;

		    printf("You can play! It's 5 draw poker. You and the dealer are given a hand. Whoever gets the highest hand win!\n");
		    const char *playerHand = pokerHand[1+rand()%9];
		    const char *dealerHand = pokerHand[1+rand()%9];

		    printf("Press 1 to see what you get: ");
		    scanf("%d", &choice);

		    printf("Your hand: %s  ||  dealer hand: %s \n", playerHand, dealerHand);


		    if(playerHand > dealerHand)
		    {
			wallet += 40;
			printf("You win! Now you have $%d \n", wallet);
		    }
		    else if(playerHand < dealerHand)
		    {
			printf("You lose. Now you have $%d \n", wallet);
		    }
		    else
		    {
			    wallet += 20;
			    printf("You tied. Now you have $%d \n", wallet);
		        }

		    printf("Do you want to play again? \n");
		    printf("1. Yes\n");
		    printf("2. No\n");
		    scanf("%d", &choice);

		    while(choice == 1)
		    {
			if(wallet >= 20)
			{
			    wallet -= 20;
			    const char *playerHand = pokerHand[1+rand()%9];
                            const char *dealerHand = pokerHand[1+rand()%9];
			    printf("Press 1 to see what you get: ");
                            scanf("%d", &choice);

                            printf("Your hand: %s  ||  dealer hand: %s \n", playerHand, dealerHand);


                            if(playerHand > dealerHand)
                            {
                                wallet += 40;
                                printf("You win! Now you have $%d \n", wallet);
                            }
                            else if(playerHand < dealerHand)
                            {
                                printf("You lose. Now you have $%d \n", wallet);
                            }
                            else
                            {
                                wallet += 20;
                                printf("You tied. Now you have $%d \n", wallet);
                            }

                            printf("Do you want to play again? \n");
                            printf("1. Yes\n");
                            printf("2. No\n");
                            scanf("%d", &choice);
			 }
			 else
		         {
			    printf("You can't play. Not enough funds.\n");
			    printf("Now what...\n");
                            printf("1. Go to the poker table \n");
                            printf("2. Get on the slots.\n");
                            printf("3. Get to the Blackjack table.\n");
                            printf("4. Ask for help.\n");
                            scanf("%d", &choice);
		         }
		    }

		    printf("Now what...\n");
                    printf("1. Go to the poker table \n");
                    printf("2. Get on the slots.\n");
                    printf("3. Get to the Blackjack table.\n");
                    printf("4. Ask for help.\n");
                    scanf("%d", &choice);

		}
		else
		{
		    printf("You don't have enough. You can't play.\n");
		    printf("Now what...\n");
		    printf("1. Go to the poker table \n");
        	    printf("2. Get on the slots.\n");
        	    printf("3. Get to the Blackjack table.\n");
        	    printf("4. Ask for help.\n");
        	    scanf("%d", &choice);
		}
	    }
	    else if(choice == 2)
	    {
		printf("You arrived to a slot machine. It's $5 to play. Let see if you have the funds\n");

		if(wallet >= 5)
		{
		    wallet -= 5;
		    printf("You can play! Simple, try to get all three numbers. You can get double for 3 of same number and 2 of same number.\n");

		    int slot1 = 1 + (rand()%9);
		    int slot2 = 1 + (rand()%9);
		    int slot3 = 1 + (rand()%9);

		    printf("Press 1 to start the slots: ");
		    scanf("%d", &choice);

		    printf("%d|%d|%d \n", slot1, slot2, slot3);

		    if(slot1 == slot2 && slot2 == slot3 && slot1 == slot3)
		    {
			wallet += 10;
			printf("You got all 3! Now you have $%d \n", wallet);
		    }
		    else if(slot1 == slot2 || slot2 == slot3 || slot1 == slot3)
		    {
			wallet += 7;
			printf("You got 2 of the same. Now you have $%d \n", wallet);
		    }
		    else
		    {
			printf("No matches. Now you have $%d \n", wallet);
	 	    }

		    printf("Do you want to play again? \n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &choice);

		    while(choice == 1)
		    {

			if(wallet >= 5)
			{
			    wallet -= 5;
			    int slot1 = 1 + (rand()%9);
                            int slot2 = 1 + (rand()%9);
                            int slot3 = 1 + (rand()%9);

                            printf("Press 1 to start the slots: ");
                            scanf("%d", &choice);

                            printf("%d|%d|%d \n", slot1, slot2, slot3);

                            if(slot1 == slot2 && slot2 == slot3 && slot1 == slot3)
                            {
                                wallet += 10;
                                printf("You got all 3! Now you have $%d \n", wallet);
                            }
                            else if(slot1 == slot2 || slot2 == slot3 || slot1 == slot3)
                            {
                                wallet += 7;
                                printf("You got 2 of the same. Now you have $%d \n", wallet);
                            }
                            else
                            {
                                printf("No matches. Now you have $%d \n", wallet);
                            }

                            printf("Do you want to play again? \n");
                            printf("1. Yes\n");
                            printf("2. No\n");
                            scanf("%d", &choice);
			}
			else
			{
			    printf("Sorry, not enough to play.\n");
			    printf("Now what...\n");
                            printf("1. Go to the poker table \n");
                            printf("2. Get on the slots.\n");
                            printf("3. Get to the Blackjack table.\n");
                            printf("4. Ask for help.\n");
                            scanf("%d", &choice);
			}
		    }

		    printf("Now what...\n");
                    printf("1. Go to the poker table \n");
                    printf("2. Get on the slots.\n");
                    printf("3. Get to the Blackjack table.\n");
                    printf("4. Ask for help.\n");
                    scanf("%d", &choice);

		}
		else
		{
		    printf("You don't have enough. You can't play.\n");
                    printf("Now what...\n");
                    printf("1. Go to the poker table \n");
                    printf("2. Get on the slots.\n");
                    printf("3. Get to the Blackjack table.\n");
                    printf("4. Ask for help.\n");
                    scanf("%d", &choice);
		}
	    }
	    else if(choice == 3)
	    {
		printf("You have arrived to the Blackjack table. The buy in is $10. Let see if you can play.\n");

		if(wallet >= 10)
	 	{
		    wallet -= 10;

		    printf("You can play! This is a short-fast pace blackjack. You and the dealer get a hand. You win if you get the higher number than the dealer or get 21. You lose if you get a lower number than the dealer or get over 21 (bust).\n");

		    int yourHand = (rand()%(25-12)+12);
		    int dealerHand = (rand()%(25-12)+12);

		    printf("Press 1 to see what you get: ");
		    scanf("%d", &choice);

		    printf("You: %d  ||  Dealer: %d\n", yourHand, dealerHand);

		    if(yourHand > 21 && dealerHand <= 21)
		    {
			printf("You busted. You lose. Now you have $%d\n", wallet);
		    }
		    else if(yourHand <= 21 && dealerHand > 21)
		    {
			wallet += 20;
			printf("Dealer busted. You win! Now you have $%d\n", wallet);
		    }
		    else if(yourHand > 21 && dealerHand > 21)
		    {
			printf("You both busted. You still technically lose. Now you have $%d\n", wallet);
		    }
		    else
		    {
			if(yourHand == dealerHand)
			{
			    wallet += 10;
			    printf("You tied. You win your money back. Now you have $%d\n", wallet);
			}
			else if(yourHand == 21 && dealerHand < 21)
			{
			    wallet += 20;
			    printf("You got 21! You win! Now you have $%d\n", wallet);
			}
			else if(yourHand < 21 && dealerHand == 21)
			{
			    printf("Dealer got 21. You lose. Now you have $%d\n", wallet);
			}
			else if(yourHand > dealerHand)
			{
			    wallet += 20;
			    printf("You have the higher number. You win! Now you have $%d\n", wallet);
			}
			else
			{
			    printf("Dealer have the higher number. You lose. Now you have $%d\n", wallet);
			}
		    }

		    printf("Do you want to play again?\n");
		    printf("1. Yes\n");
		    printf("2. No\n");
		    scanf("%d", &choice);

		    while(choice == 1)
		    {
			if(wallet >= 10)
			{
			    wallet -= 10;

			    int yourHand = (rand()%(25-12)+12);
			    int dealerHand = (rand()%(25-12)+12);

			    printf("Press 1 to see what happens: ");
			    scanf("%d", &choice);

			    printf("You: %d  ||  Dealer: %d\n", yourHand, dealerHand);

			    if(yourHand > 21 && dealerHand <= 21)
			    {
			        printf("You busted. You lose. Now you have $%d\n", wallet);
			    }
			    else if(yourHand <= 21 && dealerHand > 21)
			    {
			 	wallet += 20;
				printf("Dealer busted. You win! Now you have $%d\n", wallet);
			    }
			    else if(yourHand > 21 && dealerHand > 21)
			    {
				printf("You both busted. You still technically still lose. Now you have $%d\n", wallet);
			    }
			    else
			    {
				if(yourHand == dealerHand)
				{
				    wallet += 10;
				    printf("You tied. You win your money back. Now you have $%d\n", wallet);
				}
				else if(yourHand == 21 && dealerHand < 21)
				{
				    wallet += 20;
				    printf("You got 21! You win! Now you have $%d\n", wallet);
				}
				else if(yourHand < 21 && dealerHand == 21)
				{
				    printf("Dealer got 21. You lose. Now you have $%d\n", wallet);
				}
				else if(yourHand > dealerHand)
				{
				    wallet += 20;
				    printf("You have the higher number! You win! Now you have $%d\n", wallet);
				}
				else
				{
				    printf("Dealer got the higher number. You lose. Now you have $%d\n", wallet);
				}
			    }
			    printf("Do you to play again?\n");
			    printf("1. Yes\n");
			    printf("2. No\n");
			    scanf("%d", &choice);
			}
			else
			{
			    printf("You don't have enough. You can't play.\n");
                            printf("Now what...\n");
                            printf("1. Go to the poker table \n");
                            printf("2. Get on the slots.\n");
                            printf("3. Get to the Blackjack table.\n");
                            printf("4. Ask for help.\n");
                            scanf("%d", &choice);
			}
		    }

		    printf("Now what...\n");
                    printf("1. Go to the poker table \n");
                    printf("2. Get on the slots.\n");
                    printf("3. Get to the Blackjack table.\n");
                    printf("4. Ask for help.\n");
                    scanf("%d", &choice);
		}
		else
		{
		    printf("You don't have enough. You can't play.\n");
                    printf("Now what...\n");
                    printf("1. Go to the poker table \n");
                    printf("2. Get on the slots.\n");
                    printf("3. Get to the Blackjack table.\n");
                    printf("4. Ask for help.\n");
                    scanf("%d", &choice);
		}

	    }


	}

	if(choice == 4)
	{
	    printf("You proceed to ask a man who's playing poker. You ask them where they are but no answer. All of the sudden all the guests stopped what they are doing and started to stare at you.\n\n");
	    printf("The next thing you know, the guests starts grabbing you. You try to fight it, but it was not use as there were too many of you. They carried you to a room called 'Mr.Dice Challenge Room'. They proceed to forcely carry you inside.\n\n");

	    printf("The guests dropped you off to MrDice's office and went away. The chair turns towards you and Mr.Dice presents himself.\n\n");

	    printf("Mr.Dice: Welcome to my casino! I see you are interested in playing my game. HAHAHA!\n\n");

	    printf("1. What?! No I was sucked into this casino nightmare!\n");
	    printf("2. Heck yea I'm ready!\n");
	    scanf("%d", &choice);

	    if(choice == 1)
	    {
		printf("Mr.Dice: Well too bad! You basically wanted to be here by pressing 'Yes' in the beginning.\n");
	    }
	    else
	    {
		printf("Mr.Dice: HAHAHA! I love your enthusiasm!\n");
	    }

	    printf("Anyway, you are doomed to become a guest in my casino forever unless you play my game. If you win, you are free. But if you don't, you will be mine!\n");
	    printf("Now then... Do you feel lucky? Are you ready to play my game?\n");

	    printf("1. Yes\n");
	    printf("2. No\n");
	    scanf("%d", &choice);

	    if(choice == 1)
	    {
		printf("Mr.Dice: Great!\n\n");
	    }
	    else
	    {
		printf("Mr.Dice: No? Well you're forced to play anyway XD\n\n");
	    }

	    printf("Mr.Dice: The game we will play is Dice Battle. We roll a die and whoever gets the highest number gets a point. First to 5 points wins the game.\n\n");
	    printf("Mr.Dice: Now I feel so lucky, I'm willing to give you an advantage. You can have a die that rolls 2 to 7. Of course, you can always play with the fair die. Either way, I'm going to win...\n");
	    printf("1. Yes, give me the advantage\n");
            printf("2. No, I'm fine\n");
            scanf("%d", &choice);

	    if(choice == 1)
	    {
		printf("Alright the advantage is yours. Let's play and may luck be in your favor.\n");
		while(playerScore <= 4 && MrDiceScore <= 4)
		{
		    int playerDiceRoll = (1+(rand()%6)) + 1;
		    int MrDiceDiceRoll = 1 + (rand()%6);

		    printf("Press 1 to roll: ");
		    scanf("%d", &choice);

		    printf("You rolled: %d\n", playerDiceRoll);
		    printf("Mr.Dice rolled: %d\n", MrDiceDiceRoll);

		    if(playerDiceRoll > MrDiceDiceRoll)
		    {
			playerScore++;
			printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
		    }
		    else if(playerDiceRoll < MrDiceDiceRoll)
		    {
			MrDiceScore++;
			printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
		    }
		    else
		    {
			printf("It's a tie\n");
			printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
		    }
		    printf("------------------------------\n");
		}
		if(playerScore > MrDiceScore)
		{
		    printf("Mr.Dice: What?! You won?! I never lose!\n");
		    printf("Mr.Dice: *sigh* As promised, you are free to go keep all the money you earned...\n");
		    printf("Then, a portal formed behind you and you proceed to walk into it. After some time, you are back where you started. You let a sigh of relief as this nightmare is over.\n");
		}
		else
		{
		    printf("Mr.Dice: MWAHAHAHA! You lost and you are stuck here forever!\n");
	    	    printf("As he was laughing, you started to freak out. You begged Mr.Dice if there is any other way to get out of here.\n");
		    printf("Mr.Dice stopped laughing and thought about it.\n");
		    printf("Mr.Dice: You know what there is. Remember that $100 you had? You must've played one or two games before coming here to grow your wealth, right?\n");
		    printf("Mr.Dice: If you have more than what you started, I will take that money and I'll let you go. Anything less and you will be mine. Now give me your wallet!\n");
		    printf("You proceed to give your wallet to him...\n\n");
		    printf("Mr.Dice: Well it looks like you have $%d\n\n", wallet);

		    if(wallet > 100)
		    {
			printf("Well since you have more than $100, I'll let you go...\n");
			printf("Then, a portal formed behind you and you proceed to walk into it. After some time, you are back where you started. You let a sigh of relief as this nightmare is over.\n");
		    }
		    else
		    {
			printf("Well since you have less than $100, you are stuck here forever! MWAHAHAHA!\n");
			printf("As he laughed, a portal suddenly appear and sucks you in.\n");
			printf("Mr.Dice stopped and yelled: 'Hey, get back here! You lost and suppose to stay here!!!!'\n");
			printf("The portal closes just as Mr.Dice tries to grab you. The next thing you know, you are back where you started and out of the video game.\n");
			printf("You have no idea how you got out or who helped you... But you collapse and laughed as you just escaped your fate...\n");
		    }
		}
	    }
	    else
	    {
		printf("really? I like your confidence. Let's play and may luck be in your favor.\n");
                while(playerScore <= 4 && MrDiceScore <= 4)
                {
                    int playerDiceRoll = 1 + (rand()%6);
                    int MrDiceDiceRoll = 1 + (rand()%6);

                    printf("Press 1 to roll: ");
                    scanf("%d", &choice);

                    printf("You rolled: %d\n", playerDiceRoll);
                    printf("Mr.Dice rolled: %d\n", MrDiceDiceRoll);

                    if(playerDiceRoll > MrDiceDiceRoll)
                    {
                        playerScore++;
                        printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
                    }
                    else if(playerDiceRoll < MrDiceDiceRoll)
                    {
                        MrDiceScore++;
                        printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
                    }
                    else
                    {
                        printf("It's a tie\n");
                        printf("You: %d  ||  Mr.Dice: %d\n", playerScore, MrDiceScore);
                    }
                    printf("------------------------------\n");
                }
                if(playerScore > MrDiceScore)
                {
                    printf("Mr.Dice: What?! You won?! I never lose!\n");
                    printf("Mr.Dice: *sigh* As promised, you are free to go keep all the money you earned...\n");
                    printf("Then, a portal formed behind you and you proceed to walk into it. After some time, you are back where you started. You let a sigh of relief as this nightmare is over.\n");
                }
                else
                {
                    printf("Mr.Dice: MWAHAHAHA! You lost and you are stuck here forever!\n");
                    printf("As he was laughing, you started to freak out. You begged Mr.Dice if there is any other way to get out of here.\n");
                    printf("Mr.Dice stopped laughing and thought about it.\n");
                    printf("Mr.Dice: You know what there is. Remember that $100 you had? You must've played one or two games before coming here to grow your wealth, right?\n");
                    printf("Mr.Dice: If you have more than what you started, I will take that money and I'll let you go. Anything less and you will be mine. Now give me your wallet!\n");
                    printf("You proceed to give your wallet to him...\n\n");
                    printf("Mr.Dice: Well it looks like you have $%d\n\n", wallet);

                    if(wallet > 100)
                    {
                        printf("Well since you have more than $100, I'll let you go...\n");
                        printf("Then, a portal formed behind you and you proceed to walk into it. After some time, you are back where you started. You let a sigh of relief as this nightmare is over.\n");
                    }
                    else
                    {
                        printf("Well since you have less than $100, you are stuck here forever! MWAHAHAHA!\n");
                        printf("As he laughed, a portal suddenly appear and sucks you in.\n");
                        printf("Mr.Dice stopped and yelled: 'Hey, get back here! You lost and suppose to stay here!!!!'\n");
                        printf("The portal closes just as Mr.Dice tries to grab you. The next thing you know, you are back where you started and out of the video game.\n");
                        printf("You have no idea how you got out or who helped you... But you collapse and laughed as you just escaped your fate...\n");
                    }
                }
	    }

        }

    }
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
        printf("You choose to enter door number 6. \nImmediately after entering, you notice the door behind you disappear\nYou look around and find yourself in a forest.\nTo your right, there seems to be a clearing in the distance, to the left it's more forest, but behind you where the door used to be there is a cliff.\nWhich way do you choose? \n1. Right towards the clearing\n2. Left towards the Forest\n3. Backwards towards the cliff\n(Please Use Numbers to select): ");
        int current=0;
        int nextchoice=0;
        char itsname[50];
        scanf("%d", &current);
        //printf("%d", current);

        int random_number = (rand() % 20) + 1;

        switch(current)
        {
                case 1:
                {//clearing
                        printf("You head towards the clearing. As you walk, you feel more and more unsafe despite how open it is. Like, there are creatures at the forest's edge watching him, waiting for him to get too close.\n");

                printf("That’s when you hear a thump at the base of your foot. You look down and see this weird texture that replaces the soil.\n");

                printf("A small pause, followed by a rumbling on the ground, then the texture gets up to reveal itself as a large bug-like creature. Fight or flight. It’s your choice.\n");
 break;
                }
                case 2:
                {
                         printf("You walk into the forest and notice how it’s not like our own. It feels prehistoric. Suddenly, out jumps a massive bug-like monster.\n");
                        printf("You turn tail and run back to where you came from. With no other choice, you decide to jump down the cliff where there’s a river below.\n");
                        break;
                }
                case 3:
                {                                                                                   printf("You peer over the edge of the cliff. At the bottom is a river, but before you can think of what to do next, you’re pushed off by a powerful gust of wind.\n");
                        printf("As you fall, you see a giant bug-like creature.\n");

                        break;                                                              }
        }                                                                   
        if(current == 1)
        {
                printf("Which way do you choose? \n1. Fight\n2. Run\n(Please Use Numbers to select):");
                scanf("%d", &nextchoice);
                switch(nextchoice)
                {                                                                                   case 1:
                        {
                                printf("You raise your fists to fight. Terrible idea.\n");
                                break;
                        }                                                                           case 2:
                        {
 printf("You dash in the other direction. This is short-lived, though, as the creature flies after you.\n");
                                break;
                        }
                }
        }

        else if(current > 1)
        {
                //river
                printf("You fall into the river and begin to be swept down the rapids. You grab onto the edge of the river and are stuck between two options.\n");                                                                                  printf("Either swim with the flow and reach the end, or try your best to climb up the cliff.\n");                                                                                                                                   printf("Which way do you choose? \n1. Go with the flow\n2. Climb up the cliff\n(Please Use Numbers to select):");                                       scanf("%d", &nextchoice);                                   
                switch(nextchoice)
                {
                        case 1:
                        {
                                printf("You choose to swim with the river. Luckily for you, there seems to be a river back, but the creature is close behind. \n");
                                                                                                            printf("You get out and turn around to see the creature right behind you.\n");
                                                                                                            break;
                        }
 case 2:
                        {
                                printf("You choose to climb up the cliff. With adrenaline pumping through your veins, you are able to reach the top, but the creature is flying right behind you.\n");
                                break;
                        }
                }
        }

        printf("You’re hit by the creature and are launched into a pile of rocks. You look down and see these glowing gems beside you. You feel an energy coming off them, urging you to pick one of them up. \nWhich do you pick up? \n1. The red game shaped like a star. \n2. The turquoise gem shaped like a teardrop. \n3. The black gem shaped in an almost perfect circle.\n(Please Use Numbers to select):");
                                                                                    scanf("%d", &nextchoice);                                                   printf("After picking it up, you hear a voice in your head telling you to call its name. [Enter a Name]\n");                                            scanf("%s", itsname);
        //printf("%s", itsname);

        switch(nextchoice)
        {
                case 1:
                {
                        printf("From the gem appears a creature that looks like a blood-red, dog-sized scorpion. Immediately, %s shoots a ball of fire from its tail at the bug creature.\n", itsname);
                        break;                                                              }                                                                           case 2:
                {
                        printf("From the gem appears a creature that looks like a turquoise fox. Immediately, %s spits a stream of water from its mouth at the bug creature.\n", itsname);
 break;
                }
                case 3:
                {                                                                                   printf("From the gem appears a creature that looks like a midnight-colored owl. Immediately, %s throws sharp midnight colored feathers at the bug creature.\n",itsname);
                        break;
                }
        }

        for(int i = 0; i < (current + nextchoice+ 3);i++)
        {
                printf("bam \t");
        }

        printf("\nQuick on your feet, you use this instant to think of what to do next. You come up with two ideas, one more risky than the other. Which do you choose?\n1. Risky\n2. Safe\n");
        scanf("%d", &current);

        switch(current)
        {
                case 1:
                {
 printf("You call %s to attack the creature in the eyes. %s nods and jumps onto the creature, tearing apart its eyes.", itsname, itsname);
                        break;
                }
                case 2:
                {
                        printf("You call %s and run away to a rock structure you’ve seen nearby. The bug creature chases after you two. Once you reach the structure, you call on %s to blast away at its base. %s uses its power and breaks the bottom of the structure. The structure tips over and falls, crushing the creature right before it reaches you.", itsname, itsname, itsname);
                        break;
                }

        }

        if(random_number < 10 && current == 1)
        {
                printf("The plan was risky, and you pay for it as you watch the bug creature grab %s and throw them at you, dropping you both to the ground. \n%s is knocked out and you have two options: run away, leaving %s for dead, or fight, protecting %s till your last breath.", itsname, itsname, itsname, itsname);                                                                             printf("Which do you choose?\n1. Run\n2. Fight\n");                         scanf("%d", &nextchoice);                                                                                                                               switch(nextchoice)                                                          {
                        case 1:
                        {  
 printf("You choose to run away and don’t look back. You feel this heartbreak and guilt, like your soul is being ripped from your body, but you press on. In the distance is another door, and with tears in your eyes, you reach it, open the door, and escape.");
                                return;
                        }                                                                           case 2:
                        printf("You stand up, yelling with all your might. This energy flows through your body. The bug creature flies at you, and as you throw your punch, your arm is engulfed in the same color as %s. You punch the monster, sending it back, then look down to see %s at your side. You feel a warmth knowing %s is by your side, and with a final war cry, you launch an iridescent beam of energy at the creature; nothing is left but ash.",itsname,itsname,itsname);
                       break;                                                               }                                                                   }                                                                           else if(random_number >= 10 && current == 1);                               {                                                                                   printf("%s releases a beam of energy directly into the creatures head, killing it instantly. ",itsname);
        }

        printf("With the creature dead, you look down at %s. It feels like they’re telling you to follow them into the forest. After what you just went through, do you really trust them, though? Do you follow them or head in the other direction?",itsname);
        printf("Which do you choose?\n1. Follow\n2. Walk away\n");
        scanf("%d", &nextchoice);                                                   switch(nextchoice)                                                          {                                                                                   case 1:
                        printf("You follow %s and find that he’s leading you to a mural. The mural looks like you and %s. You stand there with %s feeling warm and safe, but it’s time to go. \nYou look to %s and say you have to go, but that you hope to see them again. %s nods, then unleashes a blinding energy. You open your eyes.",itsname,itsname,itsname,itsname,itsname);  
  break;                                                              case 2:
                        printf("You turn and walk away from %s. You feel this heartbreak and guilt, like your soul is being ripped from your body, but you press on. In the distance is another door; you reach it, open the door, and escape.",itsname);                                                                               break;                                                      }
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
	{
    int option1, option2, option3, option4, option5;
    int i;

    printf("Episode 23: Fatoma Babonjo\n");
    printf("In this room, you find yourself surrounded by what seems to be a large corridor. Shadowy columns litter your surroundings; no light shining on them to be distinctive. A plethora of windows spread across the walls, but it's impossible to see anything beyond them, aside from the almost blinding sunlight.\n");
    printf("Type in the corresponding number to make your choice:\n");
    printf("1. Continue walking down the room\n");
    printf("0. 'Yeah, no.' Turn 180 degrees and leave the room\n");
    scanf("%d", &option1);

    if (option1 == 1) {
        printf("You take no more than half a dozen steps until you stumble across a figure on the floor.\n");
        printf("They look...odd.\n");
        printf("At a first glance, it just looks like an unconscious young lady in her late teens, with messy blond hair hastily tied into a ponytail of sorts. Normal skin tone, average height...\n");
        printf("That's when the normalcy ends, however.\n");
        printf("You notice giant blotches of moles across her skin, making a bizarre mix of dark gray skin and normal beige skin across her entire form. Her hands and feet weren't human...they were paws. Paws that had claws like a mole, or a gopher, or some rodent that digs through dirt.\n");
        printf("Not only that, but there were very faint whiskers across this girl's face area...\n");                                                              printf("This is quite literally a mole person. What to do...?\n");
        printf("1. Try to wake her up\n");
        printf("2. Leave her be and continue by yourself\n");
        printf("0. Bail (Leave the room)\n");
        scanf("%d", &option2);

        if (option2 == 1) {
            printf("You gently slap the girl's cheek in quick succession.\n");
            printf("It doesn't take long for her to stir awake...\n");
            printf("'Maaauh?'\n");
            printf("She can't speak your language, but she seems to understand you.\n");
            printf("1. Try to work out some form of communication\n");
            printf("2. 'She gives me the heebie-jeebies...!' Knock her out out of fear\n");
            printf("0. Bail (Leave the room)\n");
            scanf("%d", &option3);
if (option3 == 1) {
                printf("The odd mole girl stares at you, blinking multiple times in confusion. After a moment, however, she snaps up to attention. You can see the metaphorical lightbulb flash above her head.\n");
                printf("'T-Tillage! Am...am Tillage...!'\n");
                printf("So you can understand her. Tillage grabs your arm and points towards the area you just came from.\n");
                printf("'Go bac?'\n");
                printf("Via body language, she asks you if you can go back via the exit. You tell her it's flooded.\n");
                printf("Despite the situation, Tillage gives you a determined nod.\n");
                printf("'O-kaye! Will...will find neu way out! Togetther!'\n");
                printf("This girl, who despite very clearly being a different species from you, shares your drive to see this through the end. The simple knowledge that you aren't alone fills you with hope, even against the unknown…\n");
                printf("END\n");
                printf("Now let's rewind time to before you picked a room! Thanks for playing!\n");
            } else if (option3 == 2) {
                printf("Flight or fight kicks in, and you choose fight out of instinct! You smack her with enough force to knock her out cold again.\n");
                printf("...You see a hole in the ceiling. Did this mole girl make it?  Maybe you can reach it...\n");
                printf("1. Climb the walls with nothing but arm strength\n");
                printf("2. Continue down the corridor in hopes of finding an item to help climb\n");
                printf("0. Bail (Leave the room)\n");
                scanf("%d", &option4);

                if (option4 == 1) {
                    printf("Gotta climb! You make purchase on the dusty walls and pull yourself up.\n");
                    printf("You climb up...\n");

                    for (i = 0; i < 6; i++) {
                        printf("...and up...\n");
                    }

                    printf("The ceiling's wider than you thought, but you reach the hole...! There's a very small speck of light through said hole, which means that there IS an exit!\n");
                    printf("It will be a tight fit, and an arduous climb, but sunk cost fallacy has already kicked in at this point, and you find yourself willing to clamor upwards, no matter how hard it may be.\n");
                    printf("You feel bad for leaving the mole girl behind, but it's you or her, and if you want to get out of here, it has to be you...!\n");
                    printf("As you squeeze through, you pray that you don't slip and fall...!\n");
                    printf("END\n");
                    printf("Now let's rewind time to before you picked a room! Thanks for playing!\n");
                } else if (option4 == 2) {
                    printf("You continue down the hall and find an illuminated staircase and a floating door, attached to no walls. That CAN’T be good..\n");
                    printf("1. Play it safe and take the staircase\n");
                    printf("2. Change things up and enter the geometrically impossible door\n");
                    printf("0. Bail (Leave the room)\n");
                    scanf("%d", &option5);
if (option5 == 1) {
                        printf("As you climb the staircase, you start to notice how...divine everything looks.\n");
                        printf("A small pit in your stomach forms, as you feel that you are about to stumble into something even more grand than you ever imagined...\n");
                        printf("Despite that gut feeling, you also have full confidence that you're closer to the end than you think.  Your wits got you this far, so why not just a little bit further...?\n");
                        printf("END\n");
                        printf("Now let's rewind time to before you picked a room! Thanks for playing!\n");
                    } else if (option5 == 2) {
                        printf("Figuring that you have nothing else to lose, you enter the impossible door.\n");
                        printf("...Not a smart move.\n");
                        printf("You come face to face with a mysterious, tall, bald man with a long nose in a blue velvet room.\n");
                        printf("'Welcome, dear guest...I've been expecting your arrival for quite some time.'\n");
                        printf("Seems like you're out of the dungeon... but now you’re into something deeper...\n");
                        printf("END\n");
                        printf("Now let's rewind time to before you picked a room! Thanks for playing!\n");
                    } else if (option5 == 0) {
                        printf("You dipped real quick. But the first room is still flooding!\n");
                        printf("Better pick another door...and FAST!\n");
                    }
                } else if (option4 == 0) {
                    printf("You dipped real quick. But the first room is still flooding!\n");
                    printf("Better pick another door...and FAST!\n");
                }
            } else if (option3 == 0) {
                printf("You dipped real quick. But the first room is flooding!\n");
                printf("Better pick another door...and FAST!\n");
            }
        } else if (option2 == 2) {
            printf("Boy, I sure am glad I'm not her.\n");
            printf("You ignore the girl and continue down the corridor.\n");
            printf("A glowing object catches your eye! Upon getting closer, you find out that it's...\n");

            const char *weapon[] = {
                "The Sword of Seals", "an Agate Megaaxe", "A Power Pole", "A Photon Saber",
                "A keyblade", "Dual Pistols, Ebony and Ivory", "A Stand Arrow", "A boot",
                "Five dollars", "The Power of Love", "Car keys", "A magical ring", "Exodia the Forbidden One"
            };
            int randomIndex = rand() % 13;
            printf("%s!\n", weapon[randomIndex]);
            printf("NOW we're cookin'!\n");

            printf("The moment you celebrate, however, you get attacked by a...Paradox Pokemon!?\n");
const char *pokemon[] = {
                "Great Tusk", "Scream Tail", "Brute Bonnet", "Flutter Mane", "Slither Wing", "Sandy Shocks",
                "Roaring Moon", "Winged King", "Walking Wake", "Raging Bolt", "Gouging Fire", "Iron Treads",
                "Iron Bundle", "Iron Hands", "Iron Jugulis", "Iron Moth", "Iron Thorns", "Iron Valiant",
                "Iron Serpent", "Iron Leaves", "Iron Crown", "Iron Boulder"
            };
            int randomMon = rand() % 22;
            printf("It's %s!\n", pokemon[randomMon]);
            printf("WATCH OUT!\n");
            printf("Using the tool you just acquired, you somehow managed to fell the time displaced pocket monster!\n");
            printf("However, roars could be heard in the distance...if you already encountered one, then more are bound to be further down...\n");
            printf("This weapon was here for a reason...looks like you don't just have to find your way out, but fight your way out...\n");
            printf("END\n");
            printf("Now let's rewind time to before you picked a room! Thanks for playing!\n");
        } else if (option2 == 0) {
            printf("You dipped real quick. But the first room is still flooding!\n");
            printf("Better pick another door...and FAST!\n");
        }
    } else if (option1 == 0) {
        printf("You dipped real quick. But the first room is still flooding!\n");
        printf("Better pick another door...and FAST!\n");
    }
}


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

void angelasRoom26(char *item)
{
	// This function prints unique narration depending on the item used.

	if((strcmp(item, "Sword of Plot Advancement")) == 0)
	{
		printf("\n-----------------------------\n");
		printf("| SWORD OF PLOT ADVANCEMENT |");
		printf("\n-----------------------------\n");
		printf("You hold the sword out in front of you, feeling its power flow through your veins.\n\n");
		puts("A hint of recognition flashes in Meorge's eyes, and he lets out a resigned sigh.");
		puts("He makes no attempt to evade your charge. It's for the plot, after all.");
		puts("And with a swift strike, you separate his dominant hand from the rest of his body.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Plot Armor")) == 0)
	{
		printf("\n--------------\n");
		printf("| PLOT ARMOR |");
		printf("\n--------------\n");
		printf("You unzip your jacket to reveal the enchanted armor hidden beneath it.\n\n");
		puts("Meorge laughs at your theatrics and fires off a devastating fireball.");
		puts("But his laughter quickly halts when the fire appears to simply dissipate into your chest.");
		printf("And as the armor begins to glow a bright orange, he starts to stumble backwards.\n\n");
		printf("But it is too late.\n\n");
		puts("The fireball shoots back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Running Gag")) == 0)
	{
		printf("\n---------------\n");
		printf("| RUNNING GAG |");
		printf("\n---------------\n");
		puts("You pull the banana peel out with a flourish, and Meorge looks on in confusion.");
		printf("You launch it up into the air. It disappears before your very eyes.\n\n");
		puts("Meorge laughs at the seemingly useless trick and moves towards you menacingly.");
		printf("But three steps in, he goes flying backwards, his body twisting gracelessly in the air.\n\n");
		puts("He lands with a sickening crunch, right on his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Foreshadowing")) == 0)
	{
		printf("\n-----------------\n");
		printf("| FORESHADOWING |");
		printf("\n-----------------\n");
		puts("You pull the sunglasses out of your pocket and put them on.");
		puts("Meorge looks a little jealous at how cool you look.");
		printf("But that doesn't stop him from trying to attack you.\n\n");
		puts("Suddenly, you see flashes of fire, feel yourself cooking medium-rare.");
		puts("Then: a mirror, shimmering with some unknown power.");
		printf("Feeling assured in your movements, you slide swiftly to the side.\n\n");
		puts("Meorge looks on in horror as his perfectly aimed fireball misses its mark.");
		puts("Instead, it heads straight for the mirror behind the spot you'd been standing in.");
		printf("The fireball dissipates into the glass, the glow turning orange.\n\n");
		puts("The mirror shoots the fireball back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Time Loop")) == 0)
	{
		printf("\n-------------\n");
		printf("| TIME LOOP |");
		printf("\n-------------\n");
		puts("You pull the pocket watch out of your pocket as Meorge readies a spell.");
		printf("A devastating fireball forms in his hands, and he launches it straight at you.\n\n");
		puts("You feel its heat searing your skin, seconds from cooking you to a crisp.");
		printf("But before it can, you press down on the watch, feeling time begin to reverse.\n\n");
		puts("You see Meorge preparing his spell once more.");
		printf("Taking advantage of the second chance, you slide swiftly to the side.\n\n");
		puts("Meorge looks on in horror as his perfectly aimed fireball misses its mark.");
		puts("Instead, it heads straight for a mirror just behind the spot you'd been standing in.");
		printf("The fireball dissipates into the glass, and it begins to glow orange.\n\n");
		puts("The mirror shoots the fireball back out and burns the hand Meorge reaches out to block it, his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Red Herring")) == 0)
	{
		printf("\n---------------\n");
		printf("| RED HERRING |");
		printf("\n---------------\n");
		puts("You pull out the strange, red fish and ready your aim.");
		puts("The fish arcs beautifully through the air.");
		printf("Meorge looks on with all the curiosity of a cat.\n\n");
		puts("He steps forward unsteadily, completely distracted.");
		puts("And then his foot catches on the edge of a step.");
		printf("He goes flying backwards, twisting ungracefully through the air.\n\n");
		puts("He lands with a sickening crunch, right on his dominant hand.");
		printf("A crippling blow for a writer...\n\n");
	}
	else if((strcmp(item, "Deus Ex Machina")) == 0)
	{
		printf("\n-------------------\n");
		printf("| DEUS EX MACHINA |");
		printf("\n-------------------\n");
		puts("Meorge suddenly pulls out a sheet of paper and a quill.");
		puts("As he begins to frantically write with his remaining hand, you feel reality shifting around you.");
		printf("You feel frozen in place, your body no longer your own.\n\n");
		puts("The ground shakes beneath your feet, and cracks begin to form.");
		puts("A massive sinkhole splits open right before your very eyes, growing by the second.");
		printf("Its ominous, purple glow overwhelms your sense, and you feel certain you are about to die.\n\n");
		puts("That is until the stranger's device begins to beep and something crashes through the ceiling.");
		puts("A dragon! And on its back sits the stranger, looking as stoic as ever.");
		printf("Its massive maw unhinges and scoops Meorge up in one fell swoop.\n\n");
		printf("The stranger nods at you as you regain control of yourself and flies off as quickly as he had arrived.\n\n");
		printf("Well, that was certainly unexpected...\n\n");
	}
	else if((strcmp(item, "Offscreen Moment")) == 0)
	{
		printf("\n--------------------\n");
		printf("| OFFSCREEN MOMENT |");
		printf("\n--------------------\n");
		puts("Meorge suddenly lifts his remaining hand high into the air.");
		puts("His somewhat awkward pose is at odds with the obvious power beginning to gather around him.");
		printf("Feeling as though you might need some help soon, you cup your hands and call out for Awf.\n\n");
		printf("You hope that he is near enough to assist you...\n\n");
		puts("And your hopes are answered as you hear the sweet sounds of metal clanging grow ever louder.");
		printf("A cat yowls and a cymbal crashes, and out comes flying a sprightly gnome.\n\n");
		printf("\"Help is here, buddy!\"\n");
		printf("Landing in front of Meorge, his face contorts into a menacing expression.\n\n");
		printf("\"But you might wanna look away for this one...\"\n");
		printf("You move your head to the side as he rolls up his sleeves.\n\n");
		puts("The sounds that follow I can hardly describe...");
		puts("If the pits of hell suddenly opened up in the middle of a category five hurricane...");
		puts("And then a giant, radioactive lizard began fighting an oversized gorilla...");
		printf("...well, that's sort of what this sounds like.\n\n");
		puts("And when silence finally falls, you turn to see Awf standing on top of a thoroughly defeated Meorge.");
		puts("Out of breath, the gnome gives you a bright smile and a thumbs up.");
		printf("And then he brushes himself off and rolls offscreen once more, ever the enigma...\n\n");
	}
}

bool checkChekhov(char *mystery)
{
	if((strcmp(mystery, "gun")) == 0 || ((strcmp(mystery, "Gun")) == 0))
	{
		printf("\n-------------------\n");
		printf("| Yes, that's it! |");
		printf("\n-------------------\n");
		return true;
	}
	else
	{
		printf("\n------------------------\n");
		printf("| No, that's not it... |");
		printf("\n------------------------\n");
		return false;
	}
}

char room26Encounter(int random)
{
	// This function implements a basic relationship system.
	// Players gain or lose relationship points with a character through dialogue options.
	// This will affect the item they receive, which affects the endings they can get.

	int relationship = 0;
	int response = 0;

	printf("You suddenly collide with a person coming around the corner.\n\n");

	printf("\n--------------------\n");
	printf("| RANDOM ENCOUNTER |");
	printf("\n--------------------\n");

	if(random <= 25)
	{
		puts("The stranger slides falls and slides back behind some boxes.");
		puts("You hear an alarming cacophany of noises before the stranger reappears, no worse for wear.");
		printf("Finally getting a good look at him, you see a strange, gnomish fellow smiling at you.\n\n");
		printf("\"Well, hello there! You wouldn't happen to be on a quest of some sort, would you?\"\n\n");
		printf("1. \"Yes, I am!\"\n2. \"None of your business, buddy.\"\n3. \"Depends who's asking...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\n\"Wonderful! I thought you looked like the heroic type!\"\n");
		}
		else if(response == 2)
		{
			printf("\n\"Wow. Someone stepped through the wrong door today.\"\n\n");
		}
		else if(response == 3)
		{
			printf("\n\"Me. I'm who's asking. I don't know what you're confused about, buddy.\"\n\n");
		}

		puts("He rubs at his beard, eyes squinted as if deep in thought.");
		printf("Suddenly, he holds a finger up and gestures at you to wait.\n\n");
		puts("He steps away, and another cacophany arises in the direction he left.");
		printf("When he returns, he is wearing an old, dented set of armor.\n\n");
		printf("\"You know, I used to be an adventurer like you. How bout I help you out?\"\n\n");
		printf("1. \"Did you take an arrow to the knee?\"\n2. \"Sure, why not?\"\n3. \"That would be great!\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			if(relationship > 0)
			{
				relationship--;
			}
			printf("\nHis face falls, a dark shadow glazing over his bright eyes.\n\n");
			printf("\"Yeah. Yeah, I did...And the monster stole my sweetroll too...\"\n\n");
		}
		else if(response == 2)
		{
			relationship++;
			printf("\n\"Not as enthusiastic as I'd like, but what the heck!\"\n\n");
		}
		else if(response == 3)
		{
			relationship++;
			printf("\n\"That's the spirit! Me and you, buddy!\"\n\n");
		}

		printf("The stranger suddenly tenses up.\n\n");
		printf("\"But, uh, there's something I gotta do before I help you out.\"\n\n");
		printf("He looks off to the side, fists clenched and gaze determined.\n\n");
		printf("\"You don't mind if I meet you there, right buddy?\"\n\n");
		printf("1. \"I do, actually.\"\n2. \"No, not at all!\"\n3. \"Eh, it's whatever.\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			if(relationship > 0)
			{
				if(relationship >= 2)
				{
					relationship -= 2;
				}
				else
				{
					relationship--;
				}
			}
			printf("\n\"Hmm...I guess you're on your own then, buddy.\"\n\n");
		}
		else if(response == 2)
		{
			relationship += 2;
			printf("\n\"Fantastic! See you at the castle, buddy!\"\n\n");
		}
		else if(response == 3)
		{
			printf("\n\"Uh, okay. I guess it is whatever, buddy.\"\n\n");
		}

		if(relationship <= 1)
		{
			printf("He shifts on his feet awkwardly.\n\n");
			printf("\"Think it's best we part ways now, buddy.\"\n");
			printf("The stranger walks away without another word. The sounds of chaos follow him.\n\n");
			return 'X';
		}
		else if(relationship > 1)
		{
			printf("He bounces on his feet, smiling brightly.\n\n");
			printf("\"Well, I best be going now, but call when you need me, and I'll be there!\"\n\n");
			printf("\"Oh, and the name's Awf S. Creen, by the way.\"\n");
			printf("The stranger walks away without another word. The sounds of chaos follow him.\n\n");
			return 'A';
		}
	}
	else
	{
		puts("You fall back, but the stranger manages to catch you by the wrist.");
		printf("And you look up to see an intimidating man in a black trench coat and sunglasses scowling at you.\n\n");
		printf("\"Watch where you're going next time.\"\n");
		printf("His voice comes out rough, as if he hasn't spoken in quite a while.\n\n");
		printf("1. \"My bad, man.\"\n2. \"Why don't YOU watch it, pal?\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\nHe stares down at you, face inscrutable.\n");
			printf("Then he nods approvingly at your response.\n\n");
		}
		else if(response == 2)
		{
			printf("\nHis scowl deepens, and he shakes his head in disapproval.\n\n");
		}
		else if(response == 3)
		{
			relationship++;
			printf("\nHe nods approvingly at your stoic silence.\n\n");
		}

		puts("He looks at you, and you look at him.");
		puts("With his dark sci-fi getup, he seems completely out of place here.");
		printf("Maybe even more than you are.\n\n");
		puts("Maybe you should ask him something?");
		printf("It's getting pretty awkward just standing here...in silence.\n\n");
		printf("1. \"So, you from around here?\"\n2. \"You gonna talk or what?\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			relationship++;
			printf("\n\"No.\"\n\n");
			printf("Apparently, that's all he's going to give you.\n\n");
		}
		else if(response == 2)
		{
			if(relationship > 0)
			{
				relationship--;
			}
			printf("\nHe scowls at you in silence.\n\n");
			printf("I don't know why you thought that would help.\n\n");
		}
		else if(response == 3)
		{
			relationship += 2;
			printf("\nYou both stand there...menacingly.\n\n");
		}

		printf("After a few solid moments of silence, he speaks again.\n\n");
		printf("\"You got a smoke?\"\n\n");
		printf("1. \"No, sorry.\"\n2. \"Smoking's a bad habit, man.\"\n3. \"...\"\n\n");
		scanf("%d", &response);
		printf("\n-----------------------------------_-^-_-----------------------------------\n\n");

		if(response == 1)
		{
			printf("\n\"Hm...alright.\"\n\n");
		}
		else if(response == 2)
		{
			relationship++;
			printf("\nHe shrugs in response.\n\n");
			printf("\"Yeah, guess you're right.\"\n\n");
		}
		else if(response == 3)
		{
			if(relationship > 0)
			{
				if(relationship >= 2)
				{
					relationship -= 2;
				}
				else
				{
					relationship--;
				}
			}
			printf("\nHe scowls at you.\n\n");
			printf("\"I feel like you're judging me.\"\n\n");
		}

		printf("He shifts on his feet, his leather boots creaking.\n\n");

		if(relationship <= 1)
		{
			printf("\"I'm done with this conversation.\"\n\n");
			printf("Quite rudely, he walks away without another word.\n\n");
			return 'X';
		}
		else if(relationship > 1)
		{
			puts("He reaches out a gloved hand, a strange device nestled in his palm.");
			printf("You take it hesitantly, and he gestures for you to put it in your pocket.\n\n");
			printf("\"I'll be seeing you.\"\n");
			printf("And with that, he walks away.\n\n");
			return 'B';
		}
	}
}

void room1game(void)
{
    printf("room1game\n");

    int choices[5];
    int decision;
    int selection;
    int i;

    printf("\n You are in red Space Station \n");

    for (i = 0; i < 5; i++)
    {
        printf("\nWhat do you choose? (%d of 5)\n", i + 1);
        printf(" 1) A sealed door\n");
        printf(" 2) A broken robot\n");
        printf(" 3) A terminal asking for input\n");
        printf(" 4) You find a mysterious glowing orb\n");
        printf(" 5) A vending machine\n");

        do
        {
            printf("Choose a path (1-5): ");
            scanf("%d", &selection);
        }
        while (selection < 1 || selection > 5);

        switch (selection)
        {
            case 1:
                printf("The red blinking light flashes faster as you approach:\n");
                printf(" 1) Press the emergency override button\n");
                printf(" 2) Leave it alone and back away\n");
                printf("Your choice: ");
                scanf("%d", &decision);
                if (decision == 1)
                {
                    printf("The door unlocks with a hiss... You gain access to the control room!\n");
                }
                else
                {
                    printf("You play it safe. The blinking gets annoying, but you feel secure.\n");
                }
                break;

            case 2:
                printf("A broken robot blocks the hallway:\n");
                printf(" 1) Try to repair it\n");
                printf(" 2) Climb over it carefully\n");
                printf("Your choice: ");
                scanf("%d", &decision);
                if (decision == 1)
                {
                    printf("You reconnect some wires and the robot thanks you with a salute.\n");
                }
                else
                {
                    printf("You trip slightly, but make it past. The robot sparks behind you.\n");
                }
                break;

            case 3:
                printf("The terminal screen flashes 'run diagnostics?':\n");
                printf(" 1) Type 'yes'\n");
                printf(" 2) Unplug the machine\n");
                printf("Your choice: ");
                scanf("%d", &decision);
                if (decision == 1)
                {
                    printf("The system reveals the location of hidden pods to escape!\n");
                }
                else
                {
                    printf("The lights go dark. You’ve disabled life support briefly. Good job.\n");
                }
                break;

            case 4:
                printf("The glowing orb buzzes with power:\n");
                printf(" 1) Touch the orb\n");
                printf(" 2) Walk away slowly\n");
                printf("Your choice: ");
                scanf("%d", &decision);
                if (decision == 1)
                {
                    printf("You feel electricity surge through you. You now glow slightly.\n");
                }
                else
                {
                    printf("You avoid a mysterious fate. The orb vanishes anyway.\n");
                }
                break;

            case 5:
                printf("The vending machine has snacks:\n");
                printf(" 1) Shake the machine\n");
                printf(" 2) Insert money\n");
                printf("Your choice: ");
                scanf("%d", &decision);
                if (decision == 1)
                {
                    printf("The machine beeps in anger and shocks you. The snack falls anyway.\n");
                }
                else
                {
                    printf("The machine dispenses the snack. You got your cosmic chips.\n");
                }
                break;
        }
        choices[i] = decision;
    }

    // Calculate score
    int score = 0;
    for (i = 0; i < 5; i++)
    {
        if (choices[i] == 1)
        {
            score += 10;
        }
        else
        {
            score += 5;
        }
    }

    printf("\nScore: %d\n", score);
    if (score > 40)
    {
        printf("You are a space hero! Command wants to put you on the next Mars mission!\n");
    }
    else if (score > 25)
    {
        printf("You survived the space station — good job, astronaut!\n");
    }
    else
    {
        printf("Maybe space isn't your thing. Stick to Earth-based missions for now.\n");
    }

    printf("You exit Room 1: Red Space Station Emergency and return to the main room.\n");
}



void PedroFunctionRoom(void)
{
	int opt37 = 0;
	puts("You have picked room 37, Pedro's room\n");
	puts("Let's start by visiting some planets in our solar system\n");
	puts("You have 3 planets to visit from\n");
	puts("1. Earth, 2. Mars, 3. Saturn");
	scanf("%d", &opt37);

	if(opt37 == 1)
	{
		printf("Great you have picked Earth\n");
		puts("                                   ");
		puts("              *   *                ");
		puts("           *         *         *    ");
		puts("         *             *     *   *   ");
		puts("        *     EARTH     *      *     ");
		puts("        *               *            ");
		puts("         *             *              ");
		puts("           *         *                ");
		puts("              *   *                   ");
		puts("                                    \n");
		printf("Before we continue take a second to look at the world we live in!\n");
		printf("From here we can see the Earth in the middle and the Moon to the right of it \n");
		printf("Now we can either go to 1.Our planet or 2 The Moon\n ");
		scanf("%d", &opt37);

		if(opt37 == 1)
		{
			puts("AHh you feel that? That fresh air that our planet provides for us and the perfect condtions to hold life\n");
			puts("To think all of our lifes are within this small planet we call home. Now where do you want to go?\n");
			printf("1. The Beach, 2. continue roaming the world\n ");
			scanf("%d",&opt37);

			if(opt37 == 1)
			{
				puts("Lets enjoy this view by the beach and relax until we feel we can move on\n");
				printf("1. You want to go for a swim or 2. stay here for a bit longer \n ");
				scanf("%d",&opt37);

				if(opt37 == 1)
				{
					puts("Alright lets relax with a little swimimg\n");
				
				}
			
			}
		}
		else if(opt37 == 2)
		{
			puts("Hello ");
		
		}

	}
	else if(opt37 == 2)
	{
		int array[] = {1,2,3};
		int Guess = rand()%sizeof(array);
		int Rguess = 1;
		printf("Great you have picked Mars\n");
		puts("                                   ");
		puts("     *                              ");
		puts("   *   *                             ");
		puts("     *         *   *               ");
		puts("            *         *            ");
		puts("          *             *          ");
		puts("         *      MARS     *         ");
		puts("         *               *         ");
		puts("          *             *          ");
		puts("            *         *            ");
		puts("               *   *               ");
		puts("                             *     ");
		puts("                           *   *   ");
		puts("                             *     ");
		puts("                                  \n");
		printf("WOW look at that MARS is also accompanied by PHOBOS and DEIMOS\n");
		printf("Interestingly we can also vist them but here's the catch lets play a game im going to pick a number between 1-3\n");
		printf("If you guess the number right we will be going to PHOBOS otherwise well just go to DEIMOS only.\n ");
		printf("Please enter a number between 1 - 3\n");
		scanf("%d",&opt37);
		
		if(opt37 == Rguess || opt37 == Guess)
		{

			printf("Congratulations You guessed my number and now we can go to PHOBOS\n");
		
		}
	        if(opt37 != 1) 
		{
			printf("Sadly you did not guess ny number but thats okay now we can go to DEIMOS\n");
		}
			
	
	}
	else if(opt37 == 3)
	{

		printf("Great you Have picked Saturn\n");
		puts("                                       ");
		puts("                  *   *                ");
		puts("               *         *             ");
		puts("             *             *           ");
		puts("            *    SATURN     *          ");
		puts("      (~~~~~~~~~~~~~~~~~~~~~~~~~~~)    ");
		puts("            *               *          ");
		puts("             *             *           ");
		puts("               *         *             ");
		puts("                  *   *                ");
		puts("                                     \n");
	        	
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

