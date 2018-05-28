//main.cpp
//

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int[][] dfaArray = 	{1, 3, 3, 4, 0, 0, 0}, 
			{1, 0, 0, 2, 6, 6, 0},
			{2, 0, 0, 0, 6, 6, 0},
			{1, 0, 0, 4, 0, 0, 0},
			{5, 0, 0, 0, 0, 0, 0},
			{5, 0, 0, 0, 6, 6, 0},
			{8, 7, 7, 0, 0, 0, 0},
			{8, 0, 0, 0, 0, 0, 0},
			{8, 0, 0, 0, 0, 0, 0};

int main()
{

}

bool readFile()
{
}


//returns an int that determines the next state to transition to
//A return of 0 indicates a fail state
int dfaArray(char terminal, int lastVar)
{
	switch terminal
	{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			return dfaArray[lastVar][0];
			break;
		case '+':
		case '-':
			return dfaArray[lastVar][1];
			break;
		case '.':
			return dfaArray[lastVar][3];
			break;
		case 'e':
		case 'E':
			return dfaArray[lastVar][4];
		default:
			return 0;
	}
}

