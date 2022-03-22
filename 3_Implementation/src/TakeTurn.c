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