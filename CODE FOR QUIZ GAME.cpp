
#include<stdio.h>//header fil // preprocessor
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>//lib function
#include<string.h>
void show_record();//userdefine function
void reset_score();
void help();
void edit_score(float , char []);
struct login
{
	 char epass[10],euser[30];

}b;

int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];//array
     
     mainhome:
    
     system("cls");
     printf("\t\t\t\t\t\t\t\t\t\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________");

     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   WELCOME ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t      To ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   THE GAME ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t   BECOME A RICH PERSON!!!!!!!!!!!    ") ;
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t > Press S to start the game");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t > Press V to view the highest score  ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t > Press R to reset score");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t > press H for help            ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t > press Q to quit             ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);//trminaete
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n\t\t\t\t\t\t\t\t ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\t\t\t\t\t\t\t\t Here are some tips you might wanna know before playing:");
    printf("\n\t\t\t\t\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n\t\t\t\t\t\t\t\t >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n\t\t\t\t\t\t\t\t   general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n\t\t\t\t\t\t\t\t    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n\t\t\t\t\t\t\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n\t\t\t\t\t\t\t\t   total of 15 questions. Each right answer will be awarded Rs100!");
    printf("\n\t\t\t\t\t\t\t\t   By this way you can win upto ONE THOUSAND cash prize in Nrs!!!!!..........");
    printf("\n\t\t\t\t\t\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t\t\t\t\t\t\t    right option.");
    printf("\n\t\t\t\t\t\t\t\t >> You will be asked questions continuously, till right answers are given");
    printf("\n\t\t\t\t\t\t\t\t >> No negative marking for wrong answers!");
    printf("\n\t\t\t\t\t\t\t\t !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\t\t\t\t\t\t\t\t Press Y  to start the game!\n");
    printf("\n\t\t\t\t\t\t\t\t Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\t\t\t\t\t\t\t\t\t\t\t1)Who is the top scorer in international football competition?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Pele\t\t\tB.Maradona\n\n\t\t\t\t\t\t\t\t\t\t\tC.Cristiano Ronaldo\tD.Lukaku");
		if (toupper(getch())=='C')
			{
			    printf("\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\t\t\t\t\t\t\t\t\t\t\tnWrong!!! The correct answer is C.Cristiano Ronaldo");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\t\t\t\t\t\t\t\t\t\t\t2)The country with the highest environmental performance index is...");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.France\t\tB.Denmark\n\n\t\t\t\t\t\t\t\t\t\t\tC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\t\t\t\t\t\t\t\t\t\t\t3)Which animal laughs like human being?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Polar Bear\t\tB.Hyena\n\n\t\t\t\t\t\t\t\t\t\t\tC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}}
		   }


	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=15;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1)What is the National Game of England?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Football\t\tB.Basketball\n\n\t\t\t\t\t\t\t\t\t\t\tC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\\t\t\t\t\t\t\t\t\t\t\t2)Study of Earthquake is called............,");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Seismology\t\tB.Cosmology\n\n\t\t\t\t\t\t\t\t\t\t\tC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t3)Among the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.6\t\tB.7\n\n\t\t\t\t\t\t\t\t\t\t\tC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t4)The Laws of Electromagnetic Induction were given by?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Faraday\t\tB.Tesla\n\n\t\t\t\t\t\t\t\t\t\t\tC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t5)In what unit is electric power measured?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Coulomb\t\tB.Watt\n\n\t\t\t\t\t\t\t\t\t\t\tC.Power\t\t\tD.Units");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is C.Power");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t6)Which element is found in Vitamin B12?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Zinc\t\t\tB.Cobalt\n\n\t\t\t\t\t\t\t\t\t\t\tC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t7)Who created Instagram?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Mark Zuckerberg\t\tB.Tim Berners-Lee\n\n\t\t\t\t\t\t\t\t\t\t\tC.Ted Codd\t\t\tD.Kevin Systrom");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is D.Kevin Systrom");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t8)How many times a piece of paper can be folded at the most?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.6\t\tB.7\n\n\t\t\t\t\t\t\t\t\t\t\tC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t9)What is the capital of Portugal?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Lisbon\t\tB.Besiktas\n\n\t\t\t\t\t\t\t\t\t\t\tC.Ajax\t\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is A.Lisbon");getch();
		       goto score;
		       break;}

 case 10:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t10)How high is a table tennis net?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.4 inches\t\tB.6 inches\n\n\t\t\t\t\t\t\t\t\t\t\tC.3 inches\tD.5 inches");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is B.6 inches");getch();
		       goto score;
		       break;}
		       
  case 11:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t11)What is the body largest organ?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Liver\t\tB.Spinal Cord\n\n\t\t\t\t\t\t\t\t\t\t\tC.Skin\tD.Tongue");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is C.Skin");getch();
		       goto score;
		       break;}

 case 12:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t12)Which of the following Singer/songwriter was from Jamaica?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Bob Marley\t\tB.Jimi Hendrix\n\n\t\t\t\t\t\t\t\t\t\t\tC.Bob Dylan\tD.Ben Howard");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is A.Bob Marley");getch();
		       goto score;
		       break;}
		       
  case 13:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t13)Who is the current Prime Minister of Nepal?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Prachanda\t\tB.KP Oli\n\n\t\t\t\t\t\t\t\t\t\t\tC.Ram Kumari Jhakri\tD.Sher Bahadur Deuba");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is D.Sher Bahadur Deuba");getch();
		       goto score;
		       break;}
 case 14:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t14)Who is the current world richest person?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Bill Gates\t\tB.Elon Musk\n\n\t\t\t\t\t\t\t\t\t\t\tC.Mbappe\tD.Nasser Al Khelafi");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is B.Elon Musk");getch();
		       goto score;
		       break;}

