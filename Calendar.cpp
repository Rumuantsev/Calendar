/**********************************
* ПИ-221                          *
* Румянцев Арсений                *
* Календарь                       *
* 27.12.2022                      *
**********************************/

#include <iostream>
#include <string>
using namespace std;

int shiftOne;
int shiftTwo;
int shiftThree;
int shiftFour;

bool checkLeapYear(int year) {
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
    return 1;
  }
  else {
    return 0;
  } 
}

void printMonth(string month, int days, int countWeeksDays, string weeksDays) {
  cout << "      " << month << "\n " << weeksDays << " \n";
  int weekDay = 1;
  int nowDay = 1;
  while (shiftOne > 0) {
      cout << "   ";
      --shiftOne;
      ++weekDay;
    }
  while (nowDay <= days) { 
    cout.width(3);
    cout << nowDay;
    ++nowDay;
    ++weekDay;
    if (weekDay > countWeeksDays) {
      weekDay = 1;
      cout << "\n";
    }
  }
  shiftOne = weekDay - 1;
  cout << "\n\n";
}

void printTwoMonths(string monthOne, string monthTwo, int daysOne, int daysTwo, int countWeeksDays, string weeksDays) {
  cout << "          " << monthOne << "              " << monthTwo << "\n " << weeksDays << "   " << weeksDays << "\n"; 
  int weekDayOne = 1;
  int nowDayOne = 1;
  int weekDayTwo = 1;
  int nowDayTwo = 1;
  shiftTwo = (shiftOne + daysOne) % 7;
  int shiftBuf = shiftTwo;
  while ((nowDayOne <= daysOne) or (nowDayTwo <= daysTwo)) {
    while (shiftOne != 0) {
      cout << "   ";
      --shiftOne;
      ++weekDayOne;
    }
    while (((weekDayOne) <= countWeeksDays) and (nowDayOne <= daysOne)) {
      cout.width(3);
      cout << nowDayOne;
      ++nowDayOne;
      ++weekDayOne;
    }
    if (nowDayOne >= daysOne) {
      while (weekDayOne <= countWeeksDays) {
        cout << "   ";
        ++weekDayOne;
      }
    }
    weekDayOne = 1;
    cout << "  ";
    while (shiftTwo != 0) {
      cout << "   ";
      --shiftTwo;
      ++weekDayTwo;
    }
    while ((weekDayTwo <= countWeeksDays) and (nowDayTwo <= daysTwo)) {
      cout.width(3);
      cout << nowDayTwo;
      ++nowDayTwo;
      ++weekDayTwo;
    }
    weekDayTwo = 1;
    cout << "\n";
  }

  shiftOne = (daysTwo + shiftBuf) % 7;
  cout << "\n\n";
}

void printThreeMonths(string monthOne, string monthTwo, string monthThree, int daysOne, int daysTwo, int daysThree, int countWeeksDays, string weeksDays) {
  cout << "          " << monthOne << "              " << monthTwo << "                  " << monthThree; 
  cout << "\n " << weeksDays << "   " << weeksDays << "   " << weeksDays << "\n"; 
  int weekDayOne   = 1;
  int nowDayOne    = 1;
  int weekDayTwo   = 1;
  int nowDayTwo    = 1;
  int weekDayThree = 1;
  int nowDayThree  = 1;
  shiftTwo   = (shiftOne + daysOne) % 10;
  shiftThree = (shiftTwo + daysTwo) % 10;
  int shiftBuf = shiftThree;
  while ((nowDayOne <= daysOne) or (nowDayTwo <= daysTwo) or (nowDayThree <= daysThree)) {
    while (shiftOne != 0) {
      cout << "   ";
      --shiftOne;
      ++weekDayOne;
    }
    while (((weekDayOne) <= countWeeksDays) and (nowDayOne <= daysOne)) {
      cout.width(3);
      cout << nowDayOne;
      ++nowDayOne;
      ++weekDayOne;
    }
    if (nowDayOne >= daysOne) {
      while (weekDayOne <= countWeeksDays) {
        cout << "   ";
        ++weekDayOne;
      }
    }
    weekDayOne = 1;
    cout << "  ";
    
    while (shiftTwo != 0) {
      cout << "   ";
      --shiftTwo;
      ++weekDayTwo;
    }
    while ((weekDayTwo <= countWeeksDays) and (nowDayTwo <= daysTwo)) {
      cout.width(3);
      cout << nowDayTwo;
      ++nowDayTwo;
      ++weekDayTwo;
    }
    if (nowDayTwo >= daysTwo) {
      while (weekDayTwo <= countWeeksDays) {
        cout << "   ";
        ++weekDayTwo;
      }
    }
    weekDayTwo = 1;
    cout << "  ";
    
    while (shiftThree != 0) {
      cout << "   ";
      --shiftThree;
      ++weekDayThree;
    }
    while ((weekDayThree <= countWeeksDays) and (nowDayThree <= daysThree)) {
      cout.width(3);
      cout << nowDayThree;
      ++nowDayThree;
      ++weekDayThree;
    }
    weekDayThree = 1;
    cout << "\n";
    }

  shiftOne = (daysThree + shiftBuf) % 10;
  cout << "\n\n";
}

