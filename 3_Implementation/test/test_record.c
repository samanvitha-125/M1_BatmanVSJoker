#include "unity.h"
#include "record.h"
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

char s[5][5]={
		{'a','b','c','d','e'},
		{'f','g','h','i','j'},
		{'k','l','m','n','o'},
		{'p','q','r','s','t'},
		{'u','v','w','x','y'}};
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

void test_win(void)
{
   // All the functions are of return type void. I can't run test cases for most of them.
   TEST_ASSERT_EQUAL(-1, win_game());
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_win);

    /* Close the Unity Test Framework */
    return UNITY_END();
}