case 15:
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t15)Which is the longest River in the world?");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tA.Nile\t\tB.Koshi\n\n\t\t\t\t\t\t\t\t\t\t\tC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\n\t\t\t\t\t\t\t\t\t\t\tWrong!!! The correct answer is A.Nile");getch();break;goto score;}}}

       
	score:
    system("cls");
	score=(float)countr*100;
	if(score>0.00 && score<1500)
	{
	   printf("\n\n\t\t\t\t\t\t\t\t\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t\t\t\t\t\t\t\t\t You won Rs%.2f",score);goto go;}

	 else if(score==1500.00)
	{
	    printf("\n\n\n\t\t\t\t\t\t\t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t\t\t\t\t\t\t YOU ARE A RICH PERSON!!!!!!!!!");
	    printf("\n\t\t\t\t\t\t\t\t\t\t You won Rs%.2f",score);
	    printf("\n\t\t\t\t\t\t\t\t\t\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t\t\t\t\t\t\t\t\t\t\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t\t\t\t\t\t\t\t\t\t Thanks for your participation");
	    printf("\n\t\t\t\t\t\t\t\t\t\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n\n\n\n\t\t\t\t\t\t\t\t Press Y if you want to play next game");
	puts("\n\n\t\t\t\t\t\t\t\t Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}



void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t\t\t\t\t\t\t*************************************************************");
	printf("\n\n\t\t\t\t\t\t\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t\t\t\t\t\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n\t\t\t\t\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t ......................... C program Quiz Game...........");
    printf("\n\t\t\t\t\t\t\t\t >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n\t\t\t\t\t\t\t\t >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n\t\t\t\t\t\t\t\t   knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n\t\t\t\t\t\t\t\t    right answers otherwise you can't play the Game...........");
    printf("\n\t\t\t\t\t\t\t\t >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n\t\t\t\t\t\t\t\t    total 15 questions each right answer will be awarded Rs100.");
    printf("\n\t\t\t\t\t\t\t\t    By this way you can win upto ONE THOUSAND cash prize in Nrs!!!!!...............");
    printf("\n\t\t\t\t\t\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t\t\t\t\t\t\t    right option");
    printf("\n\t\t\t\t\t\t\t\t >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n\t\t\t\t\t\t\t\t >> No negative marking for wrong answers");

	printf("\n\n\t\t\t\t\t\t\t *********************BEST OF LUCK*********************************");
        }
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
