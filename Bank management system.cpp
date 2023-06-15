#include<iomanip>
#include <iostream>
#include<Windows.h> // for system("CLS") and sleep
#include<conio.h> //for getch
#include <string> // for getline
using namespace std;

class Banking {
private:
    int completed; // it will tell us how many customers records did we complete 
    string id; // this is used for matching / comparing the id
    struct customer_client {
        string address;
        string Name;
        string father_name;
        string ID;
        string  mobile_number ;
        int  cash = 0  ;
        string idcard_number;
        // intialize it with a constructor
        
    }customer_client[100];// an array of 100 characters
    // constructor for banking
    //it has to be public 
public :
    Banking()
    {
        // intialy it wuld be zero
        completed = 0;
    }
    
 // now make methods / functions in public
    void update();
    void newaccount();
    void displayinfo();
    void searching_info();
    void logingOut();
    void Exist_system();
    void transaction_cash();
   // void options_avaliable();
    void options_avaliable()
    {
        char selection;
        while (1)
        {
            // options for customer/client/user
            std :: cout << "1) Creating new account" <<std :: endl;
            std :: cout << "2) Displaying information of customer" << std ::endl;
            std :: cout << "3) Updating Customer information" << std :: endl;
            std :: cout << "4) Searching Specific customer info" << std :: endl;
            std :: cout << "5) Transaction (Deposit and withdraw" << std :: endl;
            std :: cout << "6) for loging out of system" << std :: endl;
            std :: cout << "7) EXIT " << std :: endl;
            std :: cout << "**______________________________________________**\n\n\n";
            selection = _getch();
            switch (selection) 
            {
            case '1':
                newaccount();
                break;
            case '2':
                displayinfo();
                break;
            case '3':
                update();
                break;
            case '4' :
                searching_info();
                break;
           
            case '5':
                transaction_cash();
                break;
            case '6' :
                logingOut();
                break;
            case '7' :
                Exist_system();
                break;
            default :
            std :: cout << "Error !!!" << std::endl;
            std::cout << "number must be between 1-7 " << std::endl;
                break;
            }

        }
    }
};

