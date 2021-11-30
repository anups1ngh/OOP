// atoi is used to convert string value to integer value

#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    int roll;
    char name[20],gender[7];
    int marks[3];

    cout<<"Enter name of the Student: ";
    cin.getline(name,20);
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<"Enter gender: ";
    cin>>gender;
    cout<<"Enter marks in three subjects\n";
    for(int i=0;i<3;i++)
    {
        cout<<"Marks "<<i+1<<": ";
        cin>>marks[i];
    }

    fstream file("student.txt",ios::out);
    file<<"Name: "<<name<<endl;
    file<<"Roll: "<<roll<<endl;
    file<<"Gender: "<<gender<<endl;
    file<<"****Marks****"<<endl;
    for(int i=0;i<3;i++)
    {
        file<<"Marks "<<i+1<<": "<<marks[i]<<endl;
    }
    file.close();
    return 0;
}