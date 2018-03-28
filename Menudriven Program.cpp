#include <iostream>
#include <cstdlib>

using namespace std;

void help();            // function for the help option
void multipFlaots();    // function for multiplying floats
void addIntegers();     // function for adding integers
void quit();            // function for quit option

int main()
{
    char userInput = 0;  //variable that will store the letter entered by user
    unsigned const int loop = 1; //loop flag


    //execute the program while the condition for the loop is met
    do
    {
          //display the menu
          cout << "Welcome, thanks for using my program:\n";
          cout << "-------------------------------------\n";
          cout << "- for HELP, please enter 'h' or 'H' without the quotations \n";
          cout << "- for MULFLOATS, please enter 'm' or 'M' without the quotations \n";
          cout << "- for ADDINTEGERS, please enter 'a' or 'A' without the quotations \n";
          cout << "- for QUIT, please enter 'q' or 'Q' without the quotations \n\n";

          cout << "Please select an option: ";

          // loop
          while (true)
          {
              cin >> userInput;

              switch (userInput)

              {

                   // in case of help
                   case 'h' :
                   case 'H' :
                       help();
                       break;

                   // in case of adding integers
                   case 'a' :
                   case 'A' :
                       addIntegers();
                       break;

                   // in case of multiplying floats
                   case 'm' :
                   case 'M' :
                       multipFlaots();
                       break;

                   // in case of quitting the program
                   case 'q' :
                   case 'Q' :
                       system ("cls");
                       return 0;

//In case the user doesn't enter a correct option
                   default :
            cout << "Enter a correction option: ";
                             continue;
              }
               break;
          }
     } while (loop == 1);

}

/*
 * The section below is where the functions that will be called are created
*/


//Create a function called help, so when the user enters h or H, it will be called
void help(){

 cout << "Thank you for using the help feature.\n";
 cout << "The program performs a task as specified by you, the user.\n";
 cout << "if you choose q, the program will terminate\n";
 cout << "if you choose MulFloats, the program will multiple two float numbers you enter\n";
 cout << "if you choose AddIntegers, the program will add two integer numbers you enter\n";

 system("pause");
 system("cls");


}


// Create a function called multiFloats, so when the user enters m or M, it will be called
void multipFlaots()
{
    float num1 = 0;
    float num2 = 0;
    float prod = 0;

    cout << "Enter the first float number:  ";
    cin >> num1;
    cout <<"\n";
    cout << "Enter the second float number:  ";
    cin >> num2;

    //calculate the product
    prod = num1*num2;
    cout << "The product of " << num1 << " * " << num2 << " is: " << prod << endl;

    system("pause");
    system("cls");
}


// Create a function called addIntegers, so when the user enters a or A, it will be called
void addIntegers()
{
    float add1 = 0;
    float add2 = 0;
    float sum = 0;

    cout << "Enter the first number:  ";
    cin >> add1;
    cout <<"\n";
    cout << "Enter the second number:  ";
    cin >> add2;

    //calculate the product
    sum = add1 + add2;
    cout << "The sum of " << add1 << " + " << add2 << " is: " << sum << endl;

    system("pause");
    system("cls");
}


