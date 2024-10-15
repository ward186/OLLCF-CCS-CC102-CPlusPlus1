#include <iostream>

using namespace std;

int main (){
	double SugarPriceUSD, ricePricepound, SardinesPricePound, CoffePriceUSD, MilkPriceUSD;
	double SugarQty, RiceQty, SardinesQty, CoffeeQty, MilkQty,
	double UsdToPhp = 59.0;
	double PoundToPhp = 72.0;
	
	Cout << "Enter the Price of the sugar (USD): ";
	cin >> SugarPriceUSD;
	cout << "Enter the Price of rice (pound):";
	cin >> ricePricepound;
	cout << "Enter the Price of Sardines (pound):";
	cin >> SardinesPricePound;
	cout << "Enter the Price of Coffee (USD):";
	cin >> CoffePriceUSD;
	cout << "Enter the Price of Milk (USD) :";
	cin >> MilkPriceUSD;

	cout << "Enter Quantity of Sugar:";
	cin >> SugarQty;
	cout << "Enter Quantity of rice:";
	cin >> RiceQty;
	cout << "Enter Quantity of Sardines;";
	cin >> SardinesQty;
	cout << "Enter Quantity of Coffee:";
	cin >> CoffeeQty;
	cout << "Enter Quantity of milk:";
	cin >> MilkQty;
	
	double SugarPricePHP = SugarPriceUSD * usdtoPhp
	double ricePricePHP = ricePricePound * poundtoPhp
	double SardinesPricePHP = SardinesPriceUSD * poundtoPhp
	double CoffePricePHP = CoffePriceUSD * usdtoPhp
	double MilkPricePHP = MilkPriceUSD * usdtoPhp
	
	double totalSugarCostPhp = SugarPricePHP * SugarQty
	double totalRiceCostPhp = ricePricePHP * RiceQty
	double totalSardinesCostPhp = SardinesPricePHP * SardinesQty
	double totalCoffeeCostPhp = CoffePricePHP * CoffeeQty
	double totalMilkCostPhp = MilkPricePHP * MilkQty
	
	double totalCostPhp = totalSugarCostPhp + ricePricePHP + SardinesPricePHP + CoffePricePHP + MilkPricePHP;
	
	cout << "Purchase Details:\n";
	cout << "------------------------------\n";
	cout << "Sugar: << SugarQty << " X " << 
	return 0
}