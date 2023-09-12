#include<iostream>
#include<string.h>
using namespace std;

class Emp{
	private :
		int id;
		char name[100];
		char des[100];
		int salary;
		char add[100];
		
};

int main(){
	
	Emp e[100];
	int i,n;
	
	cout<<"How Manny Emp. = ";
	cin>>n;
	
	for(i=0;i<n;i++)
	  {
	  	cout<<"Enter Emp. ID = ";
	  	cin>>e[i].id;
	  	cout<<"Enter Emp. Name = ";
	  	cin>>e[i].name;
	  	cout<<"Enter Emp. Designation = ";
	  	cin>>e[i].des;
	  	cout<<"Enter Emp. Salary = ";
	  	cin>>e[i].salary;
	  	cout<<"Enter Emp. Add. = ";
	  	cin>>e[i].add;
	  	
	  	
	  }
	  for(i=0;i<n;i++)
	  {
	  	cout<<"Emp. Id = "<<s[i].id<<endl
	  	    <<"Emp. Name = "<<s[i].name<<endl
	  	    <<"Emp. Designation = "<<s[i].des<<endl
	  	    <<"Emp. Salary = "<<s[i].salary<<endl
	  	    <<"Emp. Add. = "<<s[i].add<<endl;
	  }
}
