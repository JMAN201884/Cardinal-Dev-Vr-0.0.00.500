#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<Soft_Taco_Script.h>
#include<Dev_Reboot.h>
#include<Gaurd_Key.h>
using namespace std;

void Login();
void Dev_login();
void Register();
void Register_Dev();
void Forgot();
void Other();
void Dev();
main()
{
    int choice();
    cout<<" ************************ Login ****************************\n ";
    cout<<"1.Login";
    cout<<"\n2.Dev_login";
    cout<<"\n3.Register";
    cout<<"\n4.Register_Dev";
    cout<<"\n5.Forgot Credentials";
    cout<<"\n6.Soft_Taco_Script";
    cout<<"\nEnter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
            Login();
            break;
        case 2:
            Dev_login();
            break;
        case 3:
            Register();
            break;
        case 4:
            Register_Dev();
            break;
        case 5
            Forgot();
            break;
        case 6:
            cout<<"login sucesssfull\n";
            break;
	    Case 7:
	        cout<<"Runing Soft Taco Script";
	        cout<<"Enjoy";
        default:
            cout<<"Error choice not availiable";
            main();
    }

}
void Register()
{
    string reguser,regpass
    system("cls");
    cout<<"Enter the Username :";
    cin>>reguser;
    cout<<"Enter the Password :";
    cin>>regpass;
    
    ofstream reg("database.txt", ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"Registration is successfull\n";
    main();
}
void Register_Dev()
{
    string regdevuser,regdevpass
    system("cls");
    cout<<"Enter the Username :";
    cin>>regudevser;
    cout<<"Enter the Password :";
    cin>>regpdevass;
    
    ofstream reg("database.txt", ios::app);
    reg<<regdevuser<<' '<<regdevpass<<endl;
    system("cls");
    cout<<"Registration is successfull\n";
    main();
}
void Login()
{
    int exist;
    string user,pass,u,p;
    system("cls");
    cout<<"Enter the Username :";
    cin>>user;
    cout<<"Enter the Password :";
    cin>>pass;

    ifstream input("database.txt");

    while(input>>u>>p)
    {
        if(u == user && p == pass)
        {
            exist = 1;
        }
    }
    input.close();
    if(exist == 1)
    {
        cout<<"hello "<<user<<"\nWelcome To Cardinal Dev Build Version 0.0.00.010, Created by JY48572";
        cout<<"At this current stage Cardinal is not ready for extensive use please come back at a later version";
        cout<<"From Hed Dev JY48572"
        cin.get();
        cin.get();
        main();
    }
    else
    {
        cout<<"Error wrong login";
        cin.get();
        cin.get();
        main();
    }
    int exist;      
}

void Register_Guard_Key()
void Dev_Reboot()
void Logout()
void Drive_Scan()

void Dev_login()
{
    int exist;
    string devuser,devpass,du,dp
    system("cls");
    cout<<"Enter the Dev Username :";
    cin>>devuser;
    cout<<"Enter the Dev Password :";
    cin>>devpass;

    ifstream input("database.txt");

    while(input>>u>>p)
    {
        if(du == devuser && dp == devpass)
        {
            exist = 1;
        }
    }
    input.close();
    if(exist == 1)
    {
        cout<<"welcome "<<devuser<<"\n please enter a choice to continue.";
        int choice();
        cout<<"1.Register Guard Key";
        cout<<"\n2.Dev reboot";
        cout<<"\n3.Logout"
        cin>>choice;
        switch(choice)
        {
            case 1:
                Register_Guard_Key();
                break;
            case 2:
                Dev_reboot();
                break;
            case 3:
                Logout();
                break;
            default:
                cout<<"choice not availiable";
                main();
        }
    }
    else
    {
        cout<<"Login Denide";
        cout<<"Gaurd Key needed";
        cin.get();
        cin.get();
        main();
    }
}
void Logout()
{
    return 0
}
void Forgot()
{
    int ch;
    system("cls");
    cout<<"1.Search your account by usrename ";
    cout<<"\n2.Search your account by password";
    cout<<"\n3.mainmenu";
    cout<<"\Enter your choice :";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            int ex = 0;
            string searchuser,su,sp;
            cout<<"Enter your remembered username :";
            cin>>searchuser;

            ifstream searchu("database.txt");
            while(searchu>>su>>sp)
            {
                if(su == searchuser)
                {
                    ex = 1;
                    break;
                }
            }
            searchu.close();
            if(ex == 1)
            {
                cout<<"Succesess your account has been located\n"
                cout<<"your password is "<<sp;
                cin.get();
                cin.get();
                main();
            }
            else
            {
                cout<<"Error account not found try again \n";
                cin.get();
                cin.get();
                main();
            }
            break;
        }
        case 2:
        {
            int exi = 0;
            starting searchpass, su2,sp2;
            cout<<"Enter the remembered pasword :";
            cin>>searchpass;

            ifstream searchp("database.txt")
            while(searchp>>su2>>sp2)
            {
                if(sp2 == searchpass)
                {
                    exi = 1;
                    break;
                }
            }
            searchp.close();
            if(exi == 1)
            {
                cout<<"Success account has been loacted \n";
                cout<<"The user to located account is :"<<su2;
                cout<<"\nThe pass to located account is :"<<sp2;
                cin.get();
                cin.get();
                main();
            }
            break;
        }
        case 3;
        {
            main();
            break;
        }
        default;
        {
            cout<<"Error choice you selected doesn't exist try a different choice.";
            cin.get();
            cin.get();
            forgot();
        }
    }
}

void Other()
{

}

void Drive_Scan
{}

void Register_Guard_Key()
{
    cout<<"Error this option is currently availiable at the given moment keep and eye out for this featur";
    cout<<"in the near futur";
}