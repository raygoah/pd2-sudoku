#include<iostream>
#include<cstdlib>
#include<fstream>
#include<stdlib.h>
#include<ctime>
#include<math.h>
#include"Sudoku.h"
using namespace std;
int main()
{
Sudoku ss;
ss.ReadIn();
ss.Solve();
return 0;
}
