#include<iostream>
#include<time.h>
using namespace std;

void FillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}
void PrintArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void IncreaseArr(int*& arr, int &size)
{
	//int* arr1 = new int[*size];
	//FillArr(arr, size);
	int* arr1 = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}
	cout << "Enter value arr[size] ";
	int c = 0;
	cin >> c;
	arr1[size] = c;
	delete[]arr;
	arr = arr1;
	size++;
	PrintArr(arr, size);
}
void main()
{
	srand(time(0));
	bool exit=true;
	int item = 0; int size = 0;
	int* arr=nullptr;
	while (exit == true)
	{		
		cout << "- MENU -\n";
		cout << "1.Add arrey\n2.Increase arrey\n3.Exit\n";
		cin >> item;
		if (item == 1)
		{
			
			cout << "Enter size arrey\t";
			cin >> size;
			 arr= new int[size];
			FillArr(arr, size);
			PrintArr(arr, size);
		}
		if (item == 2)
		{
			IncreaseArr(arr, size);
		}
		if (item == 3)
		{
			exit = false;
		}
	}
	
