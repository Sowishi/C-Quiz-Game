#include <iostream>

using namespace std;


// Helper method

string convertToLower(string word){

    string output;

    for (int i = 0; i < word.length(); i++){

        char letter = tolower(word[i]);
        output += letter;
    }

    return output;
}


// Main game

void gameLoop(string name){

    int gamemode;

    cout << "Please select a game mode: \n 0 - True or False \n 1 - Enumeration \n 2 - Multiple choice" << endl;
    cout << ">> ";
    cin >> gamemode;

   
    string questions[2][10] = {

            {"Great wall of china can be seen from the space?", "Chickens have a color vision?", "Albert Einstein did not wear socks?", "Crocodiles swallow stones to dive more deeply?", "A pig cannot look at the sky?", "A snail has about 25,000 teeth?", "Bamboo is a highest grass in the world?", "Humans have four senses?" , "China is the largest country in the world?", "Bananas grow upside down?"},
            {"What phenomena keep the planets in orbit around the sun?", "What is the largest star in the solar system?", "What word do scientists use to describe a unit of measure that is also the name of an animal?", "What color is the sunset on Mars?", "What planet is closest to the sun?", "What is the smallest planet in the solar system?", "What process do bats use to locate their prey?", "What is the largest organ in the human body?", "What word can you use to describe when a solid turns into a liquid?", "How many elements are listed in the periodic table?"}
        };


    string answers[2][10] = { 
        {"true", "true", "true", "true", "true", "true", "true", "false", "false", "true"},
        {"gravity", "sun", "mole", "blue", "mercury", "mercury", "echolocation", "skin", "melting", "118" }
     };

     switch (gamemode){

         case 0: 
            cout << "\n";
            cout << "Welcome to True or False gamemode!!! 🤩" << endl;
            cout << "You only have 3 lives, Goodluck " << name << "😊!!" << endl;
            break;

        case 1: 
            cout << "\n";
            cout << "Welcome to Enumeration gamemode!!! 🤩" << endl;
            cout << "You only have 3 lives, Goodluck " << name << "😊!!" << endl;
            break;

     }
                

    

    int counter = 0;
    int scores = 0;
    int lives = 3;

    while (counter < 10){

        string answer;

        if (lives == 0){
            cout << "==================================================" << endl;
            cout << "\n";
            cout << "Opss sorry! You ran out of lives 😭" << endl;
            cout << "GAMEEEEEE OVEERRRRRR!!!! 💢💢💢 "<< endl;
            break;
        }

        cout << "================================================== \n \t Question number #" <<  counter + 1 << ": " << endl;

        cout << "Lives 🍎: " << lives << endl;
        cout << "Scores: " << scores << endl;
        if (gamemode == 0){
            cout << "TRUE OR FALSE🥳" << endl;
        }
        else if (gamemode == 1){
            cout << "ENUMERATION🥵" << endl;
        }
        cout << "\n";

        cout << "\t" << questions[gamemode][counter] << '\n' << endl;

        cout << "What's your answer?: ";
        cin >> answer;
        answer =  convertToLower(answer);

        if (answer == answers[gamemode][counter]){
            cout << "Correct! ✅" << endl;
            scores++;
        }
        else{
            cout << "Wrong! ❌" << endl;
            --lives;

            cout << "The answer is: " << answers[gamemode][counter] << endl;
        }

        counter++;

    }

    cout << "==================================================" << endl;
    cout << "\n";
    cout << "Your final score is: " << scores << "/10" << endl;

    if (scores >= 8) {
        cout << "🏆 Excellent job master,  " << name << endl;
    }
    else if (scores >= 5) {
        cout << "🥇 Great job master,  " << name << endl;
    }
    else if (scores >= 3) {
        cout << "🥈 Good job master,  " << name << endl;
    }
    else{
        cout << "🥉 Better luck next time master, " << name << endl;

    }

    cout << "\n";
    cout << "Would you like play again master, " << name << "?(Y/N)🥺: ";
    char playAgain;
    cin >> playAgain;

    if (playAgain == 'Y' || playAgain == 'y'){
        gameLoop(name);
    }
    else{
        cout << "Goodbye 👋, " << name << "!" << endl;
    }
   
}

int main(){

    string name;
    char respond;

    cout << "================================================== \n \t 🔰 Welcome to C++'s Quiz game 🔰 \n \n Made by: 💁‍♀️ Arianne Delos Reyes \n and 🙋‍♂️ Jhon Michael Molina" << endl;
    cout << "==================================================" << endl;


    cout << "What is your name?: ";
    cin >> name;

    cout << "Greetings, " << name << "! 👋. \n" << endl;

    cout << "\t would you like to play a game master, " << name << "? (Y/N)🥺: ";
    cin >> respond;

    cout << "\n";

    if (respond == 'y' || respond == 'Y'){
        gameLoop(name);
    }
    else{
        cout << "Goodbye 👋, " << name << "!" << endl;
    }

    return 0;
}