void printFourMonths(string monthOne, string monthTwo, string monthThree, string monthFour, int daysOne, int daysTwo, int daysThree, int daysFour, int countWeeksDays, string weeksDays) {
  cout << "          " << monthOne << "              " << monthTwo << "                  " << monthThree <<  "                  " << monthFour; 
  cout << "\n " << weeksDays << "   " << weeksDays << "   " << weeksDays << "   " << weeksDays << "\n"; 
  int weekDayOne   = 1;  int nowDayOne    = 1;
  int weekDayTwo   = 1;  int nowDayTwo    = 1;
  int weekDayThree = 1;  int nowDayThree  = 1;
  int weekDayFour  = 1;  int nowDayFour   = 1;
  shiftTwo     = (shiftOne + daysOne) % 10;
  shiftThree   = (shiftTwo + daysTwo) % 10;
  shiftFour    = (shiftThree + daysThree) % 10;
  int shiftBuf = shiftThree;
  while ((nowDayOne <= daysOne) or (nowDayTwo <= daysTwo) or (nowDayThree <= daysThree) or (nowDayFour <= daysFour)) {
    while (shiftOne != 0) {
      cout << "   ";
      --shiftOne;
      ++weekDayOne;
    }
    while (((weekDayOne) <= countWeeksDays) and (nowDayOne <= daysOne)) {
      cout.width(3);
      cout << nowDayOne;
      ++nowDayOne;
      ++weekDayOne;
    }
    if (nowDayOne >= daysOne) {
      while (weekDayOne <= countWeeksDays) {
        cout << "   ";
        ++weekDayOne;
      }
    }
    weekDayOne = 1;
    cout << "  ";
    
    while (shiftTwo != 0) {
      cout << "   ";
      --shiftTwo;
      ++weekDayTwo;
    }
    while ((weekDayTwo <= countWeeksDays) and (nowDayTwo <= daysTwo)) {
      cout.width(3);
      cout << nowDayTwo;
      ++nowDayTwo;
      ++weekDayTwo;
    }
    if (nowDayTwo >= daysTwo) {
      while (weekDayTwo <= countWeeksDays) {
        cout << "   ";
        ++weekDayTwo;
      }
    }
    weekDayTwo = 1;
    cout << "  ";
    
    while (shiftThree != 0) {
      cout << "   ";
      --shiftThree;
      ++weekDayThree;
    }
    while ((weekDayThree <= countWeeksDays) and (nowDayThree <= daysThree)) {
      cout.width(3);
      cout << nowDayThree;
      ++nowDayThree;
      ++weekDayThree;
    }
    if (nowDayThree >= daysThree) {
      while (weekDayThree <= countWeeksDays) {
        cout << "   ";
        ++weekDayThree;
      }
    }
    weekDayThree = 1;
    cout << "  ";
    
    while (shiftFour != 0) {
      cout << "   ";
      --shiftFour;
      ++weekDayFour;
    }
    while ((weekDayFour <= countWeeksDays) and (nowDayFour <= daysFour)) {
      cout.width(3);
      cout << nowDayFour;
      ++nowDayFour;
      ++weekDayFour;
    }
    weekDayFour = 1;
    cout << "\n";
    }

  shiftOne = (daysThree + shiftBuf) % 10;
  cout << "\n\n";
}


