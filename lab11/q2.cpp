#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    char c;
    fstream file("q6.txt",ios::in);
    // in below operation if file doesn't exist it will create and operate the operation
    // and in ofstream it will clear whole thing and start writing from beginning
    // we need to use fstream with ios::in and ios::out together then it will not clear the content of the file
    ofstream fout("q2.txt");
    if(!file)
    {
        cout<<"File not found\n";
        exit(0);
    }
    while(file.eof() ==0)
    {
        file.get(c);
        fout.put(c);
    }
    file.close();
    fout.close();
    cout<<"Operation Completed\n";
    return 0;
}