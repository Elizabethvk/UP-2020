//Somewhat works
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int maxWidth = 40; //check this max limit
const int maxHeight = 20;

unsigned getWidth(unsigned width);
unsigned getHeight(unsigned height);
void fillWithSpaces(char gameBoard[][maxWidth], unsigned height, unsigned width);
void printBoard(char gameBoard[][maxWidth], unsigned height, unsigned width);
void takingTurn(char gameBoard[][maxWidth], unsigned height, unsigned width, short playerID);
bool winner(char gameBoard[][maxWidth], unsigned height, unsigned width, short playerID);
bool noMoreTurns(char gameBoard[][maxWidth], unsigned height, unsigned width);
//bool winner(int board[][maxHeight], unsigned width);
//int isCorrect();
//bool isVacant();


int main() {
    unsigned width = 0, height = 0;
    short playerOne = 1, playerTwo = 2;
    char gameBoard[maxHeight][maxWidth] = {};
    bool inGame = false, notFull = true;

    height = getHeight(height);
    width = getWidth(width);

    fillWithSpaces(gameBoard,height, width);
    printBoard(gameBoard, height, width);

    while (inGame != true) {    //(notFull != false)
        takingTurn(gameBoard, height, width, playerOne);
        printBoard(gameBoard, height, width);
        notFull = noMoreTurns(gameBoard, height, width);
        if (notFull == false) {
            cout << "It's a tie!" << endl;
            break;
        }
        inGame = winner(gameBoard, height, width, playerOne);
        

        takingTurn(gameBoard, height, width, playerTwo);
        printBoard(gameBoard, height, width);
        notFull = noMoreTurns(gameBoard, height, width);
        if (notFull == false) {
            cout << "It's a tie!" << endl;
            break;
        }
        inGame = winner(gameBoard, height, width, playerTwo);
        
    }
    if (inGame == true) {
        cout << "Player 1 won!" << endl;
    }
    else if (inGame == true) {
        cout << "Player 2 won!" << endl;
    }
    return 0;
}


unsigned getWidth(unsigned width) {
    cin >> width;
    if (width < 4 || width>maxWidth) {
        cout << "Invalid width! Input a number between 4 and 40!" << endl;
        //cin ignore/clean???
    }
    return width;
}

unsigned getHeight(unsigned height) {
    cin >> height;
    if (height < 4 || height>maxHeight) {
        cout << "Invalid width! Input a number between 4 and 20!" << endl;
        //return 1;
    }
    return height;
}

void fillWithSpaces(char gameBoard[][maxWidth], unsigned height, unsigned width) {
    for (unsigned i = 0; i < height; ++i) {
        for (unsigned j = 0; j < width; ++j) {
            gameBoard[i][j] = 0x20;
        }
    }
}

void printBoard(char gameBoard[][maxWidth], unsigned height, unsigned width) {
    for (unsigned i = 0; i < height; ++i) {
        //cout << "|";
        for (unsigned j = 0; j < width; ++j) {
            cout << "|" << gameBoard[i][j];
            /*cout << "|";
            if (gameBoard[i][j] != 'X' || gameBoard[i][j] != 'O') {
                cout << gameBoard[i][j];
            }*/
            
        }
        cout << "|" << endl;
    }
}

void takingTurn(char gameBoard[][maxWidth], unsigned height, unsigned width,  short playerID){
    unsigned choiceOfColumn = 0;
    cin >> choiceOfColumn;
    choiceOfColumn--;
    if (playerID == 1 && choiceOfColumn >=0 && choiceOfColumn < width) {
        for (int i = (height - 1); i >= 0; i--) {
            if (gameBoard[i][choiceOfColumn] == ' ') { //0x20 - space 0x4f - O  0x58 - X
                gameBoard[i][choiceOfColumn] = 'O';
                break;
            }
            else if (i == 0 && (gameBoard[i][choiceOfColumn] == 'O' || gameBoard[i][choiceOfColumn] == 'X')) {
                cout << "The column is full. Choose another one!" << endl;
                //cin >> choiceOfColumn;
                //cin ignor error
            }
        }
    }
    else if (playerID == 2 && choiceOfColumn >= 0 && choiceOfColumn < width) {
        for (int i = height - 1; i >= 0; i--) {
            if (gameBoard[i][choiceOfColumn] == ' ') {
                gameBoard[i][choiceOfColumn] = 'X';
                break;
            }
            else if (i == 0 && (gameBoard[i][choiceOfColumn] == 'X' || gameBoard[i][choiceOfColumn] == 'O')) {
                cout << "The column is full. Choose another one!" << endl;
                //cin ignor error
            }
        }
    }
    else {
        cout << "Wrong column of choice!" << endl;
    }
}

