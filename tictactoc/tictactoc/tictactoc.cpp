#include <iostream>
#include <iomanip>


using namespace std;
void CheckArray(char TicTacToe[][3], int lengthOfGame)
{
    //check array
    for (int row = 0; row < lengthOfGame; row++)
    {
        for (int column = 0; column < lengthOfGame; column++)
        {
            cout << setw(4) << TicTacToe[row][column];
        }
        cout << "\n";
    }
}

void checkWinOfRow(char TicTacToe[][3], int lengthOfGame, bool* winGame, char* winner)
{
    // win of row
    for (int row = 0; row < lengthOfGame; row++)
    {
        for (int column = 0; column < lengthOfGame - 1; column++)
        {
            if (TicTacToe[row][column] != TicTacToe[row][column + 1])
            {
                *winGame = false;
                break;
            }
            else if (TicTacToe[row][column] == '/')
            {
                *winGame = false;
                break;
            }
            else
            {
                *winGame = true;
            }

        }
        // if wingame, cout the row number
        if (*winGame)
        {
            // check who wins
            *winner = TicTacToe[row][0];
            cout << *winner << " is win in row " << row << "\n";
            
        }

    }

}

void checkWinOfCloumn(char TicTacToe[][3], int lengthOfGame, bool* winGame, char* winner)
{
    // win of column
    for (int column = 0; column < lengthOfGame; column++)
    {
        for (int row = 0; row < lengthOfGame - 1; row++)
        {
            if (TicTacToe[row][column] != TicTacToe[row + 1][column])
            {
                *winGame = false;
                break;
            }
            else if (TicTacToe[row][column] == '/')
            {
                *winGame = false;
                break;
            }
            else
            {
                *winGame = true;
            }

        }
        // if wingame, cout the row number
        if (*winGame)
        {
            // check who wins
            *winner = TicTacToe[0][column];
            cout << *winner << " is win in column " << column << "\n";

        }

    }

}

void checkDiagonal1(char TicTacToe[][3], int lengthOfGame, bool* winGame, char* winner)
{

    // win of diagonal from leftup to right down
    for (int lenth = 0; lenth < lengthOfGame - 1; lenth++)
    {

        if (TicTacToe[lenth][lenth] != TicTacToe[lenth + 1][lenth + 1])
        {
            *winGame = false;
            break;
        }
        else if (TicTacToe[lenth][lenth] == '/')
        {
            *winGame = false;
            break;
        }
        else
        {
            *winGame = true;          
        }
        // if wingame, cout the row number
    }
    if (*winGame)
    {
        // check who wins
        *winner = TicTacToe[0][0];
        cout << *winner  << " is win in diagonal\n";
    }
}

void checkDiagonal2(char TicTacToe[][3], int lengthOfGame, bool* winGame, char* winner)
{
    // win of diagonal westsorthern to northestern
    int lenth = lengthOfGame;

    int column = 0;
    for (int row = lenth - 1; row > 0; row--)
    {
        if (TicTacToe[row][column] != TicTacToe[row - 1][column + 1])
        {
            *winGame = false;
            break;
        }
        else if (TicTacToe[row][column] == '/')
        {
            *winGame = false;
            break;
        }
        else
        {
            *winGame = true;
            column++;
        }

    }

    // if wingame, cout the row number
    if (*winGame)
    {
        *winner = TicTacToe[0][lenth - 1];
        cout << *winner << " is win in diagonal\n";
    }

}



int main()
{
   char TicTacToe[3][3]=
   {
        {'/', '/', '/'}, {'/', '/', '/'}, {'/', '/', '/'}
   };

   // enter the row and column of your chosse
   int lengthOfGame = 3;

   CheckArray(TicTacToe, lengthOfGame);  

   bool winGame = true;
   char winner = 0;
   int rowOfChess = 0, columnOfChess = 0;

   // name palyers
   char player1; 
   char player2;
   int count = 1;
   cout << "please name the first player \n";
   cin >> player1;
   cout << "please name the second player \n";
   cin >> player2;
   
  // if i still have time return to complement
  //     cout << "hi " << player1 << "and " << player2 << "\n";

   for (;count <= 9; count++)
   {
        //ask for location of chess
        if (count % 2 != 0)
        {
           cout << player1 << " put your chess in row ";
           cin >> rowOfChess;
           cout << player1 << " put your chess in column ";
           cin >> columnOfChess;

           TicTacToe[rowOfChess - 1][columnOfChess - 1] = 'X';
        } 
        else
        {
           cout << player2 << " put your chess in row ";
           cin >> rowOfChess;
           cout << player2 << " put your chess in column ";
           cin >> columnOfChess;

           TicTacToe[rowOfChess - 1][columnOfChess - 1] = 'O';
        }
       
        CheckArray(TicTacToe, lengthOfGame);

    //win check
 
        checkWinOfRow(TicTacToe,lengthOfGame, &winGame, &winner);
        checkWinOfCloumn(TicTacToe,lengthOfGame, &winGame, &winner);
        checkDiagonal1(TicTacToe, lengthOfGame, &winGame, &winner);
        checkDiagonal2(TicTacToe, lengthOfGame, &winGame, &winner);
        if (winGame)
        {
            cout << "winner is " << winner;
            break;
        }
   }
   if (!winGame)
   {
        cout << "nobadywins " << endl;
   }

    return 0;
}
