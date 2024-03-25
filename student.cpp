// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct student {
	string surname, name; double mark;

};
int main()
{
	setlocale(LC_ALL, "ru");


	vector<student> A;
	student T;
	ifstream fin; string str1,str2;
	fin.open("T.txt"); int i = 0; int num;
	while (!fin.eof()) {
		fin >> str1>>str2>>num;
		
		//cout << str1<<" " << str2 <<" " << num << endl;

		T.surname = str1; 
		T.name = str2;
		T.mark = num;
		A.push_back(T);
		A[i] = T;
	++i;
		//getline(fin, str1)
	}
	bool flag=true;
	for (int i = 1; i < A.size(); ++i)
	{
		if (A[i - 1].mark < A[i].mark) {}
		else flag = false;
	}


	cout << endl;
	(!flag) ? cout << "Error"  : cout << "Good";
	cout << endl;
	for (int i = 0; i < A.size(); ++i)
	{
		cout << " ---  " << A[i].surname << endl;

	}
sort(A.begin(), A.end(), [](const student& lh, const student& rh) {return lh.surname < rh.surname;});
for (int i = 0; i < A.size(); ++i)
{
	cout<<" ---  " << A[i].surname << endl;

}


cout << " ---  " << endl;
cout << " ---  " << endl;
cout << " ---  " << endl;
for (auto i : A) {
	cout << i.surname;
}







	int p = 1;
	auto f = [&]()
	{
		p = 2; return p;
	};
	auto q = f(); cout << q;
}
