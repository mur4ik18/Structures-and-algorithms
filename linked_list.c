#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
  struct Node* next;
  int id;
  char* name;

} tNode;
tNode *create_node(int new_id,char* new_name);
void unshift(tNode **list, int new_id, char* new_name);
void push(tNode **list, int new_id, char* new_name);
int main() {
  tNode *list = create_node(0, "Pablo");
  unshift(&list, 1, "Marko");
  unshift(&list, 2, "Alehandro");
  push(&list, 4, "Alex");
  while (list !=NULL){
    printf("id - %d name - %s\n",list->id,list->name);
    list = list->next;
  }
  return 0;
}




tNode *create_node(int new_id,char* new_name){
  tNode* node = (tNode *)malloc(sizeof(tNode));
  node->id=new_id;
  node->name=new_name;
  node->next = NULL;
  return node;
}

void unshift(tNode **list, int new_id, char* new_name){
  tNode *new = create_node(new_id, new_name);
  new->next=*list;
  *list=new;
}

void push(tNode **list, int new_id, char* new_name) {
  tNode *new = create_node(new_id, new_name);
  // save our pointer;
  tNode *tmp = *list;
  while (tmp->next) {
    tmp = tmp->next;
  }
  // change null pointer to created element;
  tmp->next=new;
}
