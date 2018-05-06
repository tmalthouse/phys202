#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *(strings[256]) = {
"You are my favorite person at Reed",
"Would you like to climb a mountain with me this weekend ;^) <3",
"You are the neutrons to my triga tubes",
";^D",
"That rustles my jimmies",
"You have insulted me!",
"Are you the value of bitcoin cause I want you to rise over time",
"Are you trimet cause I wanna ride you all day",
"Talk Shakespearean to me ;^}",
"Will you be my third \"wife\"?",
"Will you be the mountaineer to my Mt. Hood?",
"If I could only marry two people you would be one of them?",
"I would be willing to have a kid with you",
"What is love?\nBaby don't hurt me\nDon't hurt me \nNo more.",
"Let's get identical haircuts",
"Wanna get physics-al? ;^}",
"Let's talk about momentum...just like old times"
};

int main(int argc, char **argv) {
	int strct = 17;
	printf("Claire\nMessage beardy joe\nyou gotta\n");


	printf("\n\n\nIt is I, Beardy, after you messaged me. What would you like to say to me???\n");
	int count = 0;
	srand(time(NULL));

	while(1) {
		printf("> ");
		char s[256];
		char command[256];
		fgets(s, 256, stdin);
		int id = rand()%strct;
		printf("%s\n",strings[id]);
		sprintf(command, "say \"%s\"\n", strings[id]);
		system(command);
	}
}