void Banking::newaccount() {
    std :: cout << endl;
    std :: cout << "\t**New acount Creation**\t\n\n" << std :: endl;
    std :: cout << "-------------------------------------------------" << std :: endl;
    //displaying the record of first customer
    std :: cout << "Record of user = " << completed + 1 << "  client/customer" << std :: endl;
    std :: cout << "Enter User name = ";
    std :: cin >> customer_client[completed].Name;
    std :: cout << std :: endl;

    std :: cout << "Enter User ID : ";
    std :: cin >> customer_client[completed].ID;
    std :: cout << std :: endl;

    std :: cout << "Enter User Father name : ";
    std :: cin >> customer_client[completed].father_name;
    std :: cout << std :: endl;

    std :: cout << "Enter User address : ";
    std :: cin >> customer_client[completed].address;
    std :: cout << std :: endl;

    std :: cout << "Enter User mobile phone number : ";
    std :: cin >> customer_client[completed].mobile_number;
    std :: cout << std :: endl;

    std :: cout << "Enter User cash in account: ";
    std :: cin >> customer_client[completed].cash;
    std ::cout << std :: endl;

    std :: cout << "Enter User ID card number : ";
    std :: cin >> customer_client[completed].idcard_number;
    std :: cout << endl;

    completed++;// intialily it is only recording the first 
    // cutomer on 0 index info , the ++ increment makes it record 
    // information about multiply customers
    //to save all records of customers
}
void Banking::displayinfo() {
    // this is to display the records of mutliply people
    for (int i = 0; i < completed; i++)
    {
        //record of 1st customer
        std :: cout << "Record of user = " << completed + 1 << " customer " <<std :: endl;
        std :: cout << "Client name = " << customer_client[i].Name <<std :: endl;
        std :: cout << "Client ID = " << customer_client[i].ID <<std :: endl;
        std :: cout << "Clinet Father's name = " << customer_client[i].father_name <<std :: endl;
        std :: cout << "Client Address = " << customer_client[i].address <<std :: endl;
        std :: cout << "Client Id card number = " << customer_client[i].idcard_number <<std :: endl;
        std :: cout << "Client cell number = " << customer_client[i].mobile_number <<std :: endl;
        std :: cout << "Client cash  = " << customer_client[i].cash <<std :: endl;
        i++; // to display all records
    }
}
void Banking::update(){
   std :: cout << "Enter the ID of customer u want to take for updating the information = ";
   std :: cin >> id;
    for (int i = 0; i < completed; i++)
    {
        // to check if Id is present or equal
        // if it is equal tham only we update the value 
        // otherwise it means no record exist
        if (id == customer_client[i].ID)
        {
            // existing records 
           std :: cout << "Avaliable Record of user = " << " customer " << std :: endl;
           std :: cout << "Client name = " << customer_client[i].Name << std :: endl;
           std :: cout << "Client ID = " << customer_client[i].ID << std :: endl;
           std :: cout << "Clinet Father's name = " << customer_client[i].father_name << std :: endl;
           std :: cout << "Client Address = " << customer_client[i].address << std :: endl;
           std :: cout << "Client Id card number = " << customer_client[i].idcard_number << std :: endl;
           std :: cout << "Client cell number = " << customer_client[i].mobile_number << std :: endl;
           std :: cout << "Clinet cash  = " << customer_client[i].cash << std ::endl;
           std :: cout << "\n\n";
           std :: cout << "\t**Updating Account of User**\t\n\n" << std :: endl;
           std :: cout << "-------------------------------------------------" << std :: endl;
            //displaying the record of customer
          
            std :: cout << "Enter User name = ";
            std :: cin >> customer_client[i].Name;
            std :: cout << endl;

            std :: cout << "Enter User ID : ";
            std :: cin >> customer_client[i].ID;
            std :: cout << endl;

            std :: cout << "Enter User Father name : ";
            std :: cin >> customer_client[i].father_name;
            std :: cout << endl;

            std :: cout << "Enter User address : ";
            std :: cin >> customer_client[i].address;
            std :: cout << endl;

            std :: cout << "Enter User mobile phone number : ";
            std :: cin >> customer_client[i].mobile_number;
            std :: cout << endl;

            std :: cout << "Enter User cash in account: ";
            std :: cin >> customer_client[i].cash;
            std :: cout << endl;

            std :: cout << "Enter User ID card number : ";
            std :: cin >> customer_client[i].idcard_number;
            std :: cout << endl;
            completed++; // the code will work without it too but 
            // we use this if mulitply records are being updated
        } 
        else if (i == completed - 1) // the index is starting from 0 and this means through the loop we checked all the records but it was not found 
        {
            std :: cout << "customer record not found" << std ::endl;
        }
       
    }
    }


