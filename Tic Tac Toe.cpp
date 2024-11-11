/*TIC TAC TOE using 2D array*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, column,round,c1=0,c2=0;
string n1, n2;
char token1, token2, token;
bool tie;
void functionone()//Introduction page
{
    cout << "\t\t\t***Let's Play!!***" << endl;
    cout << "\n\t\t\t***TIC TAC TOE***" << endl;
    cout << "\t\t_______________________________" << endl;
    cout << "\t\t\t***RULE BOOK***" << endl;
    cout << "\t\t_______________________________" << endl;
    cout << "\nPlayers take turns putting their marks in empty squares.\n";
    cout << "The first player to get 3 of his/her marks in a row (up, down, across, or diagonally) is the winner.\n";
    cout << "When all 9 squares are full, the game is over.\n";
    cout << "If no player has 3 marks in a row,the game ends in a tie." << endl;
    cout<<"\n\t\t\t*LET'S GOOOOO!!!*\n"<<endl;
}
void functiontwo()//Input players details
{
    cout << "Enter The Name Of Player-1" << endl;
    getline(cin, n1);
    cout << "Enter The Name Of Player-2" << endl;
    getline(cin, n2);
    cout << n1 << "-Please Enter Your Chosen Token" << endl;
    cin >> token1;                                            //Add customized token to display
    cout << n2 << "-Please Enter Your Chosen Token" << endl;
    cin >> token2;
    cout << "\nPress 1 for player-1 to start the game.\nPress 2 for player-2 to the game.\n"
         << endl;
    cin >> token;
}
void ticboard() //Tic Tac Toe board
{
    cout << endl;
    cout << "\t\t\t " << " |" << "   |" << " ";
    cout << endl
         << "\t\t\t" << space[0][0] << " | " << space[0][1] << " | " << space[0][2] << "  " << endl;
    cout << "\t\t\t " << " |" << "   |" << " " << endl;
    cout << "\t\t     --------------" << endl;
    cout << "\t\t\t " << " |" << "   |" << " ";
    cout << endl
         << "\t\t\t" << space[1][0] << " | " << space[1][1] << " | " << space[1][2] << "  " << endl;
    cout << "\t\t\t " << " |" << "   |" << " " << endl;
    cout << "\t\t     ---------------" << endl;
    cout << "\t\t\t " << " |" << "   |" << " ";
    cout << endl
         << "\t\t\t" << space[2][0] << " | " << space[2][1] << " | " << space[2][2] << "  " << endl;
    cout << "\t\t\t " << " |" << "   |" << " " << endl;
}
void functionthree() //Game method
{
    int digit;
    if (token == '1')
    {
        token = token1;
        cout << n1 << "-please enter your choice" << endl;
    }
    else if (token == '2')
    {
        token = token2;
        cout << n2 << "-please enter your choice" << endl;
    }

    cin >> digit;

    if (digit == 1)
    {
        row = 0;
        column = 0;

    }
    else if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else
    {
        cout << "Invalid Choice!" << endl;
        return;
    }
}
turnboard() //select turn
{
    if (space[row][column] != token1 && space[row][column] != token2)
    {
        space[row][column] = token;
        if (token == token1)
        {
            cout<<"\n\t\t\t"<<n2<<" Your Turn"<<endl;
            token = token2;
        }
        else
        {
            cout<<"\n\t\t\t"<<n1<<" Your Turn"<<endl;
            token = token1;
        }
    }
    else
    {
        cout<<"\n\t\t\t" <<"Space already taken! Try again." << endl;
    }
}
bool isfull=true;
bool result() //Show result
{
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return true;
        }
    }
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
    {
        return true;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != token1 && space[i][j] != token2)
            {
                isfull= false;
                break;
            }
        }
    }
    if(isfull)
    {
        tie = true;
        return true;
    }

    return false;
}
int main()
{

    functionone();
    functiontwo();
    cout<<"Enter Total Round You Want To Play?"<<endl;
    cin>>round;
    system("cls");
    for(int i=1; i<=round; i++)  //Multiple round can be played
    {
        tie=false;
        cout<<"\n\t\t\t Round "<<i<<" started:"<<endl;
        if(i>1)
        {
            cout<<"\t\t\tPlayer Had Last Move Go Later!!"<<endl;
        }
        for(int i=0; i<3; i++)  //every time set new board
        {
            for(int j=0; j<3; j++)
            {
                space[i][j]='0'+(i*3+j+1);
            }
        }
        ticboard();
        bool game_over = false;
        while (!game_over)
        {
            isfull = true;
            functionthree();
            system("cls");
            turnboard();
            ticboard();

            if (result() || tie)
            {
                game_over = true;
                break;
            }
        }
        if(result())
        {

            if (token == token1 && !tie)
            {
                cout <<"\n\t\t\t"<< n2 << " wins round "<<i<<endl;
                c2++;
            }
            else if (token == token2 && !tie)
            {
                cout<<"\n\t\t\t" << n1 << " wins round " <<i<< endl;
                c1++;
            }

            else
            {
                cout<<"\n\t\t\t" << "It's a tie!" << endl;
            }
        }
    }
    cout<<"\n\t\t\tAter All "<<round<<" rounds :"; //Display winner name after all round;
    if(c2>c1)
    {
        cout<<"\n\t\t\t"<<n2<<" is the ultimate winner!!"<<endl;
    }
    else if(c1>c2)
    {
        cout<<"\n\t\t\t"<<n1<<" is the ultimate winner!!"<<endl;
    }
    else
    {
        cout<<"\n\t\t\t"<<"WOW,Again Tie!!!Both Are Smart Enough!!!"<<endl;
    }
    getch();

}
