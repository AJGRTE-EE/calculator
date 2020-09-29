

#include<iostream>
#include"prototypes.h"// файлы ниже выполняют тоже самое 
//#include"sum.h"
//#include"diff.h"
using namespace std;

int main()
{
	int x;
	int y;
	cout << "\nEnter x->";
	cin >> x;
		cout << "\nEnter y->";
		cin >> y;


		
		int rez;

		char _operator;
		cout << "\n(-,+)Enter operator->";
		cin >> _operator;

		switch (_operator)
		{
		case'+':
			rez = sum(x, y);
			break;
		case'-':
			rez = diff(x, y);
			break;
		default:
			cout << "Error!";
			break;
		}
		
		

		cout <<endl<< x << " "<<_operator<<" " << y<<" = "<<rez;
			
   return 0;
}


