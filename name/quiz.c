#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>

void displayscore()
{
	char name[20];
	float s;
	FILE *f;
	system("cls");
	f = fopen("score.txt", "r");
	fscanf(f, "%s%f", &name, &s);
	printf("\n\n\t\t ");
	printf("\n\n\t\t %s has secured the Highest Score %.2f", name, s);
	printf("\n\n\t\t ");
	fclose(f);
	getch();
}

void help()
{
	system("cls");
	printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
	printf("\n\n\tDATA STRUCTURE questions and the right answer is to be chosen among");
	printf("\n\n\tthe four options provided. Your score will be calculated at the");
	printf("\n\n\tend. Remember that the more quicker you give answer the more");
	printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
	printf("\n\n\tat the end. If you secure highest score, your score");
	printf("\n\n\twill be recorded. So BEST OF LUCK.");
}

void writescore(float score, char plnm[20])
{
	float sc;
	char nm[20];
	FILE *f;
	system("cls");
	f = fopen("score.txt", "r");
   

	fscanf(f, "%s%f", &nm, &sc);
	if (score >= sc)
	{
		sc = score;
		fclose(f);
		f = fopen("score.txt", "w");
		fprintf(f, "%s\n%.2f", plnm, sc);
		fclose(f);
	}
}

int main()
{
	int countq, countr;
	int r, i;
	int pa;
	int nq[6];
	int w;
	float score;
	char choice;
	char playername[20];
	time_t initialtime, finaltime;
	system("cls");
// randomize();
mainhome:
	system("cls");
	puts("\n\t\t WELCOME TO DATA STRUCTURE TEST PROGRAM....\n\n");
	puts("\n\t\t-------------------------------");
	puts("\n\t\t Enter 'S' to start game       ");
	puts("\n\t\t Enter 'V' to view high score  ");
	puts("\n\t\t Enter 'H' for help            ");
	puts("\n\t\t Enter 'Q' to quit             ");
	printf("\n\t\t-------------------------------\n\n\t\t  ");
	choice = toupper(getch());
	if (choice == 'V')
	{
		displayscore();
		goto mainhome;
	}
	else if (choice == 'Q')
		exit(1);
	else if (choice == 'H')
	{
		help();
		getch();
		goto mainhome;
	}
	else if (choice == 'S')
	{
		system("cls");
		printf("\n\n\n\t\t\tEnter Your Name...");
		printf("\n\t\t\t");
		gets(playername);
	home:
		system("cls");
		initialtime = time(NULL);
		countq = countr = 0;
		i = 1;
	start:
		srand(time(NULL));
		r = rand() % 23 + 1;
		nq[i] = r;
		for (w = 0; w < i; w++)//if random number is 0 and for not repeating same question
			if (nq[w] == r)
				goto start;
		switch (r)
		{
		case 1:
			printf("\n\nWhich header file should be included to use functions like malloc() and calloc()");
			printf("\nA.memory.h\tB.stdlib.h\nC.string.h\tD.dos.h\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.stdlib.h");
				break;
			}
		case 2:
			printf("\n\nWhat function should be used to free the memory allocated by calloc()?");
			printf("\nA.dealloc();\tB.malloc(variable_name,o)\nC.free();\tD.memalloc(variable_name,o)\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
				printf("\n\nWrong!!! The correct answer is C.free();");
			break;
		case 3:
			printf("\n\nSpecify the two library functions to dynamically allocate memory?");
			printf("\nA.malloc() and memalloc()\tB.alloc() and memalloc()\nC.malloc() and calloc()\t\tD.memalloc() and faralloc()\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.malloc() and calloc()");
				break;
			}
		case 4:
			printf("\n\nIf there is any error while opening a file,fopen will return?");
			printf("\nA.Nothing\tB.End of file(EOF)\nC.Null\t\tD.Depends on compiler\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.Null");
				break;
			}
		case 5:
			printf("\n\n______ Form of access is used to add and remove nodes from a queue.");
			printf("\nA.Last In First Out\tB.First In First Out\nC.Both a and b\t\tD.None of these\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.First In First Out");
				break;
			}
		case 6:
			printf("\n\nIn Linked representation of STACK ____ holds the elements of the stack.");
			printf("\nA.INFO fields\tB.TOP fields\nC.LINK fields\tD.NULL fields\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.INFO fields");
				break;
			}
		case 7:
			printf("\n\nIn the linked representation of the stack _____ behaves as the top pointer variable of stack.");
			printf("\nA.Stop pointer\tB.Begin pointer\nC.start pointer\tD.Avail pointer\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.Start pointer");
				break;
			}
		case 8:
			printf("\n\nNew nodes are added to the _____ of the queue.");
			printf("\nA.Front\t\tB.Back\nC.Middle\tD.Both a and b\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.Back");
				break;
			}
		case 9:
			printf("\n\nIn Linked representation of stack the null pointer of the last node in the list signals _____");
			printf("\nA.Beginning of the stack\tB.Bottom of the stack\nC.Middle of the stack\t\tD.In between some value\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.Bottom of the stack");
				break;
			}
		case 10:
			printf("\n\nA queue is a _________");
			printf("\nA.FIFO\tB.LIFO\nC.FILO\tD.LOFI\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.FIFO");
				break;
			}
		case 11:
			printf("\n\nWhich of the following name doesn't relate to stacks?");
			printf("\nA.FIFO lists\tB.LIFO lists\nC.Piles\t\tD.Push down lists\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.FIFO lists");
				break;
			}
		case 12:
			printf("\n\nThe retrieval of items in a stack is _____ operation.");
			printf("\nA.Push\t\tB.Pop\nC.retrieval\tD.Access\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.Pop");
				break;
			}
		case 13:
			printf("\n\nThe term push and pop is related to ");
			printf("\nA.Array\t\tB.Lists\nC.Stacks\tD.Trees\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.Stacks");
				break;
			}
		case 14:
			printf("\n\nWhich is the pointer associated with the stack?");
			printf("\nA.First\tB.Front\nC.Top\tD.Rear\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.Top");
				break;
			}
		case 15:
			printf("\n\nThe elements are removed from a stack in _______ order.");
			printf("\nA.Reverse\tB.Hiererchical\nC.Alternative\tD.Sequencial\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.Reverse");
				break;
			}
		case 16:
			printf("\n\nThe insertion operation in the stack is called ____");
			printf("\nA.Insert\tB.Push\nC.Pop\t\tD.Top\n");
			countq++;
			if (toupper(getch()) == 'B')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is B.Push");
				break;
			}
		case 17:
			printf("\n\n_______ is the term used to insert an element into stack.");
			printf("\nA.Push\tB.Pull\nC.Pop\tD.Pump\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.Push");
				break;
			}
		case 18:
			printf("\n\n_______ is the term used to delete an element from the stack.");
			printf("\nA.Push\tB.Pull\nC.Pop\tD.Pump\n");
			countq++;
			if (toupper(getch()) == 'C')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is C.Pop");
				break;
			}
		case 19:
			printf("\n\nDeletion operation is done using _____ in a queue");
			printf("\nA.Front\tB.Rear\nC.Top\tD.List\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.Front");
				break;
			}
		case 20:
			printf("\n\nA pointer variable which contains the location at the top element of the stack is called____");
			printf("\nA.Top\tB.Last\nC.Final\tD.End\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.Top");
				break;
			}
		case 21:
			printf("\n\nThe operation of processing each element in the list is known as");
			printf("\nA.Sorting\tB.Merging\nC.Inserting\tD.Traversal\n");
			countq++;
			if (toupper(getch()) == 'D')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is D.Traversal");
				break;
			}
		case 22:
			printf("\n\nother name for directed graph is ");
			printf("\nA.Direct graph\tB.Diagraph\nC.Dir-graph\tD.Digraph\n");
			countq++;
			if (toupper(getch()) == 'D')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is D.Digraph");
				break;
			}
		case 23:
			printf("\n\nBinary trees with threads are called as");
			printf("\nA.Threaded trees\tB.pointer trees\nC.Special trees\t\tD.Special pointer trees\n");
			countq++;
			if (toupper(getch()) == 'A')
			{
				printf("\n\nCorrect!!!");
				countr++;
				break;
			}
			else
			{
				printf("\n\nWrong!!! The correct answer is A.Threaded trees");
				break;
			}
		}
		i++;
		if (i <= 5)
			goto start;
		finaltime = time(NULL);
		score = (float)countr / countq * 100;
		if (score < 0)
			score = 0;
		printf("\n\n\nYour Score: %.2f", score);
		if (score == 100)
			printf("\n\nEXCELLENT!!! KEEP IT UP");
		else if (score >= 80 && score < 100)
			printf("\n\nVERY GOOD!!");
		else if (score >= 60 && score < 80)
			printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
		else if (score >= 40 && score < 60)
			printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS NOT SUFFICIENT.");
		else
			printf("\n\nYOU ARE VERY POOR IN DATA STRUCTURE,WORK HARD");
		puts("\n\nNEXT PLAY?(Y/N)");
		if (toupper(getch()) == 'Y')
			goto home;
		else
		{
			writescore(score, playername);
			goto mainhome;
		}
	}
	else
	{
		printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
		goto mainhome;
	}
	return 0;
}