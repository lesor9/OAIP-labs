#include <pch.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  cout << "Введите строку: ";
  char str[100] = "";
  cin.getline(str, 100);

  int quantity = 0, j = 0, GroupStarts = 0;

  bool isSpaceCharacter, isOddGroup, isEvenGroup;

  cout << endl << "Группы с нечетным количеством символов: " << endl;

  for (int i = 0; i < (strlen(str) + 1); i++) {
    isSpaceCharacter = (str[i] == '\0') || (str[i] == ' ');
    isOddGroup = ((i - GroupStarts) % 2) != 0;
    isEvenGroup = ((i - GroupStarts) % 2) == 0;

    if (isSpaceCharacter && isEvenGroup) 
      GroupStarts = i + 1;

    if (isSpaceCharacter && isOddGroup) {
      for (j = GroupStarts; (j <= i); j++) {
        cout << str[j];
        if (str[j] == '1') quantity++;
      }	
      GroupStarts = i + 1;
      cout << endl;
    }
  }

  cout << endl << "Количество единиц в группах с нечетным количеством символов: " << quantity << endl << endl;
  system("pause");
  return 0;
}