void Banking::searching_info() 
{
    cout << "Enter the ID of customer u want to take for SEARCH the information  for = ";
    cin >> id;
    cout << "\n\n";
    for (int i = 0; i <= completed; i++)
    {
        if (id == customer_client[i].ID)
        {
            std :: cout << "Searched Record of user that was found = " << std :: endl;
            std :: cout << "Client name = " << customer_client[i].Name << std :: endl;
            std :: cout << "Client ID = " << customer_client[i].ID <<  std :: endl;
            std :: cout << "Clinet Father's name = " << customer_client[i].father_name <<std :: endl;
            std :: cout << "Client Address = " << customer_client[i].address << std :: endl;
            std :: cout << "Client Id card number = " << customer_client[i].idcard_number << std :: endl;
            std :: cout << "Client cell number = " << customer_client[i].mobile_number << std :: endl;
            std :: cout << "Clinet cash  = " << customer_client[i].cash <<std :: endl;
            std :: cout << "\n\n";
        }
        else if (i == completed )
        {
            std :: cout << "customer record not found" << std :: endl;
        }
    }
}
void Banking::transaction_cash()
{
    //either deposit or withdraw
    std :: cout << "Enter the ID of customer u want to take for transaction of cash = ";
    std :: cin >> id;
    std :: cout << "\n\n" << std::endl;
    for (int i = 0; i < completed; i++)
    {
        if (id == customer_client[i].ID)
        {
            std::cout << "  EXISTING Record FOR  transaction of user that was found = " << std::endl;
            std::cout << "Client name = " << customer_client[i].Name << std::endl;
            std::cout << "Client ID = " << customer_client[i].ID << std::endl;
            std::cout << "Client Id card number = " << customer_client[i].idcard_number << std::endl;
            std::cout << "Clinet cash  = " << customer_client[i].cash << std::endl;
            std::cout << "\n\n";

            char choice;
            int cash1;
            std::cout << " Starting transaction " << std::endl;
            std::cout << " 1) DEPOSIT AMOUNT " << std::endl;
            std::cout << " 2) WITHDRAW AMOUNT " << std::endl;
            choice = _getch();
            switch (choice)
            {
            case '1' :
                std :: cout << "Enter the amount for deposit = ";
                std::cin >> cash1;
                std::cout << std::endl;
                std :: cout << " Transaction for deposit is happening please wait " << std :: endl;
                for (int i = 0; i <= 5; i++)
                {
                    cout << "*";
                    Sleep(1000);
                }
                customer_client[i].cash += cash1;

                std :: cout << " Transaction(Deposit) is done !!!" << std :: endl;
                std::cout << " So new amount of cash now is after deposit  = " << customer_client[i].cash << std::endl;

                break;
            case '2' :
                previousAmount_withdraw :
                std::cout << "Enter the amount for withdrawal cash = ";
                std::cin >> cash1;
                std::cout << std::endl;
                if (cash1 > customer_client[i].cash) {
                 std :: cout<< "User amount is greater than existing amount "<< std::endl;
                 goto previousAmount_withdraw ;
                }
                std::cout << " Transaction for withdrawal is happening please wait " << std::endl;
                for (int i = 0; i <= 5; i++)
                {
                    cout << "*";
                    Sleep(1000);
                }
                customer_client[i].cash -= cash1;

                std::cout << " Transaction for WITHDRAWAL IS DONE  is done !!!" << std::endl;
                std::cout << " So new amount of cash now is after withdrawal is   = " << customer_client[i].cash << std::endl;
                
                break;
            }
        }   

        else if (i == completed - 1)
        {
            std::cout << " Record for transaction not found " << std::endl;
        }
    }

}
void Banking::logingOut() {
    std ::cout << "Thank You for visiting the bank management system" << std::endl;
    std::cout << " We will be loging off the user account " << std::endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << "UwU \t";
        Sleep(1000);
    }
    exit(0);

}
void Banking::Exist_system()
{
    exit(0);
}
int main()
{
    string name; // user name FOR SIGN UP
    string name1; // user name for login
    int pin; // pin for sign up
    int pin1; // pin for login
    cout << "-----------------------------BANK MANAGEMENRT SYSYTEM-------------------------------\n" << std :: endl;
    std :: cout << "************************************************************************************" <<std :: endl;
    std :: cout << "\t------------------------SIGN UP MENU----------------------\t\t\t" << std :: endl;
    std :: cout << "Enter user name = ";
    getline(cin, name);
    std :: cout << std :: endl;
    std :: cout << "Enter User PIN = ";
    std :: cin >> pin;
    std :: cout << std :: endl;
    std :: cout << "Your account is getting ready/created" << std :: endl;
    std :: cout << "Please wait " << std :: endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "~";
        Sleep(1000);
    }
    std :: cout << std :: endl;
    std :: cout << "Your account has been created successfully" << std :: endl;
    system("CLS");
    loginmenu :
    std :: cout<< "\t------------------------LOGIN MENU----------------------\t\t\t" << std :: endl;
    std ::cout << "Enter user name = ";
    std :: cin >> name1;
        //loginmenu :
    std :: cout << "Enter User PIN = ";
    std :: cin >> pin1;
    std :: cout << std :: endl;
    if (name == name1 && pin == pin1) {
       std :: cout << "WELCOME BACK" << std :: endl;

        Banking obj1;
        obj1.options_avaliable();
       
        

    }
    else if (name != name1)
    {
        cout << "Incorrect Username\n";
        goto loginmenu;
    }
    else if (pin != pin1)
    {
        cout << "Incorrect Pin\n";
        goto loginmenu;
    }


        return 0;
}