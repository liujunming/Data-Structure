/*triedriver.c*/
/*
 * To Compile : gcc -o trie trie.c triedriver.c
 * To run: ./trie
 */
#include <stdio.h>
#include <stdlib.h>
#include "trie.h"

int main()
{
    trieNode_t *root = NULL;;
    trieNode_t* ret = NULL;
    printf("Trie Example\n");

    /*Create a trie*/
    TrieCreate(&root);

    TrieAdd(&root, "andrew", 1);
    TrieAdd(&root, "tina", 2);
    TrieAdd(&root, "argo", 3);
    TrieAdd(&root, "timor", 5);
    TrieRemove(&root, "tim");
    TrieAdd(&root, "tim", 6);
    TrieRemove(&root, "tim");
    TrieAdd(&root, "ti", 6);
    TrieAdd(&root, "amy", 7);
    TrieAdd(&root, "aramis", 8);

     ret = TrieSearch(root->children, "andrew");

    if(NULL != ret)
      printf("value %d\n", ret->value);
    else
      printf("not found\n");
    /*Destroy the trie*/
    TrieDestroy(root);
    return 0;
}