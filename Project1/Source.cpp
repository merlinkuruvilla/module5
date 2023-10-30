#include<iostream>
#include<String>
#include<fstream>
#include <algorithm>
using namespace std;
int main()
{
    ofstream ofile;
    ifstream ifile;
    string str = "xyz";
    ofile.open("CSC450_CT5_mod5.txt", ios_base::app);


    while (str != "quit")
    {
        cout << "\nEnter string: ('quit' to exit)";
        cin >> str;
        if (str != "quit")
        {
            ofile << "\n"+str;
        }
    }
    ofile.close();


    ifile.open("CSC450_CT5_mod5.txt");
    ofile.open("CSC450_mod5-2.txt");

    cout << "\n\nFile Data ( CSC450_CT5_mod5.txt ):\n\n";
    while (ifile >> str)
    {
        cout << str;
        ofile << "\n"+str;
    }

    ifile.close();
    ofile.close();

    ifile.open("CSC450_mod5-2.txt");
    ofile.open("CSC450-mod5-reverse.txt");

    while (ifile >> str)
    {
        reverse(str.begin(), str.end());
        ofile << "\n"+str;
    }
    ifile.close();
    ofile.close();
    ifile.open("CSC450-mod5-reverse.txt");
    cout << "\n\nFile Data After Reverse( CSC450-mod5-reverse.txt ):\n\n";
    while (ifile >> str)
    {
        cout << str;
    }
    ifile.close();
    return 0;
}