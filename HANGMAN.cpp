#include <iostream>
#include <string>
using namespace std;
#ifdef _WIN32 //needed to clear screen
#include <windows.h>
const char *CLEAR_SCREEN_COMMAND = "CLS";
#elif defined (__APPLE__)
const char *CLEAR_SCREEN_COMMAND = "clear";
#elif defined (__linux__)
const char *CLEAR_SCREEN_COMMAND = "clear";
#endif

void gameTitle(); //creates hangman game title
void getWord(); //gets user input and hint phrase
int mainGame(); //main game
void drawHangman(int attempts); //draws the hangman if user doesnt enter correct letter
const int MAX_TRIES = 9; //user has 9 tries total

bool correctUserGuess;

string gameWord,wordBlank,hint; //declares variables


void gameTitle() //creates hangman game title
{

  cout << "\t _    _                                         _\n"; //prints this message on screen
  cout << "\t| |  | |                                       | |\n"; //prints this message on screen
  cout << "\t| |__| | __ _ _ __   __ _ _ __ ___   __ _ _ __ | |\n"; //prints this message on screen
  cout << "\t|  __  |/ _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\| |\n"; //prints this message on screen
  cout << "\t| |  | | (_| | | | | (_| | | | | | | (_| | | | |_|\n"; //prints this message on screen
  cout << "\t|_|  |_|\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_(_)\n"; //prints this message on screen
  cout << "\t                     __/ |                       \n"; //prints this message on screen
  cout << "\t                    |___/                           \n"; //prints this message on screen
  cout << "\n"; //adds a space in between hangman and by: evan jones
  cout << "\t _               ______                       _\n"; //prints this message on screen
  cout << "\t| |          _  |  ____|                     | |\n"; //prints this message on screen
  cout << "\t| |__  _   _(_) | |____   ____ _ _ __        | | ___  _ __   ___  ___\n"; //prints this message on screen
  cout << "\t| '_ \\| | | |   |  __\\ \\ / / _` | '_ \\   _   | |/ _ \\| '_ \\ / _ \\/ __|\n"; //prints this message on screen
  cout << "\t| |_) | |_| |_  | |___\\ V / (_| | | | | | |__| | (_) | | | |  __/\\__ \\ \n"; //prints this message on screen
  cout << "\t|_.__/ \\__, (_) |______\\_/ \\__,_|_| |_|  \\____/ \\___/|_| |_|\\___||___/\n"; //prints this message on screen
  cout << "\t       __/ | \n"; //prints this message on screen
  cout << "\t      |___/\n"; //prints this message on screen


  cout <<" \n\n\n" << endl; //adds spaces at the end
}

void getWord() //gets user input and hint phrase
{
  cout << "\t\t\tWelcome to Hangman!\n "; //prints this message on screen
  cout << "\n\n\tPlayer #1 please enter a word for Player #2 to guess: ";//prints this message on screen
    getline(cin,gameWord); //prompts user to enter word, stored under gameWod
    cout << "\n\n\tPlease enter a one-word hint for player 2: ";//prints this message on screen
    cin >> hint; //prompts user to enter hint, stored under hint

}

