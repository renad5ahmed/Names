#include <iostream>
using namespace std;
static int count;
class StudentName{
private:
	string name;
public:
	StudentName(string name);
	void print();
	void replace(int i, int j);
};
static char x;
static string staticName;
static int cnt;
