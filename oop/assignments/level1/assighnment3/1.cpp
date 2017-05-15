#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
	ofstream fout("NOTES.TXT");
	for (int i = 1; i <= 100; ++i)
	{
		fout<<i<<"\n";
	}
	fout.close();
	return 0;
}
