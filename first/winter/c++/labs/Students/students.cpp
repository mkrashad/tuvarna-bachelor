#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define N 30

FILE *fp;

int menu();
int save();
int load();
int enter();
int search();
int listing();
int display(int n);
struct student
{
	int fn;
	char name[20];
	float av_mark;
} G[N];			 // group of stdents
int top = 0; //current size of group
int main()
{
	int choice;
	load();
	do
	{
		choice = menu();
		switch (choice)
		{
		case 1:
			enter();
			save();
			break;
		case 2:
			search();
			break;
		case 3:
			listing();
			break;
		}
	} while (choice != 4);
}

int menu()
{
	int ch;
	cout << "\nMenu: ";
	cout << "\n1. Input new students";
	cout << "\n2. Search student by F-number";
	cout << "\n3. List of the group";
	cout << "\n4. Exit";
	do
	{
		cout << "\n\nYour choice: ";
		cin >> ch;
	} while (ch < 1 || ch > 4);
	return ch;
}
int enter()
{
	int cnt, i, rest = N - top;
	if (rest > 0)
	{
		cout << "\nFree slots: " << rest;
		do
		{
			cout << "\n How much students? - ";
			cin >> cnt;
		} while (cnt < 0 || cnt > rest);

		for (i = top; i < top + cnt; i++)
		{
			cout << "\n Name: ";
			cin >> G[i].name;
			cout << "\n Faculty Number: ";
			cin >> G[i].fn;
			cout << "\n Average Mark: ";
			cin >> G[i].av_mark;
		}
		top = i;
	}
	else
		cout << "\n No free slots";
}

int load()
{
	if ((fp = fopen("my.dat", "rb")) == NULL)
		return 0;
	if (fread(&top, sizeof top, 1, fp) != 1)
	{
		cout << "\n Error 1";
		exit(1);
	}
	if (fread(G, sizeof G, 1, fp) != 1)
	{
		cout << "\n Error 2";
		exit(1);
	}
	fclose(fp);
}

int save()
{
	if ((fp = fopen("my.dat", "wb")) == NULL)
	{
		cout << "\n Error wr";
		exit(1);
	}
	if (fwrite(&top, sizeof top, 1, fp) != 1)
	{
		cout << "\n Error 1";
		exit(1);
	}
	if (fwrite(G, sizeof G, 1, fp) != 1)
	{
		cout << "\n Error 2";
		exit(1);
	}
	fclose(fp);
}

int listing()
{
	int i;
	cout << "\nList of student\n";
	for (i = 0; i < top; i++)
	{
		display(i);
		cout << endl;
	}
}

int display(int n)
{
	cout << endl
			 << n + 1
			 << ". Name: " << G[n].name
			 << ", Faculty Number: " << G[n].fn
			 << ", Average Mark: "
			 << G[n].av_mark << endl;
}

int search()
{
	int found = 0, i, fnum;
	cout << "\n F-number: ";
	cin >> fnum;
	for (i = 0; i < top; i++)
		if (fnum == G[i].fn)
		{
			display(i);
			found = 1;
		}
	if (!found)
		cout << "\n No such student" << endl;
}
