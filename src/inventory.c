#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int INV_SIZE = 100;

typedef struct Item {
  str20 name;
  int qty;
  int id;
} Item;

typedef struct Inventory {
  struct Item* items;
  int length;
} Inventory;


Inventory inventory;

void InitInventory() {
  inventory.items = (Item*) malloc(INV_SIZE * sizeof(Item));
  inventory.length = 0;
}

void DisplayInventory() {
  printf("INVENTORY:\n");
  for (int i = 0; i < inventory.length; i++) {
    Item item = inventory.items[i];
    printf("- %d %s\n", item.qty, item.name);
  }
  printf("\n");
}

void AddItem(Item item) {
  item.id = inventory.length;
  inventory.items[inventory.length] = item;
  inventory.length += 1;
}

void RemoveItem(Item item) {
  Item* temp = malloc(INV_SIZE - 1 * sizeof(Item));
  if (item.id != 0) {
    memcpy(temp, inventory.items, item.id * sizeof(int));
  }
  if (item.id != (INV_SIZE - 1)) {
    memcpy(temp + item.id, inventory.items + item.id + 1, (INV_SIZE - item.id - 1) * sizeof(int));
  }

  free(inventory.items);
  inventory.items = temp;
  inventory.length -= 1;
}
