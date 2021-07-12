//
//  main.cpp
//  stl3
//
//  Created by Жанат on 15.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>
using std :: string;
using namespace std;
int main()
{
    vector <string> words;
    string word;
    ifstream fin;
    fin.open("Gaukhar.txt");
    while (!fin.eof())
    {
        fin >>word;
        words.push_back(word);
    }
    fin.close();
    
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y')
        
    {
        string target = words[rand() % words.size()];
        int length = target.size();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
        << "letters, and you guess \n"
        << "one letter at a time. You get " << guesses
        << " wrong guesses. \n";
        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string ::npos
               || attempt.find(letter) != string ::npos)
            {
                cout << "You already guessed that. Try again. \n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string ::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter ;
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string :: npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if(badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << "bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    
    cout << "Bye\n";
    
    return 0;
    
    
}


