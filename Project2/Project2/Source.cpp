#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <conio.h>

using namespace std;

int main()
{
	vector<int> v;
	string line, field;
	ifstream fs("Example.txt", ios::in);
	vector<vector<int>> data;

	if (fs.fail())
		cout << "El fichero no existe" << endl;
	else {
		while (getline(fs, line))
		{
			stringstream ss(line);
			while (getline(ss, field, ','))
			{
				int num = stoi(field);
				v.push_back(num);
			}
			data.push_back(v);

		}
		v.clear();
		cout << "Cargado correctamente" << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << data[i][j] << " ";
		}
		
	}

	_getch();
	return 0;
}