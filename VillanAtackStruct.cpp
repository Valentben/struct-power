#include <iostream>
#include <conio.h>

/********************************************
	kind	category *** power	defense 
	
	fire	boss     *** 62		66
	fire	troll 	 *** 33		35
	fire	mage	 *** 55		20
	fire	elf		 *** 29		24
	fire 	human	 *** 31		30
	ice		boss	 *** 67		61
	ice		troll	 *** 35		29
	ice 	mage	 *** 36 	30
	ice		elf 	 *** 
	
	*/
struct power{
	
	int defense;
	int power;
};

struct villan{
	char name[15];
	char kindPower[30];//fire, ice
	char category[40];//boss, troll, mage, elf or human
	struct power dir_villan;
	
}villan1 = {"Kindred", "fire", "mage", 20, 55},
 villan2 = {"Mordekaise","fire","human", 30, 31};

int main(){
	
	int attack = villan1.dir_villan.defense - villan2.dir_villan.power;
	
	if(attack <= 0){
		attack *= -1;
	}else{
		
	}
	std::cout<<"the attack is: "<<attack;
	
	getch();
	return 0;
}
