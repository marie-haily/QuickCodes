#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
//Asks the user for a lower-case vowel and thanks them
 char letter;
 
cout<< "Enter a lower-case vowel: ";
cin >> letter;

if (letter == 'a' && letter == 'e' && letter == 'i' && letter == 'o' && letter == 'u') 
{
    cout << "Thank you for cooperating." << endl;
}
else 
{
    cout << "I told you a lower-case VOWEL! How are you still in school!" << endl;
}

cout << endl;
system ("pause");
system ("cls");

///Then asks the user for their favorite animal and congratulates them if they enter either cat or dog
string favan;

cout << "What is your favorite animal? : ";
cin >> favan;

//Question while coding: If they entered Dog or Cat uppercase, how would the code catch on?

//Once using an or condition
if (favan== "cat" || favan == "dog")
{
    cout << "You've got good taste!" << endl;
}
//Insults them if they give any other answer
else
{
    cout << "Rethink your taste, oddball." << endl;
}
//Once using “not equal” (!=) condition
if (favan != "cat" && favan != "dog")
{
    cout << "Even your taste is subpar, pick one struggle." << endl;
}
else
{
   cout<< "Your taste in animals is great!" << endl;
}

//Then ask for a capital letter
char caplet;

cout << "Give me a CAPITAL letter: ";
cin >> caplet;

//thanks them if the letter they enter appears in the word “computer”
//insults them if it is not, use switch for this
switch (caplet)
{
    case 'C':
    case 'O':
    case 'M':
    case 'P':
    case 'U':
    case 'T':
    case 'E':
    case 'R':
    cout << "That letter appears in COMPUTER, thank you for your response.";
    break;

    default: 
    cout << "That letter does NOT appear in COMPUTER, try again you idiot.";
    break;
}
//not 100% sure if you wanted the whole code to be in switch so i did it this way as well

if (caplet !='C' && caplet!='O' && caplet!= 'M' && caplet!='P' && caplet!='U' && caplet!='T' && caplet!='E' && caplet!='R')
{
    switch (caplet)
    {
        default: 
        cout << "The letter you gave me is NOT in the word COMPUTER, try agian you idiot." << endl;
        break;
    }
}
else 
{ 
    cout << "That letter is in the word COMPUTER, looks like we've got an Einstein." << endl;
}

cout << endl << endl;
system ("pause");
return 1;
}