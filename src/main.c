#include "hash_table.h"
#include <stdio.h>

int main() {
  ht_hash_table *ht = ht_new();

  ht_insert(ht, "test", "hello");
  const char *t = ht_search(ht, "test");
  printf("%s\n", t);

  ht_del_hash_table(ht);
  return 0;
}
