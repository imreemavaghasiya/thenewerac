#include<iostream>
#include<string>
using namespace std;

class Second{
	
	public :
		
		int ss;
		int mm;
		int hh;
};
int main()
{
	Second s,total;
	cout<<"Enter Second = "; 
	cin>>s.ss;
	
	cout<<"Time in HH:MM:SS format : "<<endl;
	s.hh = s.ss / 3600;
	s.mm = (s.ss % 3600 ) / 60;
	s.ss = (s.ss % 3600 ) % 60;
	cout<<s.hh<<":"<<s.mm<<":"<<s.ss<<endl;
	return 0;
}
