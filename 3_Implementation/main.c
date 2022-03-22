//course project on BATMAN and JOKER game
#include<stdio.h>
#include<string.h>

char s[5][5]={
		{'a','b','c','d','e'},
		{'f','g','h','i','j'},
		{'k','l','m','n','o'},
		{'p','q','r','s','t'},
		{'u','v','w','x','y'}
	     };
     
int win_game();
void TT( char*, char* );
void board();

//main body of the program
int main()
{
int pa=1,sml=1,i;
char bomb,choice;
do
{
  board();                                   //initializing the board
  pa=(pa%2)?1:2;
  if(pa==1)
  {printf("\nJOKER,select a building to blast:");}
  else
  {printf("\nBATMAN,select a building to intervene:");}
  scanf("\n%c",&choice);
  printf("enter bomb type('X' or 'O'):");
  scanf("\n%c",&bomb);
  if(choice=='a' && s[0][0]=='a')
  s[0][0]=bomb;
  else if(choice=='b' && s[0][1]=='b')
  s[0][1]=bomb;
  else if(choice=='c' && s[0][2]=='c')
  s[0][2]=bomb;
  else if(choice=='d' && s[0][3]=='d')
  s[0][3]=bomb;
  else if(choice=='e' && s[0][4]=='e')
  s[0][4]=bomb;
  else if(choice=='f' && s[1][0]=='f')
  s[1][0]=bomb;
  else if(choice=='g' && s[1][1]=='g')
  s[1][1]=bomb;
  else if(choice=='h' && s[1][2]=='h')
  s[1][2]=bomb;
  else if(choice=='i' && s[1][3]=='i')
  s[1][3]=bomb;
  else if(choice=='j' && s[1][4]=='j')
  s[1][4]=bomb;
  else if(choice=='k' && s[2][0]=='k')
  s[2][0]=bomb;
  else if(choice=='l' && s[2][1]=='l')
  s[2][1]=bomb;
  else if(choice=='m' && s[2][2]=='m')
  s[2][2]=bomb;
  else if(choice=='n' && s[2][3]=='n')
  s[2][3]=bomb;
  else if(choice=='o' && s[2][4]=='o')
  s[2][4]=bomb;
  else if(choice=='p' && s[3][0]=='p')
  s[3][0]=bomb;
  else if(choice=='q' && s[3][1]=='q')
  s[3][1]=bomb;
  else if(choice=='r' && s[3][2]=='r')
  s[3][2]=bomb;
  else if(choice=='s' && s[3][3]=='s')
  s[3][3]=bomb;
  else if(choice=='t' && s[3][4]=='t')
  s[3][4]=bomb;
  else if(choice=='u' && s[4][0]=='u')
  s[4][0]=bomb;
  else if(choice=='v' && s[4][1]=='v')
  s[4][1]=bomb;
  else if(choice=='w' && s[4][2]=='w')
  s[4][2]=bomb;
  else if(choice=='x' && s[4][3]=='x')
  s[4][3]=bomb;
  else if(choice=='y' && s[4][4]=='y')
  s[4][4]=bomb;
  else
  {
  printf("invalid move,you must have entered values other than [a to y]\n");
  printf("or planted bomb on the same building twice\n");
  printf("please be careful\n");
  return 0;
  }
  i=win_game();
  pa++;
}
while(i==-1);

board();

if(i==1)
 {
 printf("JOKER WINS");
 printf("\nthank you playing\n %c",sml);
 }
else
 {
 printf("\nBATMAN WINS");
 printf("\nthank you for playing\n %c",sml);
 }
return 0;
}

//function to check for winning of either player
int win_game()
{
if(s[0][0]==s[0][1] && s[0][1]==s[0][2] && s[0][2]==s[0][3])
return 1;
if(s[1][0]==s[1][1] && s[1][1]==s[1][2] && s[1][2]==s[1][3])
return 1;
if(s[2][0]==s[2][1] && s[2][1]==s[2][2] && s[2][2]==s[2][3])
return 1;
if(s[3][0]==s[3][1] && s[3][1]==s[3][2] && s[3][2]==s[3][3])
return 1;
if(s[4][0]==s[4][1] && s[4][1]==s[4][2] && s[4][2]==s[4][3])
return 1;

if(s[0][1]==s[0][2] && s[0][2]==s[0][3] && s[0][3]==s[0][4])
return 1;
if(s[1][1]==s[1][2] && s[1][2]==s[1][3] && s[1][3]==s[1][4])
return 1;
if(s[2][1]==s[2][2] && s[2][2]==s[2][3] && s[2][3]==s[2][4])
return 1;
if(s[3][1]==s[3][2] && s[3][2]==s[3][3] && s[3][3]==s[3][4])
return 1;
if(s[4][1]==s[4][2] && s[4][2]==s[4][3] && s[4][3]==s[4][4])
return 1;

if(s[0][0]==s[1][0] && s[1][0]==s[2][0] && s[2][0]==s[3][0])
return 1;
if(s[0][1]==s[1][1] && s[1][1]==s[2][1] && s[2][1]==s[3][1])
return 1;
if(s[0][2]==s[1][2] && s[1][2]==s[2][2] && s[2][2]==s[3][2])
return 1;
if(s[0][3]==s[1][3] && s[1][3]==s[2][3] && s[2][3]==s[3][3])
return 1;
if(s[0][4]==s[1][4] && s[1][4]==s[2][4] && s[2][4]==s[3][4])
return 1;

if(s[1][0]==s[2][0] && s[2][0]==s[3][0] && s[3][0]==s[4][0])
return 1;
if(s[1][1]==s[2][1] && s[2][1]==s[3][1] && s[3][1]==s[4][1])
return 1;
if(s[1][2]==s[2][2] && s[2][2]==s[3][2] && s[3][2]==s[4][2])
return 1;
if(s[1][3]==s[2][3] && s[2][3]==s[3][3] && s[3][3]==s[4][3])
return 1;
if(s[1][4]==s[2][4] && s[2][4]==s[3][4] && s[3][4]==s[4][4])
return 1;


if(s[1][0]==s[2][1] && s[2][1]==s[3][2] && s[3][2]==s[4][3])
return 1;
if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[2][2]==s[3][3])
return 1;
if(s[1][1]==s[2][2] && s[2][2]==s[3][3] && s[3][3]==s[4][4])
return 1;
if(s[0][1]==s[1][2] && s[1][2]==s[2][3] && s[2][3]==s[3][4])
return 1;

