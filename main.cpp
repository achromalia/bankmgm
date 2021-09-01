#include <iostream>

using namespace std;

class bank
{
   char name[100], add[100], type;
   int counter;
   // here we declare variables
   int balance, amount;

public:
   // we declare functions like opening an acc , depositing & withdrawing and displaying all account info
   void open_account();
   void deposit();
   void withdraw();
   void account_info();
   void options();
};

void bank::options()
{
   int input;          // we declare an input variable here
   system("cls");      // clears the screen
   system("color 0A"); // sets colour to green
   cout << "1)Open account \n";
   cout << "2)Deposit money \n";
   cout << "3)WithDraw money \n";
   cout << "4)Display account\n";
   cout << "5)Exit the Program\n";
   cout << "Select An Option From Above To Proceed With it -> ";
   cin >> input; // takes user input for the option to be proceeding with

   switch (input) // here we use switch case to define what will happen with the certain option chosen
   {
   case 1:
      "1)Open account \n";
      open_account();
      break;
   case 2:
      "2)Deposit money \n";
      deposit();
      break;
   case 3:
      "3)Withdraw money \n";
      withdraw();
      break;
   case 4:
      "4)Display account info\n";
      account_info();
      break;
   case 5:
      if (input == 5)
      {
         system("exit");
         break;
      }
   default:
      cout << "This is not a valid option please try again " << endl;
   }
}

void bank::open_account() // we define the open_account function we declared above
{
   system("cls"); // clear screen before showing all info
   cout << "Enter your full name :";
   cin.ignore();
   cin.getline(name, 100); // takes input from the user
   cout << "Enter your address :";
   cin.ignore();
   cin.getline(add, 100);
   cout << "Whiinput Account Type do you want to open -> Savings [ S ] or Current [ C ]";
   cin >> type;
   cout << "Enter amount for depositing : [ Minimum -> 5000 ]";
   cin >> balance;
   cout << "Your account has been created ! ";
   system("pause");
   system("cls");
   options();
}

void bank::deposit() // defining the deposit function
{
   int a;
   cout << "Enter The sum of money you want to deposit";
   cin >> a;
   balance += a;
   cout << "Your deposit amount has been deposited and your current balance is : \n";
   cout << balance;
   system("pause");
   system("cls");
   options();
}

void bank::withdraw() // defining the withdraw function
{
   cout << "Withdraw :" << endl;
   cout << "Enter your amount for withdrawing : ";
   cin >> amount;
   balance = balance - amount;
   cout << "The withdrawal amount has been deducted and your current balance is : " << balance << endl;
   system("pause");
   system("cls");
   options();
}

void bank::account_info() // defining account info function whiinput will display all the details we have set
{
   cout << "Name : " << name << endl;
   cout << "Address : " << add << endl;
   cout << "Account Type : " << type << endl;
   cout << "Balance : " << balance << endl;
   system("pause");
   system("cls");
   options();
}
int main()
{
   bank dax;
   system("color 0A");
   cout << "Welcome" << endl;
   cin.ignore();
   system("color 04");
   cout << "To " << endl;
   cin.ignore();
   cout << "Bank Management System" << endl;
   cin.ignore();
   system("cls");
   system("color 07");
   cout << "Hello There , Welcome to The Bank . To access all Options regarding your bank account Press Enter" << endl;
   system("pause");
   dax.options();
   return 0;
}
