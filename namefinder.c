//my first project
#include <stdio.h>
#include <unistd.h>
int main() {
	char a[6] = {'a', 'b', 'c', 'd'}, b[6] = {'e', 'f', 'g', 'h'}, c[6] = {'i', 'j', 'k', 'l'},
	            d[6] = {'m', 'n', 'o', 'p'}, e[6] = {'q', 'r', 's', 't'}, f[6] = {'u', 'v', 'w', 'x'},
	                    g[6] = {'y', 'z'};
	char option1, option2, option3, option4;
	char newopt1[5], newopt2[5], newopt3[5], newopt4[5];
	char word[4];
	int opt1, opt2, opt3, opt4, i;
	printf("haloo there! let me show you a magic\n");
	printf("think of a four letter word\n");
	printf("you can input which option by using the letters corresponding to the options (i.e., if it is option_A you can input 'a', caps should be off)\n\n");
	printf("option_A(a,b,c,d)\n\noption_B(e,f,g,h)\n\noption_C(i,j,k,l)\n\noption_D(m,n,o,p)\n\noption_E(q,r,s,t)\n\noption_f(u,v,w,x)\n\noption_G(y,z)\n\n");
	printf("in which option does the first letter of the word belong: ");
	scanf(" %c", &option1);
	printf("in which option does the second letter of the word belong: ");
	scanf(" %c", &option2);
	printf("in which option does the third letter of the word belong: ");
	scanf(" %c", &option3);
	printf("in which option does the fourth letter of the word belong: ");
	scanf(" %c", &option4);

	// option1 checking
	i = 0;
	if (option1 == 'a') {
		newopt1[0] = a[0];
		newopt2[0] = a[1];
		newopt3[0] = a[2];
		newopt4[0] = a[3];
	} else if (option1 == 'b') {
		newopt1[0] = b[0];
		newopt2[0] = b[1];
		newopt3[0] = b[2];
		newopt4[0] = b[3];
	} else if (option1 == 'c') {
		newopt1[0] = c[0];
		newopt2[0] = c[1];
		newopt3[0] = c[2];
		newopt4[0] = c[3];
	} else if (option1 == 'd') {
		newopt1[0] = d[0];
		newopt2[0] = d[1];
		newopt3[0] = d[2];
		newopt4[0] = d[3];
	} else if (option1 == 'e') {
		newopt1[0] = e[0];
		newopt2[0] = e[1];
		newopt3[0] = e[2];
		newopt4[0] = e[3];
	} else if (option1 == 'f') {
		newopt1[0] = f[0];
		newopt2[0] = f[1];
		newopt3[0] = f[2];
		newopt4[0] = f[3];
	} else if (option1 == 'g') {
		newopt1[0] = g[0];
		newopt2[0] = g[1];
		newopt3[0] = g[2];
		newopt4[0] = g[3];
	} else {
		printf("wrong");
	}

	// option2 checking
	i = 0;
	if (option2 == 'a') {
		newopt1[1] = a[0];
		newopt2[1] = a[1];
		newopt3[1] = a[2];
		newopt4[1] = a[3];
	} else if (option2 == 'b') {
		newopt1[1] = b[0];
		newopt2[1] = b[1];
		newopt3[1] = b[2];
		newopt4[1] = b[3];
	} else if (option2 == 'c') {
		newopt1[1] = c[0];
		newopt2[1] = c[1];
		newopt3[1] = c[2];
		newopt4[1] = c[3];
	} else if (option2 == 'd') {
		newopt1[1] = d[0];
		newopt2[1] = d[1];
		newopt3[1] = d[2];
		newopt4[1] = d[3];
	} else if (option2 == 'e') {
		newopt1[1] = e[0];
		newopt2[1] = e[1];
		newopt3[1] = e[2];
		newopt4[1] = e[3];
	} else if (option2 == 'f') {
		newopt1[1] = f[0];
		newopt2[1] = f[1];
		newopt3[1] = f[2];
		newopt4[1] = f[3];
	} else if (option2 == 'g') {
		newopt1[1] = g[0];
		newopt2[1] = g[1];
		newopt3[1] = g[2];
		newopt4[1] = g[3];
	} else {
		printf("wrong");
	}

	// option3 checking
	i = 0;
	if (option3 == 'a') {
		newopt1[2] = a[0];
		newopt2[2] = a[1];
		newopt3[2] = a[2];
		newopt4[2] = a[3];
	} else if (option3 == 'b') {
		newopt1[2] = b[0];
		newopt2[2] = b[1];
		newopt3[2] = b[2];
		newopt4[2] = b[3];
	} else if (option3 == 'c') {
		newopt1[2] = c[0];
		newopt2[2] = c[1];
		newopt3[2] = c[2];
		newopt4[2] = c[3];
	} else if (option3 == 'd') {
		newopt1[2] = d[0];
		newopt2[2] = d[1];
		newopt3[2] = d[2];
		newopt4[2] = d[3];
	} else if (option3 == 'e') {
		newopt1[2] = e[0];
		newopt2[2] = e[1];
		newopt3[2] = e[2];
		newopt4[2] = e[3];
	} else if (option3 == 'f') {
		newopt1[2] = f[0];
		newopt2[2] = f[1];
		newopt3[2] = f[2];
		newopt4[2] = f[3];
	} else if (option3 == 'g') {
		newopt1[2] = g[0];
		newopt2[2] = g[1];
		newopt3[2] = g[2];
		newopt4[2] = g[3];
	} else {
		printf("wrong");
	}

	// option4 checking
	i = 0;
	if (option4 == 'a') {
		newopt1[3] = a[0];
		newopt2[3] = a[1];
		newopt3[3] = a[2];
		newopt4[3] = a[3];
	} else if (option4 == 'b') {
		newopt1[3] = b[0];
		newopt2[3] = b[1];
		newopt3[3] = b[2];
		newopt4[3] = b[3];
	} else if (option4 == 'c') {
		newopt1[3] = c[0];
		newopt2[3] = c[1];
		newopt3[3] = c[2];
		newopt4[3] = c[3];
	} else if (option4 == 'd') {
		newopt1[3] = d[0];
		newopt2[3] = d[1];
		newopt3[3] = d[2];
		newopt4[3] = d[3];
	} else if (option4 == 'e') {
		newopt1[3] = e[0];
		newopt2[3] = e[1];
		newopt3[3] = e[2];
		newopt4[3] = e[3];
	} else if (option4 == 'f') {
		newopt1[3] = f[0];
		newopt2[3] = f[1];
		newopt3[3] = f[2];
		newopt4[3] = f[3];
	} else if (option4 == 'g') {
		newopt1[3] = g[0];
		newopt2[3] = g[1];
		newopt3[3] = g[2];
		newopt4[3] = g[3];
	} else {
		printf("wrong");
	}

	printf("\n");

	// option printing
	printf("you can input which option by using the numbers corresponding to the options (i.e., if it is option1 you can input 1)\n\n");

	i = 0;
	printf("\noption_1:");
	while (newopt1[i] != '\0') {
		printf("%c, ", newopt1[i]);
		i = i + 1;
	}
	printf("\n");

	printf("\noption_2:");
	i = 0;
	while (newopt2[i] != '\0') {
		printf("%c, ", newopt2[i]);
		i = i + 1;
	}
	printf("\n");

	printf("\noption_3:");
	i = 0;
	while (newopt3[i] != '\0') {
		printf("%c, ", newopt3[i]);
		i = i + 1;
	}
	printf("\n");

	printf("\noption_4:");
	i = 0;
	while (newopt4[i] != '\0') {
		printf("%c, ", newopt4[i]);
		i = i + 1;
	}
	printf("\n\n");

	printf("in which option does the first letter of the word belong: ");
	scanf("%d", &opt1);
	printf("in which option does the second letter of the word belong: ");
	scanf("%d", &opt2);
	printf("in which option does the third letter of the word belong: ");
	scanf("%d", &opt3);
	printf("in which option does the fourth letter of the word belong: ");
	scanf("%d", &opt4);

	// option1 checking
	if (opt1 == 1) {
		word[0] = newopt1[0];
	} else if (opt1 == 2) {
		word[0] = newopt2[0];
	} else if (opt1 == 3) {
		word[0] = newopt3[0];
	} else if (opt1 == 4) {
		word[0] = newopt4[0];
	} else {
		printf("wrong input");
	}

	// option2 checking
	if (opt2 == 1) {
		word[1] = newopt1[1];
	} else if (opt2 == 2) {
		word[1] = newopt2[1];
	} else if (opt2 == 3) {
		word[1] = newopt3[1];
	} else if (opt2 == 4) {
		word[1] = newopt4[1];
	} else {
		printf("wrong input");
	}

	// option3 checking
	if (opt3 == 1) {
		word[2] = newopt1[2];
	} else if (opt3 == 2) {
		word[2] = newopt2[2];
	} else if (opt3 == 3) {
		word[2] = newopt3[2];
	} else if (opt3 == 4) {
		word[2] = newopt4[2];
	} else {
		printf("wrong input");
	}

	// option4 checking
	if (opt4 == 1) {
		word[3] = newopt1[3];
	} else if (opt4 == 2) {
		word[3] = newopt2[3];
	} else if (opt4 == 3) {
		word[3] = newopt3[3];
	} else if (opt4 == 4) {
		word[3] = newopt4[3];
	} else {
		printf("wrong input");
	}
	for(i=0; i<400; i++)
	{
		if(i<100)
		{
			printf("%c\n",word[0]);
			usleep( 10000 );
		}
		else if(i<200)
		{
			printf("%c%c\n",word[0],word[1]);
			usleep( 10000 );
		}
		else if(i<300)
		{
			printf("%c%c%c\n",word[0],word[1],word[2]);
			usleep( 10000 );
		}
		else
		{
			printf("%c%c%c%c\n",word[0],word[1],word[2],word[3]);
			usleep( 10000 );
		}
	}
printf("The word you guessed is: %c%c%c%c\n", word[0], word[1], word[2], word[3]);
printf("TADA");

return 0;
}

