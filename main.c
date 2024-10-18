#include <stdio.h>
#include <stdlib.h>

#define clrscr() system("@cls||clear")

typedef struct Item {
  char name[20];
  int qty;
} Item;

typedef struct Inventory {
  struct Item *items;
} Inventory;

int main() {
  Inventory inventory;
  inventory.items = (Item*) malloc(100 * sizeof(Item));
  Item sword = {"Sword", 1};
  inventory.items[0] = sword;
  
  clrscr();
  printf("INVENTORY:\n");
  for (int i = 0; i < 1; i++) {
    printf("- %d %s\n", inventory.items[i].qty, inventory.items[i].name);
  }
  
  free(inventory.items);
  return 0;
}