void drawHangman(int attempts) //draws the hangman if user doesnt enter correct letter
{
  if(attempts==0) //prints the hangman pole
 {
   cout<<endl<<endl;
   cout<<"    _______  "<<endl;
   cout<<"   |        "<<endl;
   cout<<"   |         "<<endl;
   cout<<"   |         "<<endl;
   cout<<"   |         "<<endl;
   cout<<"   |         "<<endl;
   cout<<"   =========="<<endl<<endl;
 }
   if(attempts==1) //when user fails to enter correct letter the first time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==2) //when user fails to enter correct letter the 2nd time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==3) //when user fails to enter correct letter the 3rd time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |       |  "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==4) //when user fails to enter correct letter the 4th time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |      /|  "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==5) //when user fails to enter correct letter the 4th time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |      /|\\  "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==6) //when user fails to enter correct letter the 4th time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |      /|\\  "<<endl;
    cout<<"   |      /  "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==7) //when user fails to enter correct letter the 4th time, it prints this version of the hangman
  {
    cout<<endl<<endl;
    cout<<"    _______  "<<endl;
    cout<<"   |       | "<<endl;
    cout<<"   |       O  "<<endl;
    cout<<"   |      /|\\  "<<endl;
    cout<<"   |      / \\ "<<endl;
    cout<<"   |         "<<endl;
    cout<<"   =========="<<endl<<endl;
  }
  else if(attempts==8) //when user fails to enter correct letter the 4th time, it prints this version of the hangman
      {

        cout<<"\n\n\n"<<endl;
        cout<<"    _______  "<<endl;
        cout<<"   |       | "<<endl;
        cout<<"   |       O  "<<endl;
        cout<<"   |      /|\\  "<<endl;
        cout<<"   |      / \\ "<<endl;
        cout<<"   |                   YOU HAVE DIED!   "<<endl; //prints this message
        cout<<"   =========="<<endl<<endl;

      cout <<"\n"; //ads space
      cout << "\t __ _  __ _ _ __ ___   ___    _____   _____ _ __ \n"; //prints this message
 cout<< "\t/ _` |/ _` | '_ ` _ \\ / _ \\  / _ \\ \\ / / _ \\ '__|\n"; //prints this message
cout << "\t| (_| | (_| | | | | | |  __/ | (_) \\ V /  __/ |\n"; //prints this message
 cout << "\t\\__, |\\__,_|_| |_| |_|\\___|  \\___/ \\_/ \\___|_|\n"; //prints this message
  cout << "\t__/ |                                        \n"; //prints this message
 cout << "\t|___/                                         \n"; //prints this message
cout << "\n\n\n\n\n\n"; //goes to next line, 6 times to create a large white space.
cout << "\t\tThanks for playing my game!\n\n\n";
cin.ignore();

    }
  }


int mainGame() //main game
{
  char userGuess; //declares variable as character;
  int i; //declares variable
  int attempts =0; //counts user attempts
  for (int space=0;space<30;space++) //space to bottom of screen after guess word is entered
  {cout << endl;}
  wordBlank = gameWord; // creates the word blanks
    for (i=0;i<wordBlank.length(); i++) //turns the word into blanks
        {wordBlank[i] = '-';}

while(attempts < MAX_TRIES) //if user still has attempts left; it will keep the program running
{

    drawHangman(attempts); //draws hangman on screen

    if (attempts < MAX_TRIES-1) { //if user still has attempts left, it will keep display whats below after each entry
    cout << "\n\nPlayer 2, please guess a letter to fill in the word blank: \n"; //prints this message
    cout << "\n\t\tWord hint: " << hint << "\n"<< wordBlank << "\n";
    cin >>userGuess;
  }

bool correctUserGuess = false;
    for (int i=0;i<gameWord.length();i++)
      if (userGuess == gameWord[i])
        {
          cout << "\t\tCongrats, You have guessed a correct letter."; //prints this message
          wordBlank[i]=gameWord[i];
          correctUserGuess = true;
        } //close if loop
          if (!correctUserGuess && attempts < MAX_TRIES-1) //if user enters wrong guess, it displays message and adds 1 to attempts
          {
      cout <<"\t\tSorry, that is not a character in the word.\n"; //prints this message
      cout <<"\t\tA piece has been added to the hangman.."; //prints this message
      attempts++;
    } //close if loop


    else if (wordBlank==gameWord) //when user guess correctly, it displays what is below in the else if looop.
    { //open if loop
      system(CLEAR_SCREEN_COMMAND); //clear screen
      cout <<"\n\n\n"; // creates space
  cout << "\t\t                           _\n"; //prints this message
  cout <<"\t\t                          (_) \n"; //prints this message
cout <<"\t\t _   _  ___  _   _  __      ___ _ __ \n"; //prints this message
cout <<"\t\t| | | |/ _ \\| | | | \\ \\ /\\ / / | '_ \\\n"; //prints this message
cout <<"\t\t| |_| | (_) | |_| |  \\ V  V /| | | | |\n"; //prints this message
cout <<"\t\t \\__, |\\___/ \\__,_|   \\_/\\_/ |_|_| |_|\n"; //prints this message
cout <<"\t\t  __/ |                                     \n"; //prints this message
cout <<"\t\t |___/                                     \n"; //prints this message
cout <<"\n\n\t\t Thank you for playing my game!!\n\n\n"; //prints this message
  break; //ends loop
} //close if loop
} //close while loop
return correctUserGuess;
} // close main game

int main() //main game looop
    { // open int main

        gameTitle(); //adds game title of Hangman by: Evan Jones
        getWord(); //gets word and hint from player 1/
        mainGame(); //main game loop

      return 0; //return to 0 for main
    } // close int main
