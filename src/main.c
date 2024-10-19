#include <stdio.h>
#include "system.c"
#include "inventory.c"

#define clrscr() system("@cls||clear")


int main() {
  clrscr();

  InitInventory();
  Item sword = {"Sword", 1};
  AddItem(sword);
  DisplayInventory();
  RemoveItem(sword);
  DisplayInventory();

  return 0;
}
