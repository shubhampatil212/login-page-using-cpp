#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string userName,Email,password;
    string searchName,searchEmail,searchPass;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;

int main(){
    int choice;
    cout<<"\n1 - Login";
    cout<<"\n2 - Sign-up";
    cout<<"\n3 - Forgot Password";
    cout<<"\n4 - Exit";
    cout<<"\nEnter your choice :: ";
    cin>>choice;

    switch(choice){
        case 1:
            cin.ignore();
            obj.login();
        break;
        case 2:
            cin.ignore();
            obj.signUP();
        break;
        case 3:
            cin.ignore();
            obj.forgot();
        break;
        case 4:
            return 0;
        break;
        default:
        cout<<"Invalid Selection...!";
    }
}

void temp :: signUP(){
    cout<<"Enter Your User Name :: ";
    getline(cin,userName);
    cout<<"Enter Your Email :: ";
    getline(cin,Email);
    cout<<"Enter Your Password :: ";
    getline(cin,password);

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}

void temp :: login(){
    cout<<"-----------Login-----------"<<endl;
    cout<<"Enter Your User Name :: "<<endl;
    getline(cin,searchName);
    cout<<"Enter Your Email :: "<<endl;
    getline(cin,searchEmail);
    cout<<"Enter Your Password :: "<<endl;
    getline(cin,searchPass);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName==searchName){
            if(password==searchPass){
                cout<<"\nAccount Login Successfull...!"<<endl;
                cout<<"\nUsername :: "<<userName;
                cout<<"\nEmail :: "<<Email<<endl;
            }else{
                cout<<"Password is incorrect...!";
            }
        }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
    file.close();
}

void temp :: forgot(){
    cout<<"\nEnter Your Username :: ";
    getline(cin,searchName);
    cout<<"Enter Your Email :: ";
    getline(cin,searchEmail);

    file.open("loginData.txt", ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');

    while(!file.eof()){
        if(userName==searchName && Email==searchEmail){
                cout<<"\nAccount Found...!"<<endl;
                cout<<"Your Password :: "<<password<<endl;
            }
            else{
                cout<<"\nAccount Not Found...!"<<endl;
            }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
    file.close();
}