#pragma once
#ifndef Function_h
#define Function_h
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Windows.h>
using namespace std;


class Phone
{
	private:
		string Brand, Model,FormFactor;
		int Year;
		double ScreenSize, Price;
	public:
		Phone();
		void setBrand();
		void setModel();
		void setFormFactor();
		void setYear();
		void setScreenSize();
		void setPrice();


		string getBrand();
		string getModel();
		string getFormFactor();
		int getYear();
		double getScreenSize();
		double getPrice();
		

};


#endif