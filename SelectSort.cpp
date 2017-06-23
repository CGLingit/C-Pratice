#include <iostream>
using namespace std;

void selectionSort(double list[], int listSize)
{
	for(int i = 0; i < listSize - 1; i++)
	{
		double min = list[i];
		int minIndex = i;
		for(int j = i + 1; j < listSize; j++)
		{
			//如果list[j]比min小则交换位置
			if(min > list[j])
		    {
			  min = list[j];
			  minIndex = j;
			}
		}
		if(minIndex != i)
		{
			list[minIndex] = list[i];
			list[i] = min;
		}
	}
}

int main()
{
	double list[]={1.0,2.5,3.3,2.1,2.4,8.5,5.6,7.6};
	selectionSort(list,8);
	for(int i = 0; i <= 7; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}