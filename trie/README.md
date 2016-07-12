### c语言实现Trie树

#### 概念
Trie树，即字典树，又称单词查找树或键树，是一种树形结构。典型应用是用于统计和排序大量的字符串（但不仅限于字符串），所以经常被搜索引擎系统用于文本词频统计。它的优点是最大限度地减少无谓的字符串比较，查询效率比较高。

#### 应用接口

1. 创建trie树 `trieNode_t *root = NULL;` && `TrieCreate(&root);`
1. 往trie树中插入键值对（这里键为字符串，值为整数） `TrieAdd(&root, "andrew", 1);`
1. 从trie树中删除键（即字符串）`TrieRemove(&root, "tim");`
1. 根据健查询对应的值 `trieNode_t* ret = NULL;`&& `ret = TrieSearch(root->children, "andrew");`
1. 销毁Trie树`TrieDestroy(root);`

#### 编译与允许
在当前目录下，triedriver.c为测试程序，trie.c和trie.h为Trie树的实现程序。
- 编译源码 gcc -o trie trie.c triedriver.c
- 允许程序 ./trie

---
参考链接：

1. [Trie树的概念及其实现](https://liujunming.github.io/2016/07/12/Trie%E6%A0%91%E7%9A%84%E6%A6%82%E5%BF%B5%E5%8F%8A%E5%85%B6%E5%AE%9E%E7%8E%B0/)

2. [simplestcodings](https://simplestcodings.blogspot.com/2012/11/trie-implementation-in-c.html)
