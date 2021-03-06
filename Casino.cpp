//BlackJack Game
//Jian Shi
//jshi@dmacc.edu
//Group Project Team Flux

#include "Casino.h"
#include<time.h> 

char Casino::DisplayRule()
{
    cout << "*****************Welcome to the Black Jack Game********************* \n";
    cout << "\t Rules：\n";
    cout << endl;
    cout << "\t 1.Max bet is $100；\n";
    cout << endl;
    cout << "\t 2.If your point is over 21, you will lose；\n";
    cout << endl;
    cout << "\t 3.Dealer can't hit when card is over or equal to 16. \n";
    cout << endl;
    cout << "*****************Good Luck******************** \n";

    money();
    return 0;
}

int rand(int n)
{
    return rand() % n;
}

Casino::Casino()
{
}

int Casino::rand(int n)
{
    return 0;
}

//check win or not
bool Casino::win()
{
    bool t = true;
    bool f = false;

    int n, r, b;
    char d = ' ';
    int num_i = 0;
    int num_r = 0;
    srand(time(NULL));

    //random card number within 10
    r = rand(10) + 1;
    int i;
    i = rand(10) + 1;

    cout << "Your card: " << r << endl;
a:cout << "Dealer Card: " << i << endl;
    cout << "Hit ot Stand?" << endl;
    cout << "Hit type 1, Stand type 2" << endl;

    int c;
    cin >> c;
    while (x) {
        if (c == 1)
        {
            n = rand(10) + 1;
            cout << "\nYou get another card: " << n;
            r += n;

            num_r += 1;
            cout << "\n\nYour total points are: " << r << '\n';
            if (r > 21) { cout << "Your card point is over 21\n"; goto b; }
            goto a;
            break;
        }
        else if (c == 2)
        {
            x = 0;
            cout << "\nDealer Call" << endl;
            cout << "\nDealer Card " << i;
            while (i <= 18 && i < r)
            {
                cout << "Dealer get a card." << endl;
                b = rand(13) + 1;
                cout << "\nDealer get another card." << b;
                i += b;

                num_i += 1;
                cout << "\nDealer card total points: \n" << i;
            }
            cout << "\nNow check the card.\n";
        }
        else
        {
            cout << "Input error. Please re-enter:";
            cin >> c;
        }
    }


    if ((i > r&& i < 21) || (num_i > num_r))
    {
    b:cout << "Dealer Win!\n\n" << endl; cout << "Continue?(y/n)\n\n" << endl;
        cin >> d;
        if (d == 'n')
        {
            cout << "Game Over" << endl;
            exit(0);
        }
        else
            return f;
    }
    else if (i == 21 && r < 21)
    {
        cout << "You win!\n\n" << endl; cout << "Continue?(y/n)\n\n" << endl;
        return t;
    }
    else
    {
        cout << "You win!\n\n" << endl; cout << "Continue?(y/n)\n\n" << endl;
        if (d == 'n')
        {
            cout << "Game Over" << endl;
            exit(0);
        }
        else
            return f;
    }
}

//set up money change
void Casino::money()
{
    int a = 400, b = 1000000, c;
    for (;;)
    {

        cout << "Please enter your bet（you have $ " << a << "）";
        cin >> c;
        if (c > 100 || c < 1) {
            cout << "Max is $100, you can't bet more. Please re-enter." << endl;
            cin >> c;
        }
        else if (win())
        {
            a += c; b -= c;
            cout << "Your money: $ " << a;
            if (a >= 1000400 && b <= 0)
            {
                cout << "The dealer is run out chips. The game is over!" << endl;
                exit(0);
            }
            else
                cout << "\nPlease bet" << endl;
        }
        else
        {
            a -= c; b += c;
            cout << "Your money: $ " << a;
            if (a <= 0 || b >= 1000400)
            {
                cout << "You are broken. The game is over" << endl;
                exit(0);
            }
            else
                cout << "\nPlease bet." << endl;
        }
    }
}
