#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main() {

  struct node *test;
  int i;

  printf("\nPrinting empty list:\n");
  print_list(test);

  for (i = 9; i >= 0; i--){
    printf("\nAdding %d at the front\n", i);
    printf("List: ");
    test = insert_front(test, i);
    print_list(test);
  }

  printf("\nRemoving %d\n", 2);
  printf("List: ");
  test = remove_node(test, 2);
  print_list(test);

  printf("\nRemoving %d\n", 5);
  printf("List: ");
  test = remove_node(test, 5);
  print_list(test);

  printf("\nRemoving %d\n", 9);
  printf("List: ");
  test = remove_node(test, 9);
  print_list(test);

  printf("\nFreeing List \n");
  test = free_list(test);
  printf("Final List");
  print_list(test);
  return 0;
}