int main() {
  setlocale(LC_ALL, "Russian");
  int year;
  cout << "введите год: ";
  cin >> year;
  
  shiftOne = (((year - 1) * 4 + ((year / 400) + (year / 4) - (year / 100))) % 10); 
  
  
  if (checkLeapYear(year)) {
    --shiftOne;
  }
  

  int countColumn = 2;
  cout << "введите кол-во столбцов: ";
  cin >> countColumn;
  if ((countColumn < 1) or (countColumn > 4)) {
      cout << "ошибка: кол-во столбцов может быть от 1 до 4";
      return 0;
  }
  
  int countWeeksDays;
  cout << "введите кол-во дней недели: ";
  cin >> countWeeksDays;
  if ((countWeeksDays < 4) or (countWeeksDays > 10)) {
      cout << "ошибка: кол-во дней недели может быть от 4 до 10";
      return 0;
  }
  
 
  string weeksDays;
  if (countWeeksDays == 7) {
      weeksDays = "пн вт ср чт пт сб вс";
  } else {
      cout << "введите названия дней недели в формате пн_вт_ср_чт_пт_сб_вс: ";
      cin >> weeksDays;
  }
  
  
  
  
  if (countColumn == 1) {
    cout << " Календарь " << year << " года \n";  
    printMonth("январь", 31, countWeeksDays, weeksDays);
    if (checkLeapYear(year)) {
      printMonth("февраль", 29, countWeeksDays, weeksDays);
    }
    else {
      printMonth("февраль", 28, countWeeksDays, weeksDays);
    }
    printMonth("март", 31, countWeeksDays, weeksDays);
    printMonth("апрель", 30, countWeeksDays, weeksDays);
    printMonth("май", 31, countWeeksDays, weeksDays);
    printMonth("июнь", 30, countWeeksDays, weeksDays);
    printMonth("июль", 31, countWeeksDays, weeksDays);
    printMonth("август", 31, countWeeksDays, weeksDays);
    printMonth("сентябрь", 30, countWeeksDays, weeksDays);
    printMonth("октябрь", 31, countWeeksDays, weeksDays);
    printMonth("ноябрь", 30, countWeeksDays, weeksDays);
    printMonth("декабрь", 31, countWeeksDays, weeksDays);
  
  } else if (countColumn == 2) {
      cout << "            Календарь " << year << " года \n";
      if (checkLeapYear(year)) {
        printTwoMonths("январь", "февраль", 31, 29, countWeeksDays, weeksDays);
      } else {
        printTwoMonths("январь", "февраль", 28, 31, countWeeksDays, weeksDays);
      }
      printTwoMonths("март", "апрель", 31, 30, countWeeksDays, weeksDays);
      printTwoMonths("май", "июнь", 31, 30, countWeeksDays, weeksDays);
      printTwoMonths("июль", "август", 31, 31, countWeeksDays, weeksDays);
      printTwoMonths("сентябрь", "октябрь", 30, 31, countWeeksDays, weeksDays);
      printTwoMonths("ноябрь", "декабрь", 30, 31, countWeeksDays, weeksDays);
  } else if (countColumn == 3) {
      cout << "                      Календарь " << year << " года \n";
      if (checkLeapYear(year)) {
        printThreeMonths("январь", "февраль", "март", 31, 29, 31, countWeeksDays, weeksDays);
      } else {
        printThreeMonths("январь", "февраль", "март", 31, 28, 31, countWeeksDays, weeksDays);
      }
      printThreeMonths("апрель", "май", "июнь", 30, 31, 30, countWeeksDays, weeksDays);
      printThreeMonths("июль", "август", "сентябрь", 31, 31, 30, countWeeksDays, weeksDays);
      printThreeMonths("октябрь", "ноябрь", "декабрь", 31, 30, 31, countWeeksDays, weeksDays);
  } else if (countColumn == 4) {
      cout << "                                Календарь " << year << " года \n";
      if (checkLeapYear(year)) {
        printFourMonths("январь", "февраль", "март", "апрель", 31, 29, 31, 30, countWeeksDays, weeksDays);
      } else {
        printFourMonths("январь", "февраль", "март", "апрель", 31, 28, 31, 30, countWeeksDays, weeksDays);
      }
      printFourMonths("май", "июнь", "июль", "август", 31, 30, 31, 31, countWeeksDays, weeksDays);
      printFourMonths("сентябрь", "октябрь", "ноябрь", "декабрь", 30, 31, 30, 31, countWeeksDays, weeksDays);
  }      
}