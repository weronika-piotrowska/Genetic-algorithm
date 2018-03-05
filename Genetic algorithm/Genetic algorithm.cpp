// Genetic algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Evolution.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double pm = 0.01;
	double px = 0.7;
	int pop_size = 100;
	int gen = 100;
	int tour = 5;
	int n;

	ifstream plik;
	plik.open("had20.dat");
	plik >> n;


	int**flows = new int*[n];
	for (int i = 0; i < n; i++)
	{
		flows[i] = new int[n];
	}
	int** distance = new int*[n];
	for (int i = 0; i < n; i++)
	{
		distance[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			plik >> distance[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			plik >> flows[i][j];
		}
	}
	/*Evolution e(pm, px, pop_size, gen, tour, n, flows, distance);
	int res;
	res = e.run();
	cout << res << endl;*/
	srand(time(NULL));
	

	Evolution e(pm, px, pop_size, gen, tour, n, flows, distance);
	int res = e.run();
	cout << "Najlepszy wynik: " << res << endl;
	/*Population pop(4, 4);
	pop.randomPopulation();
	int res;
	res = pop.computeGrade(flows, distance);
	cout << res << endl;*/
	system("PAUSE");
    return 0;
}

