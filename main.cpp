
#include <iostream>
#include <stdlib.h>

using namespace std;
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

int main()
{

	// function prototypes

// global variable (use this variable to store the user’s menu selection)
char menuInput;

// the main function


	// TO WRITE A WELCOME MESSAGE HERE

		// call the function start
		start();

		return 0;
}

void printIntroMenu()
{


    cout<< "Please select an option from the menu below" <<endl;
    cout<<"l -> Login"<<endl;
    cout<<"c -> Create New Account"<<endl;
    cout<<"q -> Quit"<<endl;


}

void printMainMenu()
{
	char input;
	float balance = 0;
	float deposit;
	float withdraw;
	while(input == 'd'&&input=='w'&&input=='r'){
	cout<<"d -> Deposit Money"<<endl;
	cout<<"w -> Withdraw Money"<<endl;
	cout<<"r -> Request Balance"<<endl;
	cout<<"q -> Quit"<<endl;
	cin>>input;

	if (input =='d'){
        cout<<"Enter the amount you want to deposit"<<endl;
        cin>>deposit;

        balance = balance + deposit;}
    else if(input == 'w'){
        cout<<"Enter the amount you want to withdraw"<<endl;
        cin>>withdraw;

        balance= balance-withdraw;
        cout<<"The amount you withdrew is $ "<<withdraw<<endl;}
    else if (input =='r'){
        cout<<"Your balance is $ "<<balance<<endl;
    }
    else if(input=='q'){
        cout<<"Thanks for stopping by"<<endl;
        exit(0);
    }
    }
	}





void start()
{
    char input;
    cout<<"Please select an option from the menu below"<<endl;
    printIntroMenu();
    cin>>input;

    if (input == 'l'){
        login();
    }
    else if (input == 'c'){
        createAccount();
    }
    else if (input == 'q'){
        exit(0);
    }

}

void createAccount()
{
	// PHASE 2
}

void login()
{
	// PHASE 2
}

// CODE ENDS HERE




