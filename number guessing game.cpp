#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int Number, guess, tries = 0;
    srand(time(0));
    Number = rand() % 100+ 1;
    cout << "Welcome to our gaming platform \n\n";
    cout << "Guess The Correct Number Game\n\n";

    do {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
       tries++;

        if( guess > Number)
                    cout << "  Oops! Your guess is too high!\n\n";

        else if( guess < Number)
            cout << " Alas! Your guess is Too low!\n\n";
        else
            cout << "\n Correct! Congrats! Finally You got it! " << tries << " guesses!\n";
        }
        while (guess !=Number);

            return 0;
        }