bool winner(char gameBoard[][maxWidth], unsigned height, unsigned width, short playerID){
    bool winner = false;
    for (int i = (height - 1); i >= 0; --i) {       //Надясно с ограничение ***** наляво с ограничение
        for (int j = 0; j < (width-3); j++) { 
            if (gameBoard[i][j] == gameBoard[i][j + 1] && gameBoard[i][j + 1] == gameBoard[i][j + 2] && gameBoard[i][j + 2] == gameBoard[i][j + 3]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
        }
    }
    for (int i = (height - 1); i > 2; --i) {        //По ширина всичко, нагоре за 4 еднакви
        for (int j = 0; j < width; j++) {
            if (gameBoard[i][j] == gameBoard[i - 1][j] && gameBoard[i - 1][j] == gameBoard[i - 2][j] && gameBoard[i - 2][j] == gameBoard[i - 3][j]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
        }
    }
    for (int i = (height - 1); i > 2; --i) {       //Диагонално надясно
        for (int j = 0; j < (width - 3); j++) {
            if (gameBoard[i][j] == gameBoard[i - 1][j + 1] && gameBoard[i - 1][j + 1] == gameBoard[i - 2][j + 2] && gameBoard[i - 2][j + 2] == gameBoard[i - 3][j + 3]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
        }
    }
    for (int i = (height - 1); i > 2; --i) {       //Диагонално наляво
        for (int j = (width-1); j > 2; --j) {
            if (gameBoard[i][j] == gameBoard[i - 1][j - 1] && gameBoard[i - 1][j - 1] == gameBoard[i - 2][j - 2] && gameBoard[i - 2][j - 2] == gameBoard[i - 3][j - 3]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
        }
    }
    return winner;
}

bool noMoreTurns(char gameBoard[][maxWidth], unsigned height, unsigned width) {
    unsigned cnt=0;
    for (unsigned i = 0; i < width; ++i) {
        if (gameBoard[0][i] != ' ') {
            cnt++;
        }
    }
    return ((cnt == width) ? false : true);
    //if (cnt == width)
    //    return false;
}


/*
int isCorrect(){

}

int isVacant(char gameBoard[][maxWidth], unsigned height) {
    unsigned choiceOfColumn = 0;
    cin >> choiceOfColumn;
    int i = height;
    bool vacant = false;
    while (gameBoard[choiceOfColumn][i] == ' ') {
        i--;
    }
    return i;
}*/

/*
void printBoard(unsigned height, unsigned width) {
    for (unsigned i = 0; i < height; ++i) {
        for (unsigned j = 0; j <= width; ++j) {
            cout << "|" << " ";
        }
        cout << endl;
    }
}*/

/*
unsigned isVacant(char gameBoard[][maxWidth], unsigned height, unsigned width) {
    unsigned choiceOfColumn = 0;
    cin >> choiceOfColumn;
    choiceOfColumn--;
    short vacantSpace = 0;
    if (choiceOfColumn >= 0 && choiceOfColumn < width) {
        for (int i = (height - 1); i >= 0; i--) {
            if (gameBoard[i][choiceOfColumn] == 0x20) {
                vacantSpace = i;
                break;
            }
            else if (i == 0 && (gameBoard[i][choiceOfColumn] == 0x58 || gameBoard[i][choiceOfColumn] == 0x4f)) {
                cout << "The column is full. Choose another one!" << endl;
                //cin >> choiceOfColumn;
                //cin ignor error
            }
        }
    }
    else {
        cout << "Wrong column of choice!" << endl;
    }
}*/

/*for (int i = (height - 1); i >= 3; --i) {
        for (int j = 0; j < width-3; j++) {
            if (gameBoard[i][j] == gameBoard[i][j + 1] == gameBoard[i][j + 2] == gameBoard[i][j + 3]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
            else if (gameBoard[i][j] == gameBoard[i - 1][j] == gameBoard[i - 2][j] == gameBoard[i - 3][j]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
            else if (gameBoard[i][j] == gameBoard[i - 1][j + 1] == gameBoard[i - 2][j + 2] == gameBoard[i - 3][j + 3]) {
                //cout << "Player " << playerID << " wins!" << endl;
                winner = true;
            }
        }
    }
    */