if(s[0][3]==s[1][2] && s[1][2]==s[2][1] && s[2][1]==s[3][0])
return 1;
if(s[0][4]==s[1][3] && s[1][3]==s[2][2] && s[2][2]==s[3][1])
return 1;
if(s[1][3]==s[2][2] && s[2][2]==s[3][1] && s[3][1]==s[4][0])
return 1;
if(s[1][4]==s[2][3] && s[2][3]==s[3][2] && s[3][2]==s[4][1])
return 1;

else if
(s[0][0]!='a'&&s[0][1]!='b'&&s[0][2]!='c'&&s[0][3]!='d'&&s[0][4]!='e'
&&s[1][0]!='f'&&s[1][1]!='g'&&s[1][2]!='h'&&s[1][3]!='i'&&s[1][4]!='j'
&&s[2][0]!='k'&&s[2][1]!='l'&&s[2][2]!='m'&&s[2][3]!='n'&&s[2][4]!='o'
&&s[3][0]!='p'&&s[3][1]!='q'&&s[3][2]!='r'&&s[3][3]!='s'&&s[3][4]!='t'
&&s[4][0]!='u'&&s[4][1]!='v'&&s[4][2]!='w'&&s[4][3]!='x'&&s[4][4]!='y')
return 0;
else
return -1;
}

void TT( char a[], char *PP ){
 int available[8];
 int i, j = 0, choice;
 for(i = 0; i < 25; i++ )
 if( (a[i] != 'X') && (a[i] != 'O') )
 available[ j++ ] = i;
 printf( "\n It is %c's turn. Choose your move (", *PP);
 for( i = 0; i < j; i++ )
 printf( " %d", available[i]);
 printf( " ): ");
 scanf( "%d", &choice);
 if( *PP== 'X' )
 a[ choice ] = 'X';
 else
 a[ choice ] = 'O';
}
//function for the game board
void board()
{
printf("\n\t\t\t***BATMAN VS JOKER***\n");
printf("\n>>(X) and (O) are 2 kinds of bombs available in gotham city");
printf("\n>>both BATMAN and JOKER has to put both (X) and (O)");
printf("\n>>JOKER wins if 4*1 is made vertically,horizontally or diagonally with either of  the bomb types");
printf("\n>>BATMAN wins if JOKER's plan is destroyed and prevents him from making the bomb connections of the same type");
printf("\n>>below is the map of GOTHAM city and the bombs placed:\n");
printf("  %c  |  %c  |  %c  |  %c  |  %c  \n",s[0][0],s[0][1],s[0][2],s[0][3],s[0][4]);
printf("  _  |  _  |  _  |  _  |  _  \n");
printf("     |     |     |     |     \n");
printf("  %c  |  %c  |  %c  |  %c  |  %c  \n",s[1][0],s[1][1],s[1][2],s[1][3],s[1][4]);
printf("  _  |  _  |  _  |  _  |  _  \n");
printf("     |     |     |     |     \n");
printf("  %c  |  %c  |  %c  |  %c  |  %c  \n",s[2][0],s[2][1],s[2][2],s[2][3],s[2][4]);
printf("  _  |  _  |  _  |  _  |  _  \n");
printf("     |     |     |     |     \n");
printf("  %c  |  %c  |  %c  |  %c  |  %c  \n",s[3][0],s[3][1],s[3][2],s[3][3],s[3][4]);
printf("  _  |  _  |  _  |  _  |  _  \n");
printf("     |     |     |     |     \n");
printf("  %c  |  %c  |  %c  |  %c  |  %c  \n",s[4][0],s[4][1],s[4][2],s[4][3],s[4][4]);
}
/*___end of program___*/
