#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
int num = 42;

//ask for number 42
cout << "Enter 42: ";
cin >> num;

//yell if they get it wrong
if (num != 42)
cout << "Ive never witnessed anyone so brainless. Your mom is disappointed.";
cout << endl <<endl;
//Whether or not it is divisible by three (Use ternary for this)
cout << endl << num << " Is " << ( num % 3 == 0 ? "divisible by 3" : "NOT divisible by 3" )
<< "!";
cout <<endl;

//Whether it ends in 0, or ends in 5, or ends in something else (Use if-else-if for this)
if (num % 5 == 0)
{
cout << num << " ends in 5";
}
else if (num % 10 == 0)
{
cout << num << " ends in 0.";
}
else
{
cout << num << " Does not end in 5 OR 0!!";
}

//hehehehehehe
cout <<endl;
system("pause");
system("cls");

string resp;

cout << "How is homework going? Good or bad? : ";
cin >> resp;

if ( tolower(resp[0]) == 'g'  )
{
cout << "Glad homework is going well, hard work pays off." << endl;
}
else
{
cout << "Ya get what ya give. BooHoo!" << endl;

system("pause");
cout << "Just kidding, I love this class.";
}

cout << endl <<endl;
system("pause");
return 0;
}

