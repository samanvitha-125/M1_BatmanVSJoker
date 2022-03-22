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