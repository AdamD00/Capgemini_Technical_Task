#include "Function.h";
int main()
{
    vector <Phone> PhoneArray;
    
    
    char choice;
    int choice2;
    int NumberOfPhone = 0;
    do 
    {   
       
        system("cls");
        cout<<"Store Console\n"
            <<"ADD NEW PHONE (+)\n";
        if (!PhoneArray.empty())
        {
            cout << "DELETING A PHONE (-)\n"
                << "REPORTS (R)" << endl;
        }
        cout << "EXIT (X)" << endl;
        cin >> choice;
        switch (choice)
        {
            case '+':
                system("cls");               
                PhoneArray.push_back(Phone());                 
                break;
            case '-':
                cout << "Which one delete\n";
                for (int i = 0; i < PhoneArray.size(); i++)  cout << i+1<<" " <<PhoneArray[i].getBrand() << " " << PhoneArray[i].getModel() << " " << PhoneArray[i].getFormFactor() << " " << PhoneArray[i].getYear() << " " << PhoneArray[i].getScreenSize() << " " << PhoneArray[i].getPrice() << endl;
                cin >> choice2;
                
                PhoneArray.erase(PhoneArray.begin()+(--choice2));
                      
                break;
            case 'R':
                system("cls");
                cout << "Reports\n"
                    << "List Phones (L)\n";
                cin>>choice;
                switch (choice)
                {
                case 'L':
                    
                    for (int i =0; i< PhoneArray.size(); i++)  cout << PhoneArray[i].getBrand()<<" "<< PhoneArray[i].getModel()<<" "<< PhoneArray[i].getFormFactor() <<" "<< PhoneArray[i].getYear() <<" " << PhoneArray[i].getScreenSize()<<" "<< PhoneArray[i].getPrice() << endl;
                   
                    Sleep(1000);
                    
                    break;

                }
                break;
        }
    } while (choice != 'X');
    
       
    
    
}

