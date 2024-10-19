#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
  str20 name;
  int qty;
} Item;

typedef struct Inventory {
  struct Item *items;
  int length;
} Inventory;


Inventory inventory;

void initInventory() {
  inventory.items = (Item*) malloc(100 * sizeof(Item));
  inventory.length = 0;
}

void AddItem(Item item) {
  inventory.items[inventory.length] = item;
  inventory.length += 1;
}
