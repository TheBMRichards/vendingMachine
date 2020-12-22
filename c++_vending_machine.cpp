// vending_machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double menu(string& item, double& cost, double& coke_count, double& doritos_count, double& snickers_count, double& chex_mix_count, double& pepsi_count)
{
	double Coke = .95, Doritos = .75, Snickers = .55, Chex_Mix = .60, Pepsi = .90;
	if (item == "Coke" || item == "coke")
	{
		cost = Coke;
		coke_count = coke_count + 1;
	}
	else if (item == "Doritos" || item == "doritos")
	{
		cost = Doritos;
		doritos_count = doritos_count + 1;
	}
	else if (item == "Snickers" || item == "snickers")
	{
		cost = Snickers;
		snickers_count = snickers_count + 1;
	}
	else if (item == "Chex_Mix" || item == "chex_mix")
	{
		cost = Chex_Mix;
		chex_mix_count = chex_mix_count + 1;
	}
	else if (item == "Pepsi" || item == "pepsi")
	{
		cost = Pepsi;
		pepsi_count = pepsi_count + 1;
	}
	else if (item == "Done" || item == "done")
	{
		cost = 0;
	}
	else
	{
		cout << "Not a valid choice" << endl;
		cost = 0;
	}
	return item, cost, coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count;

}
string power_switch(string& p_switch)
{
	// Turn machine on if it is off
	p_switch = "On";
	cout << "The vending machine is now on" << endl;
	return p_switch;

}
string check_machine()
{
	string power;
	// Check if the power is on
	cout << "Is the machine on" << endl;
	cin >> power;
	if (power == "On" || power == "on")
		cout << "The vending machine power is on" << endl;
	else if (power == "Off" || power == "off")
	{
		cout << "The vending machine power is off" << endl;
		power_switch(power);
	}
	return power;
}
double refill_snacks(string& item, double& Coke, double& Doritos, double& Snickers, double& Chex_Mix, double& Pepsi)
{
	if (item == "Coke")
	{
		if (Coke < 5)
		{
			// refill the Cokes
			Coke = 30;
		}
	}
	if (item == "Doritos")
	{
		if (Doritos < 5)
		{
			// refill the Doritos
			Doritos = 30;
		}
	}
	if (item == "Snickers")
	{
		if (Snickers < 5)
		{
			// refill the Snickers
			Snickers = 30;
		}
	}
	if (item == "Chex_Mix")
	{
		if (Chex_Mix < 5)
		{
			// refill the Chex Mix
			Chex_Mix = 30;
		}
	}
	if (item == "Pepsi")
	{
		if (Pepsi < 5)
		{
			// refill the Pepsi
			Pepsi = 30;
		}
	}
	return item, Coke, Doritos, Snickers, Chex_Mix, Pepsi;

}
double remove_snacks(string& item, double& Coke, double& Doritos, double& Snickers, double& Chex_Mix, double& Pepsi)
{
	if (item == "Coke")
	{
		if (Coke <= 30)
		{
			// remove a Coke
			Coke--;
		}
	}
	if (item == "Doritos")
	{
		if (Doritos <= 30)
		{
			// remove a Dorito
			Doritos--;
		}
	}
	if (item == "Snickers")
	{
		if (Snickers <= 30)
		{
			// remove a Snicker
			Snickers--;
		}
	}
	if (item == "Chex_Mix")
	{
		if (Chex_Mix <= 30)
		{
			// remove a Chex Mix
			Chex_Mix--;
		}
	}
	if (item == "Pepsi")
	{
		if (Pepsi <= 30)
		{
			// remove a Pepsi
			Pepsi--;
		}
	}
	return item, Coke, Doritos, Snickers, Chex_Mix, Pepsi;

}
double refil_coins(double& quarters, double& dimes, double& nickles, double& dollars, double& f_dollars, double& quarter_container1, double& quarter_container2, double& quarter_container3, double& dime_container1, double& dime_container2, double& dime_container3, double& nickle_container1, double& nickle_container2, double& nickle_container3, double& dollar_container, double& f_dollar_container, double& change)
{
	if (quarter_container1 < 20)
	{
		//switch to quarters container 2
		if (quarter_container2 < 20)
		{
			//switch to quarters container 3
			if (quarter_container3 < 20)
			{
				//refill all quarter containers
				quarter_container1 = 20;
				quarter_container2 = 20;
				quarter_container3 = 20;
			}
		}
	}
	//checks if container 1 is full
	if (quarter_container1 < 100)
	{
		quarter_container1 += quarters;
	}
	//checks if container 2 is full
	else if (quarter_container2 < 100)
	{
		quarter_container2 += quarters;
	}
	//checks if container 3 is full
	else if (quarter_container3 < 100)
	{
		//puts change into container 3
		quarter_container3 += quarters;
	}
	if (dime_container1 < 20)
	{
		//switch to dime container 2
		if (dime_container2 < 20)
		{
			//switch to dime container 3
			if (dime_container3 < 20)
			{
				//refill all dime containers
				dime_container1 = 20;
				dime_container2 = 20;
				dime_container3 = 20;
			}
		}
	}
	//checks if container 1 is full
	if (dime_container1 < 100)
	{
		dime_container1 += quarters;
	}
	//checks if container 2 is full
	else if (dime_container2 < 100)
	{
		dime_container2 += quarters;
	}
	//checks if container 3 is full
	else if (dime_container3 < 100)
	{
		//puts change into container 3
		dime_container3 += quarters;
	}
	if (nickle_container1 < 20)
	{
		//switch to nickle container 2
		if (nickle_container2 < 20)
		{
			//switch to nickle container 3
			if (nickle_container3 < 20)
			{
				//refill all nickle containers
				nickle_container1 = 20;
				nickle_container2 = 20;
				nickle_container3 = 20;
			}
		}
	}
	//checks if container 1 is full
	if (nickle_container1 < 100)
	{
		nickle_container1 += quarters;
	}
	//checks if container 2 is full
	else if (nickle_container2 < 100)
	{
		nickle_container2 += quarters;
	}
	//checks if container 3 is full
	else if (nickle_container3 < 100)
	{
		//puts change into container 3
		nickle_container3 += quarters;
	}
	return quarters, dimes, nickles, dollars, f_dollars, quarter_container1, quarter_container2, quarter_container3, dime_container1, dime_container2, dime_container3, nickle_container1, nickle_container2, nickle_container3, dollar_container, f_dollar_container, change;
}
double remove_coins(double& quarters, double& dimes, double& nickles, double& dollars, double& f_dollars, double& quarter_container1, double& quarter_container2, double& quarter_container3, double& dime_container1, double& dime_container2, double& dime_container3, double& nickle_container1, double& nickle_container2, double& nickle_container3, double& dollar_container, double& f_dollar_container, double& change)
{
	if (quarter_container1 > 100)
	{
		//Remove quarters from Container 1
		quarter_container1 = 20;
	}
	if (quarter_container2 > 100)
	{
		//remove quarters from Container 2
		quarter_container2 = 20;
	}
	if (quarter_container3 > 100)
	{
		//remove quarters from Container 3
		quarter_container3 = 20;
	}
	if (dime_container1 > 100)
	{
		//Remove quarters from Container 1
		dime_container1 = 20;
	}
	if (dime_container2 > 100)
	{
		//remove quarters from Container 2
		dime_container2 = 20;
	}
	if (dime_container3 > 100)
	{
		//remove quarters from Container 3
		dime_container3 = 20;
	}
	if (nickle_container1 > 100)
	{
		//Remove quarters from Container 1
		nickle_container1 = 20;
	}
	if (nickle_container2 > 100)
	{
		//remove quarters from Container 2
		nickle_container2 = 20;
	}
	if (nickle_container3 > 100)
	{
		//remove quarters from Container 3
		nickle_container3 = 20;
	}
	if (dollar_container >= 100)
	{
		dollar_container = 20;
	}
	if (f_dollar_container >= 60)
	{
		f_dollar_container = 20;
	}
	return quarters, dimes, nickles, dollars, f_dollars, quarter_container1, quarter_container2, quarter_container3, dime_container1, dime_container2, dime_container3, nickle_container1, nickle_container2, nickle_container3, dollar_container, f_dollar_container, change;
}
double more_or_less(double& payment, double& item_price, double& change, bool& enough_currency)
{
	if (payment < item_price)
	{
		cout << "Additional payment needed" << endl;
	}
	else if (payment >= item_price)
	{
		change = payment - item_price;
		enough_currency = true;
		cout << "$" << change << " is your change" << endl;
	}
	return payment, item_price, change, enough_currency;


}
bool valid_coin(string& valid_c, bool& currency)
{
	// Validates payment by checking for US symbol for currency
	if (valid_c == "$")
		currency = true;
	else
	{
		cout << "Incorrect payment method. Please insert correct funds" << endl;
		currency = false;
	}
	return currency;

}
double coins(double& payment, double& item_price, double& total_dollars, double& total_f_dollars, double& total_quarters, double& total_dimes, double& total_nickles, double& change)
{
	double dollar = 1, f_dollars = 5;
	float quarters = .25, dimes = .10, nickles = .05;
	double quarter_container1 = 20, quarter_container2 = 20, quarter_container3 = 20, dime_container1 = 20, dime_container2 = 20, dime_container3 = 20, nickle_container1 = 20, nickle_container2 = 20, nickle_container3 = 20, dollar_container = 20, f_dollar_container = 20;
	double sales_per_day = 0, add_quarter = 0, remove_quarter = 0, add_dime = 0, remove_dime = 0, add_nickle = 0, remove_nickle = 0;
	bool valid_currency = false;
	bool enough_currency = false;
	string payment_choice;
	//accept coins
	while (valid_currency == false && enough_currency == false)
	{
		while (valid_currency == false) {
			cout << "Enter your US currency payment" << endl;
			cin >> payment_choice;
			if (payment_choice == "$")
				valid_currency = true;
			else
			{
				cout << "Incorrect payment method. Please insert correct funds" << endl;
			}
		}
		//Enter your payment
		cout << "How many dollar bills" << endl;
		cin >> total_dollars;
		cout << "How many five dollar bills" << endl;
		cin >> total_f_dollars;
		cout << "How many quarters" << endl;
		cin >> total_quarters;
		cout << "How many dimes" << endl;
		cin >> total_dimes;
		cout << "How many nickles" << endl;
		cin >> total_nickles;
		payment = payment + (total_f_dollars * f_dollars) + (total_dollars * dollar) + (total_quarters * quarters) + (total_dimes * dimes) + (total_nickles * nickles);
		more_or_less(payment, item_price, change, enough_currency);
	}

	add_quarter = item_price / quarters;
	add_dime = (item_price - (add_quarter * quarters)) / dimes;
	add_nickle = (item_price - (add_dime * quarters)) / nickles;
	remove_quarter = change / quarters;
	remove_dime = (change - (add_quarter * quarters)) / dimes;
	remove_nickle = (change - (add_dime * quarters)) / nickles;
	refil_coins(add_quarter, add_dime, add_nickle, total_dollars, total_f_dollars, quarter_container1, quarter_container2, quarter_container3, dime_container1, dime_container2, dime_container3, nickle_container1, nickle_container2, nickle_container3, dollar_container, f_dollar_container, change);
	remove_coins(add_quarter, add_dime, add_nickle, total_dollars, total_f_dollars, quarter_container1, quarter_container2, quarter_container3, dime_container1, dime_container2, dime_container3, nickle_container1, nickle_container2, nickle_container3, dollar_container, f_dollar_container, change);
	return payment, item_price, total_dollars, total_f_dollars, total_quarters, total_dimes, total_nickles, change;
}
string item_select(string& item)
{
	//Choose an item "Coke, Doritos, Snickers, Chex Mix, Pepsi"
	cout << "Select a item from vending machine: Coke = .95, Doritos = .75, Snickers = .55, Chex_Mix = .60, Pepsi = .90" << endl;
	cout << "If done shopping select done" << endl;
	cin >> item;
	return item;
}
double Sales_of_all_items(double& sales_total, double& coke_count, double& doritos_count, double& snickers_count, double& chex_mix_count, double& pepsi_count)
{
	// Sales_per_day(coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count);
	sales_total = coke_count + doritos_count + snickers_count + chex_mix_count + pepsi_count;
	double Coke2, Doritos2, Snickers2, Chex_Mix2, Pepsi2;
	Coke2 = coke_count * .95;
	Doritos2 = doritos_count * .75;
	Snickers2 = snickers_count * .55;
	Chex_Mix2 = chex_mix_count * .60;
	Pepsi2 = pepsi_count * .90;
	sales_total = Coke2 + Doritos2 + Snickers2 + Chex_Mix2 + Pepsi2;
	return sales_total;

}
double Total_cost_of_all_items(double& cost, double& coke_count, double& doritos_count, double& snickers_count, double& chex_mix_count, double& pepsi_count)
{
	// Sales_per_day(coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count);
	double Coke2, Doritos2, Snickers2, Chex_Mix2, Pepsi2;
	Coke2 = (coke_count * .95) * .35;
	Doritos2 = (doritos_count * .75) * .35;
	Snickers2 = (snickers_count * .55) * .35;
	Chex_Mix2 = (chex_mix_count * .60) * .35;
	Pepsi2 = (pepsi_count * .90) * .35;
	cost = Coke2 + Doritos2 + Snickers2 + Chex_Mix2 + Pepsi2;
	return cost;

}
double Labor_cost(double& cost, double& labor_c)
{
	labor_c = cost * .25;
	return cost, labor_c;
}
double overhead_cost(double& cost, double& over_head)
{
	over_head = cost * .05;
	return cost, over_head;
}
double total_profit(double& sales_total, double& cost_total, double& labor, double& overhead, double& profit)
{
	profit = sales_total - (labor + overhead + cost_total);
	return sales_total, labor, overhead, profit;
}
void display(double& coke_count, double& doritos_count, double& snickers_count, double& chex_mix_count, double& pepsi_count, int& sales_per_day)
{
	double sales_total = 0, cost_total = 0, labor = 0, overhead = 0, profit = 0;
	Sales_of_all_items(sales_total, coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count);
	Total_cost_of_all_items(cost_total, coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count);
	Labor_cost(cost_total, labor);
	overhead_cost(cost_total, overhead);
	total_profit(sales_total, cost_total, labor, overhead, profit);

	cout << "Items sold today" << sales_per_day << endl;
	cout << "Total sales of all items" << sales_total << endl;
	cout << "Total cost of items " << cost_total << endl;
	cout << "Total cost of labor " << labor << endl;
	cout << "Total cost of overhead " << overhead << endl;
	cout << "Total profits " << profit << endl;
}
int main()
{
	double total_item_price = 0, item_price = 0, Coke = 30, Doritos = 30, Snickers = 30, Chex_Mix = 30, Pepsi = 30;
	double total_quarters = 0, total_dimes = 0, total_nickles = 0, total_dollars = 0, total_f_dollars = 0;
	double quarter_container1 = 20, quarter_container2 = 20, quarter_container3 = 20, dime_container1 = 20, dime_container2 = 20, dime_container3 = 20, nickle_container1 = 20, nickle_container2 = 20, nickle_container3 = 20, dollar_container = 20, f_dollar_container = 20;
	int sales_per_day = 0, add_quarter = 0, remove_quarter = 0, add_dime = 0, remove_dime = 0, add_nickle = 0, remove_nickle = 0;
	double coke_count = 0, doritos_count = 0, snickers_count = 0, chex_mix_count = 0, pepsi_count = 0;
	double payment = 0, change = 0;
	int customers = rand() % 11;
	for (int hours_of_opration = 1; hours_of_opration <= 6; hours_of_opration++) {
		for (int customer = 0; customer <= customers; customer++) {
			string item = "null";
			check_machine();
			while (item != "Done")
			{
				item_select(item);
				menu(item, item_price, coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count);
				total_item_price = total_item_price + item_price;
			}
			coins(payment, total_item_price, total_dollars, total_f_dollars, total_quarters, total_dimes, total_nickles, change);
			refill_snacks(item, Coke, Doritos, Snickers, Chex_Mix, Pepsi);
			remove_snacks(item, Coke, Doritos, Snickers, Chex_Mix, Pepsi);
		}
		int sales_hour = coke_count + doritos_count + snickers_count + chex_mix_count + pepsi_count;
		cout << "Sales made in past hour: " << sales_hour << endl;
		sales_per_day = sales_per_day + sales_hour;
	}

	display(coke_count, doritos_count, snickers_count, chex_mix_count, pepsi_count, sales_per_day);

}
