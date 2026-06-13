#include <iostream>
using namespace std;
int main()
{

 /* char c = '0';
cout<<(int)c;   //returns ASCII code           variable_name=identifier

*/

{
    char x;
    cout << "Enter a character: ";
    cin >> x;

    if (x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='=')
    {
        cout << "The given input is an operator" << endl;
    }
    else
    {
        cout << "The given input is not an operator" << endl;
    }



    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    if ( line[0]=='/' && line[1]=='/')
    {
        cout << "Single line comment";
    }
    else if (line[0]=='/' && line[1]=='*')
    {
        cout << "Multi line comment";
    }
    else
    {
        cout << "Not a comment";
    }

    return 0;
}}
