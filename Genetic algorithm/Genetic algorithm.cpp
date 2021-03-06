// Genetic algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Evolution.h"
#include "Random.h"
#include "Zachlanny.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double pm = 0.5;
	double px = 0.7;
	int pop_size = 100;
	int gen = 100;
	int tour = 5;

	srand(time(NULL));
	//12
	/*Evolution e1(pm, px, pop_size, gen, tour, "had12.dat");
	e1.run("");*/
	/*
	pm = 0;
	Evolution e2(pm, px, pop_size, gen, tour, "had12.dat");
	e2.run("pm=0");

	pm = 1;
	Evolution e3(pm, px, pop_size, gen, tour, "had12.dat");
	e3.run("pm=1");

	pm = 0.5;
	px = 0;
	Evolution e4(pm, px, pop_size, gen, tour, "had12.dat");
	e4.run("px=0");*/

	/*px = 1;
	Evolution e5(pm, px, pop_size, gen, tour, "had12.dat");
	e5.run("px=1");

	px = 0.7;
	tour = 1;
	Evolution e6(pm, px, pop_size, gen, tour, "had12.dat");
	e6.run("tour=1");

	tour = pop_size;
	Evolution e7(pm, px, pop_size, gen, tour, "had12.dat");
	e7.run("tour=pop_size");*/

	//tour = 5;
	/*pop_size = 30;
	Evolution e8(pm, px, pop_size, gen, tour, "had12.dat");
	e8.run("pop_size=25");*/

	/*pop_size = 500;
	Evolution e9(pm, px, pop_size, gen, tour, "had12.dat");
	e9.run("tour=pop_size");
	pop_size = 100;*/

	//Evolution e10(pm, px, pop_size, gen, tour, "had14.dat");
	//e10.run("");

	//pm = 0;
	//Evolution e11(pm, px, pop_size, gen, tour, "had14.dat");
	//e11.run("pm=0");

	//pm = 1;
	//Evolution e12(pm, px, pop_size, gen, tour, "had14.dat");
	//e12.run("pmp=1");

	//pm = 0.5;
	//px = 0;
	//Evolution e13(pm, px, pop_size, gen, tour, "had14.dat");
	//e13.run("px=0");

	//px = 1;
	//Evolution e14(pm, px, pop_size, gen, tour, "had14.dat");
	//e14.run("px=1");

	Random r(100, "had12.dat");
	r.run();

	Zachlanny z("had12.dat");
	z.run();



	system("PAUSE");
    return 0;
}

