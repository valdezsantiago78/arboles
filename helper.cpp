#include <unistd.h>
#include "helper.h"
#include <iostream>


using namespace std;

void PrintSucess(string msg)
{
     cout << GRN ""+msg+"" NC << endl;
} 

void PrintError(string msg)
{
     cout << RED ""+msg+"" NC << endl;
} 

void PrintWarning(string msg)
{
     cout << YEL ""+msg+"" NC << endl;
};
