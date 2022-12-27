// LOGIN AND REGISTRATION SYSTEM USING C++

// First we will create MENU
// Ask the user to select OPTION
// Add FUNCTIONALITIES to the options

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void login();
void registration();
void forgot_password();
int main()
{
    int choice; 

    cout<<"\t\t\t\t_____________________________________________________________\n";
    cout<<"\t\t\t\t                  WELCOME TO THE LOGIN PAGE                  \n";
    cout<<"\t\t\t\t______________________      MENU     ________________________\n\n";
    cout<<"                                                                      \n";
    cout<<"\t\t\t\t| Press 1 to LOGIN                                          |"<<endl;
    cout<<"\t\t\t\t| Press 2 to REGISTER                                       |"<<endl;
    cout<<"\t\t\t\t| Press 3 IF YOU FORGOT PASSWORD                            |"<<endl;
    cout<<"\t\t\t\t| Press 4 to EXIT                                           |"<<endl;
    cout<<"\t\t\t\t                         __________________________         \n\n";
    cout<<"\n\t\t\t\t Please enter your choice: ";

    cin>>choice;
    cout<<endl;

    switch(choice)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot_password();
            break;
        case 4:
            cout<<"\t\t\t\t\t Thank you  \n\n";
            break;
        default:
            system("cls"); // Every time the code is process it will clear up the screen
            cout<<"\t\t\t\t Please select from the options above \n";
            main();
    }
}

/**************************************************************
             THE LOGIN FUNCTION
 ************************************************************/
void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\n\n\n";
    cout<<"\t\t\t\t Please Enter Username and Password \n";
    cout<<"\t\t\t\t USERNAME : ";
    cin>>userId;
    cout<<"\t\t\t\t PASSWORD : ";
    cin>>password;

    // Now to check that entered username and password already exist , for this file handling
    // We will use ifstream class: it reads the data
    ifstream input("records.txt");

    while(input>>id>>pass) // To check if id and pasword there
    {
        if(id==userId && pass == password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count == 1)
    {
        cout<<"\t\t\t\t\t "<<userId<<" your Login is SUCCESSFUL \n\\n\n";
        main();
    }
    else{
        cout<<"\t\t\t\t Login error !!!\n";
        main();
    }
}
/**************************************************************
             THE REGISTRATION FUNCTION
 ************************************************************/

void registration()
{
    string r_userId, r_password, r_id, r_pass;
    system("cls");
    cout<<"\n\n\n";
    cout<<"\t\t\t\t ENTER THE USERNAME : ";
    cin>>r_userId;
    cout<<"\t\t\t\t ENTER THE PASSWORD : ";
    cin>>r_password;

    // We want to use write inside the file so offstream will help us
    ofstream f1("records.txt",  ios::app); //ios means input output stream, app means append
    f1<<"Email: "<< r_userId<<" --- "<<"Password: "<<r_password<<endl;
    system("cls");
    cout<<"\t\t\t\t Your REGISTRATION is Successful !! \n\n\n";
    main();
}

/**************************************************************
             THE FORGOT PASSWORD FUNCTION
 ************************************************************/

void forgot_password()        // !!!ERROR in this function
{
    int option;
    system("cls");
    cout<<"\n\n\n";
    cout<<"\t\t\t\t You forgot the password!!  No worries \n";
    cout<<"\t\t\t\t Press 1 to search your Id by username \n";
    cout<<"\t\t\t\t Press 2 to go back to the main menu\n";
    cout<<"\t\t\t\t Enter your choice : ";
    cin>>option;

    switch(option)
    {
        case 1:
        {
            int count=0;
            string s_userID, s_id, s_pass;
            cout<<"\n\t\t\t\t Enter the username which you remembered : ";
            cin>>s_userID;
        
        // ifstream  = reads the data from file
        ifstream f2("records.txt");

        while(f2>>s_id>>s_pass) // To check if id and password there
        {
            if(s_id == s_userID)
            {
                count = 1;
            }
        }
        f2.close();

        if(count == 1)
        {
            cout<<"\t\t\t\t\n Your account is found !!";
            cout<<"\t\t\t\t Your password is : "<<s_pass<<endl;
            main();
        }
        else{
            cout<<"\t\t\t\t \n Sorry ! Your account is not found ";
            main();
        }
        break;
        }

        case 2:
        {
            main();
        }

        default:
            system("cls"); // Every time the code is process it will clear up the screen
            cout<<"\t\t\t\t\t Please select from the options above \n";
            forgot_password();
    }
}
/**************************************************************
            FEND OF THE PROJECT
 ************************************************************/