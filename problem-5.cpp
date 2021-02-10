#include <iostream>
using namespace std;
int main()

{
 bool playing = true;
 int sticksLeft = 11;
 const int BIGNUM = INT_MAX;
 const char ENDLINE = '\n';
 int number;
 int t = 0;
 char reply;

    cout << "Welcome to the Game of Nim. This game requires two players to comepete. This game is a test of strength in mind. Each player takes turns pulling 1, 2, or 3 sticks at a time. Whoever pulls the last stick(s) wins! Goodluck and have fun!:)\n" << "Player 1 goes first!" << endl;

 while (playing)
 {
     if (playing = true)
     {
     for (int i = 1; i <= sticksLeft; i++)
     {
         cout << "|";
     }
         cout << endl;
     }

     if ((t % 2) == 0)
     {
         cout << "Player 1's turn. Enter: (1,2,3)" << endl;
     }
     if ((t % 2) == 1)
     {
         cout << "Player 2's turn. Enter: (1,2,3)" << endl;
     }
     t++;

     do {
         cin >> number;
         if (number != 1 && number != 2 && number != 3)
         {
             cout << "Invalid Response. Please enter numbers 1, 2, or 3 ONLY." << endl;
             cin.fail();
         }
         else  if (cin.fail())
         {
             cout << "Bad Data" << endl;
             cin.clear();
             cin.ignore(BIGNUM, ENDLINE);
         }

     } while (number != 1 && number != 2 && number != 3);

     sticksLeft = sticksLeft - number;

     if (sticksLeft < number)
     {
         cout << "Invalid Response. Please enter no greater amount than sticks on board." << endl;
         t++;
         cin.fail();
     }
     else  if (cin.fail())
     {
         cout << "Bad Data" << endl;
         cin.clear();
         cin.ignore(BIGNUM, ENDLINE);
     }

     {
         if (sticksLeft == 0)
         {
         playing = false;
         cout << "Do you want to play again? (Y/N)." << endl;
         cin >> reply;
         }
         if ( reply == 'y' || reply == 'Y')
         {
             cout << "Game start over." << endl;
             playing = true;
         }
         if ( reply == 'n' || reply == 'N')
         {
             break;
         }
     }
 }
 return 0;
 }

