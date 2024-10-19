#include <stdio.h>
#include "system.c"
#include "inventory.c"

#define clrscr() system("@cls||clear")


int main() {
  clrscr();
  initInventory();
  AddItem((Item){"Sword", 1});

  printf("INVENTORY:\n");
  for (int i = 0; i < inventory.length; i++) {
    Item item = inventory.items[i];
    printf("- %d %s\n", item.qty, item.name);
  }

  return 0;
}
