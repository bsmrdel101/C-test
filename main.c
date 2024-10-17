#include <stdio.h>
#include <stdlib.h>

struct Item {
  char name[10];
  int qty;
};

struct Inventory {
  struct Item *items;
};

int main() {
  struct Inventory inventory;
  inventory.items = (struct Item*) malloc(100 * sizeof(struct Item));
  struct Item sword = {"Sword", 1};
  inventory.items[0] = sword;
  
  printf("INVENTORY:\n");
  for (int i = 0; i < 1; i++) {
    printf("* %d %s\n", inventory.items[i].qty, inventory.items[i].name);
  }
  
  free(inventory.items);
  return 0;
}
