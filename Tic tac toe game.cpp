#include <iostream>
#include <cstdlib>
using namespace std;

const int size = 3;

void printBoard(char arr[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

bool Wins(char arr[][3], char ch){
    int count;
    for (int i = 0; i < 3; i++){
        count = 0;
        for (int j = 0; j < 3; j++){
            if (arr[i][j] == ch)
                count++;
        }
        if (count == 3)
            return true;
    }
    for (int i = 0; i < 3; i++){
        count = 0;
        for (int j = 0; j < 3; j++){
            if (arr[j][i] == ch)
                count++;
        }
        if (count == size)
            return true;
    }
    count = 0;
    for (int i = 0; i < 3; i++){
        if (arr[i][i] == ch)
            count++;
    }
    if (count == 3)
        return true;
    count = 0;
    for (int i = 0, j = 3 - 1; i < 3; i++, j--){
        if (arr[i][j] == ch)
            count++;
    }
    if (count == 3)
        return true;
    return false;
}

bool Draw(char arr[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (arr[i][j] == '-')
                return false;
        }
    }
    return true;
}

void playGame(){
    char board[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = '-';
        }
    }

    bool isGameOver = false;
    int row, column, playerTurn = 1;
    char player;
    while (!isGameOver){
        system("cls");
        printBoard(board);
        if (playerTurn == 1){
            player = 'X';
            playerTurn = 2;
        }
        else if (playerTurn == 2){
            player = 'O';
            playerTurn = 1;
        }
        do{
            cout << "Player " << player << " Turn" << endl;
            cout << "Enter Row: "; cin >> row;
            cout << "Enter Column: "; cin >> column;
            row--;
            column--;
        } while (!(row >= 0 && row < size && column >= 0 && column < size && board[row][column] == '-'));
        board[row][column] = player;
        if (Wins(board, player)){
           system("cls");
            printBoard(board);
            cout << "Player " << player << " Wins" << endl;
            isGameOver = true;
        }
        else if (Draw(board)){
            system("cls");
            printBoard(board);
            cout << "Game Tie" << endl;
            isGameOver = true;
        }
    }


}

void PlayAgain(){
    char playAgain;
    do{
        cout << "Do you enjoy Playing Tic Tac Toe \n";
        cout << "Play Again? Y for accept, N for deny" << endl;
        cin >> playAgain;
    } while(playAgain != 'Y' && playAgain != 'y' && playAgain != 'N' && playAgain != 'n');
    if(playAgain == 'Y' || playAgain == 'y') {
        playGame();
    }
    else{
        exit(0);
    }
}

int main(){
    playGame();
    PlayAgain();
    return 0;
}

