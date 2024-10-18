#include <stdio.h>
#include <stdlib.h>
#include "inventory"

#define clrscr() system("@cls||clear")


int main() {
  initInventory();
  
  clrscr();
  printf("INVENTORY:\n");
  for (int i = 0; i < 1; i++) {
    printf("- %d %s\n", inventory.items[i].qty, inventory.items[i].name);
  }
  
  free(inventory.items);
  return 0;
}
