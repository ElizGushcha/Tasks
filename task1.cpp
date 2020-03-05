#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include<time.h>

using namespace std;
void display(int[], int);
void sorting(int[], int);
void percentl( int[], int);
void mediana( int[], int);
void max( int[], int);
void min( int[], int);
void middle( int[], int);

int main()
{
    srand(time(NULL));
    const int size=1000; // 1000 элементов массива
    int ar[size];
    int i;
    for(i=0;i<size;i++)
    {	//ar[i] = 0 + rand()%10; 	// рандомные значения от 0 до 9
        ar[i] = (-9) + rand()%19;	// рандомные значения от -9 до 9
    }
    display(ar, size);
    percentl(ar, size);
    mediana(ar, size);
    max(ar, size);
    min(ar, size);
    middle(ar, size);
   system("pause");
   return 0;
}

void display( int array[], int arraySize)
{
    for(int i = 0; i<arraySize; i++)
    {
        if(i%100 == 0) cout<<endl; // 100 значений на каждой строчке массива
        cout<<array[i];
    }
    cout<<endl;
}

void sorting(int array[], int arraySize)
{
    int temp;
    for(int i=1; i< arraySize; i++)
        for(int j = 0; j< arraySize - 1; j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
}

void percentl(int array[], int arraySize)
{
	double percentl;
	short int i;
	sorting(array, arraySize); //отсортированный массив
	for(i=0; i<=arraySize; i++)
	{
		percentl=0;
	}
	 percentl=((arraySize-1)*100)/90;
	 cout<<"percentile: "<<int(percentl*100 + 0.5)/100.0;

	 cout<<endl;
}

void mediana(int array[], int arraySize)
{
    double mediana;
    cout<<"mediana: ";
    mediana = arraySize%2;
    cout<<(mediana ? array[arraySize/2]: (array[arraySize/2 - 1] + array[arraySize/2])/2);
    cout<<int(mediana*100 + 0.5)/100.0<<endl;
}

void max(int array[], int arraySize)
{
	int i;
	double max;
	max=array[0];
	for (i=1; i<10; i++)
	    {if (array[i]>max)
	      {
	        max=array[i];
	      }
	    }
	cout<<"max: "<<int(max*100 + 0.5)/100.0<<endl;
}


void min(int array[], int arraySize)
{
	int i;
	double min;
	min=array[0];
	for (i=1; i<10; i++)
	    {if (min>=array[i])
	      {
	    	min=array[i];
	      }
	    }
	cout<<"min: "<<int(min*100 + 0.5)/100.0<<endl;
}

void middle( int array[], int arraySize)
{
	double total = 0;  // итог
    for(int i = 0; i<arraySize; i++)
        total += array[i];

    cout<<"middle: "<< int((total/arraySize)*100 + 0.5)/100.0<<endl;
}
