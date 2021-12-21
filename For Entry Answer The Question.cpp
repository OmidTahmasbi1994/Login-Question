#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	char ans;
	
	cout<<"Your Age : Are You Under 18 ? >>>>>>>  Enter (y / n)"<<endl;
	cin>>ans;
	
	if (ans=='y' || ans=='Y')  cout<<"OK Wellcome !"<<endl;
	else cout<<"Sorry , You Have The Problem Of The Legal Age !"<<endl;
	
	getch();
}
