#include "StudentName.h"
#include <vector>
using namespace std;
StudentName::StudentName(string name)
{
	int count = 0, a = 0;
	int index=0;
	this->name = name;
	for (int i = 0; i < name.length(); i++) {//loop to count whitespaces
		x = name[i];
		if (isspace(x)) {
			count++;
			index = i;
		}
	}
	if (count==0){
		name = name +' '+ name +' '+ name;
		count += 2;
	}

	else if (count < 2) {
		string z = "";
		for (int i = index; i < name.length(); i++) {
			z+= name[i];
		}
		name += z;
		count++;
	}
	cout << name << endl;
	cnt = count;
	staticName = name;
}

void StudentName::print()
{
	bool flag = false;
	int count = 0,space=0;
	cout << "detailed parts of the name are :";
	for (int i = 0; i < staticName.length(); i++) {
		x = staticName[i];
		if (isspace(x)|| flag==true) {
			count++;
			cout <<endl<< "(" << count << ")";
			for (int j = space; j<=i; j++) {
				cout << staticName[j];
			}
			space = i+1;
		}
		if (i == staticName.length() - 2)// flag to indicate the last name
			flag = true;
	}
	cout << endl;
}

void StudentName::replace(int i, int j)
{
	vector <string> Names;
	string eachName = "";
	if (i > cnt+1 || j > cnt+1)
	{
		cout << "False" << endl<<endl;
	}
	else
	{
		for (int i = 0; i < staticName.length(); ++i)
		{
			x = staticName[i];
			if (isspace(x))
			{
				Names.push_back(eachName);
				eachName = "";
			}
			else if (i == staticName.length() - 1)//last name
			{
				eachName += staticName[i];
				Names.push_back(eachName);
			}
			else
				eachName += staticName[i];
		}
			string temp = Names[j - 1];//switching names
			Names[j - 1] = Names[i - 1];
			Names[i - 1] = temp;
			string fullName="";
			for (int i = 0; i < Names.size(); i++)
			{
				fullName += Names[i] + " ";
			}

			cout <<"True:"<<'\t'<< fullName<<endl<<endl;
		}
}


