#include <iostream>
#include <string>
#include <vector>

struct Car
{
	Car(const std::string& carModel,
		const std::vector<std::string>& models,
		const std::string& color,
		const int& Doors,
		const int& Kilometers,
		const int& Price,
		const int availableItems) : strMark(carModel),
		AllModels(models),
		strcolor(color),
		nDoors(Doors),
		nKilometers(Kilometers),
		nPrice(Price),
		nAvailableItems(availableItems)

	{
	}
	std::string strMark;
	std::vector<std::string> AllModels;
	std::string strcolor;
	int nDoors;
	int nKilometers;
	int nPrice;
	int nAvailableItems;
	~Car() = default;
};

int main()
{
	std::vector<std::string> AllModels;
	AllModels.push_back("BMW");
	AllModels.push_back("Audi");
	AllModels.push_back("Mercedes");
	AllModels.push_back("Opel");
	AllModels.push_back("Volkswagen");
	AllModels.push_back("Ford");
	AllModels.push_back("Honda");


	Car car1("BMW", AllModels, "Black", 4, 30000, 2500, 1);
	Car car2("Audi", AllModels, "Blue", 2, 110000, 6000, 1);
	Car car3("Mercedes", AllModels, "Red", 2, 20000, 11500, 1);
	Car car4("Opel", AllModels, "Black", 4, 80000, 2000, 1);
	Car car5("Volkswagen", AllModels, "Black", 4, 700000, 1500, 1);
	Car car6("Ford", AllModels, "Green", 2, 90000, 4230, 1);
	Car car7("Honda", AllModels, "White", 2, 66666, 7500, 1);


	std::vector <Car> AllCars;
	AllCars.push_back(car1);
	AllCars.push_back(car2);
	AllCars.push_back(car3);
	AllCars.push_back(car4);
	AllCars.push_back(car5);
	AllCars.push_back(car6);
	AllCars.push_back(car7);

	std::cout << "Set number of doors: 4 \n \n";
	for (int i = 1; i < AllCars.size(); i++)
	{
		if (AllCars[i].nDoors == 4)//ћоже да се смени условето за избор на брой врати.
		{
			std::cout << "Car Mark: " << AllCars[i].strMark << std::endl;
			std::cout << "Car color: " << AllCars[i].strcolor << std::endl;
			std::cout << "Car Doors: " << AllCars[i].nDoors << std::endl;
			std::cout << "Kilometers: " << AllCars[i].nKilometers << std::endl;
			std::cout << "----Price: " << AllCars[i].nPrice << "$ ----" << std::endl;
			std::cout << std::endl;
		}
	}
	std::cout << "The most expensive car with mileage below 100, 000 km. \n";
	for (int i = 1; i < AllCars.size(); i++)
	{
		if (AllCars[i].nKilometers < 100000 && AllCars[0].nPrice < AllCars[i].nPrice)//ћоже да се смени условето за избор на пробег и цена.

		{
			AllCars[0].nPrice = AllCars[i].nPrice;
			std::cout << "Car Mark: " << AllCars[i].strMark << std::endl;
			std::cout << "Car color: " << AllCars[i].strcolor << std::endl;
			std::cout << "Car Doors: " << AllCars[i].nDoors << std::endl;
			std::cout << "Kilometers: " << AllCars[i].nKilometers << std::endl;
			std::cout << "----Price: " << AllCars[i].nPrice << "$ ----" << std::endl;
			std::cout << std::endl;

		}
	}
}