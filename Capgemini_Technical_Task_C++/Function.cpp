#include "Function.h"


Phone::Phone() 
    {
    setBrand();
     setModel();
     setFormFactor();
     setYear();
     setScreenSize();
     setPrice();
    }

void Phone::setBrand()
{
    string Brand;
    cout << "Write Brand Name\n";
    cin >> Brand;
    this->Brand = Brand;
}
void Phone::setModel()
{
    string Model;
    cout << "Write Model \n";
    cin >> Model;
    this->Model = Model;
}
void Phone::setFormFactor()
{
    string FormFactor;
    cout << "Write Form Factor \n";
    cin >> FormFactor;
    this->FormFactor = FormFactor;
}
void Phone::setYear()
{
    int Year;
    cout << "Write Year\n";
    cin >> Year;
    this->Year = Year;
}
void Phone::setScreenSize()
{
    double ScreenSize;
    cout << "Write Screen Size in inch\n";
    cin >> ScreenSize;
    this->ScreenSize = ScreenSize;
}
void Phone::setPrice()
{
    double  Price;
    cout << "Write Price\n";
    cin >> Price;
    this->Price = Price;
}
string Phone::getBrand()
{
    return this->Brand;
}
string Phone::getModel()
{
    return this->Model;
}
string Phone:: getFormFactor()
{
    return this->FormFactor;
}
int Phone::getYear()
{
    return this->Year;
}
double Phone::getScreenSize()
{
    return this->ScreenSize;
}
double Phone::getPrice()
{
    return this->Price;
}








