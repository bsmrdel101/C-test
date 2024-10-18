#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
  char name[20];
  int qty;
} Item;

typedef struct Inventory {
  struct Item *items;
} Inventory;


Inventory inventory;

void initInventory() {
  inventory.items = (Item*) malloc(100 * sizeof(Item));
  
  Item sword = {"Sword", 1};
  inventory.items[0] = sword;
}
