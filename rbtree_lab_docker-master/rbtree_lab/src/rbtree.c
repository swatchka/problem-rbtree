#include "rbtree.h"

#include <stdlib.h>

rbtree *new_rbtree(void) {
  rbtree *p = (rbtree *)malloc(sizeof(rbtree)); // 트리 전체 선언(생성) 트리 자체의 힙 생성
  p->nil = (node_t *)malloc(sizeof(node_t)); // 닐 노드 동적 할당
  p->root = NULL;

  p->nil->color = RBTREE_BLACK;
  p->nil->key = 0; // 값이 나중에 들어갈것으로 예상
  p->nil->parent = p->root;
  p->nil->right = p->nil;
  p->nil->left = p->nil;
  return p;
}

void delete_rbtree(rbtree *t) {
  // TODO: reclaim the tree nodes's memory
  free(t);
}

node_t *rbtree_insert(rbtree *t, const key_t key) {
  // TODO: implement insert
  // BST 마냥 삽입
  // 색 조정
  node_t *n = (node_t *)malloc(sizeof(node_t)); // 새로운 노드 동적 할당

  n->key = key;
  n->left = n->right = n->parent = t->nil;
  n->color = RBTREE_BLACK;

  node_t *cur = t->root; // 루트부터 시작
  
    if (t->root == NULL){
      t->root = n;
      n->color = RBTREE_BLACK;
    }
    else{ 
      node_t *parent = t->nil;
      while (cur != t->nil && cur != NULL){
        if (key > cur->key){ // 새로들어온 값이 현재 노드의 값보다 크면
          parent = cur;
          cur = cur->right; // 이동
          if (cur == t->nil){
            n->parent = parent;
            parent->right = n;
            break;
          }
        }
        else if (key < cur->key){ // 새로들어온 값이 현재 노드의 값보다 작으면
          parent = cur;
          cur = cur->left; // 이동
          if (cur == t->nil){
            n->parent = parent;
            parent->left = n;
            break;
          }
        } 
        else { // 값이 같을때
          break;
        }
      }
      n->left = n->right = t->nil;
      n->color = RBTREE_RED;
    }
    // RB트리 속성 조정 판별 필요
    // 캐이스별 별도 조정 함수 필요

  return t->root;
}

node_t *rbtree_find(const rbtree *t, const key_t key) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_min(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_max(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

int rbtree_erase(rbtree *t, node_t *p) {
  // TODO: implement erase
  return 0;
}

int rbtree_to_array(const rbtree *t, key_t *arr, const size_t n) {
  // TODO: implement to_array
  return 0;
}
