## 跳跃表的概念、实现与应用

### 概念
跳跃表（skiplist）是一种随机化的数据，跳跃表以有序的方式在层次化的链表中保存元素，效率和平衡树媲美——查找、删除、添加等操作都可以在对数期望时间下完成，并且比起平衡树来说，跳跃表的实现要简单直观得多。

以下是个典型的跳跃表例子：

![](http://redisbook.readthedocs.io/en/latest/_images/skiplist.png)

从图中可以看到， 跳跃表主要由以下部分构成：

- 表头（head）：负责维护跳跃表的节点指针。
- 跳跃表节点：保存着元素值，以及多个层。
- 层：保存着指向其他元素的指针。高层的指针越过的元素数量大于等于低层的指针，为了提高查找的效率，程序总是从高层先开始访问，然后随着元素值范围的缩小，慢慢降低层次。
- 表尾：全部由 NULL 组成，表示跳跃表的末尾。

### 跳跃表的实现

跳跃表的具体实现参见代码，下面说下怎么编译运行代码吧。

`make`

`./skiplist`

`make clean`

### 跳跃表的应用
在Lucene、Redis中，运用到了跳跃表数据结构。

跳跃表的效率与红黑树等结构差不多，那为什么还需要用到跳跃表么？下面将给出答案。

1. skiplist的复杂度和红黑树一样，而且实现起来更简单。

1. 在并发环境下skiplist有另外一个优势，红黑树在插入和删除的时候可能需要做一些rebalance的操作，这样的操作可能会涉及到整个树的其他部分，而skiplist的操作显然更加局部性一些，锁需要盯住的节点更少，因此在这样的情况下性能好一些。

具体可以参考Herb Sutter写的Choose [Concurrency-Friendly Data Structures](http://www.drdobbs.com/parallel/choose-concurrency-friendly-data-structu/208801371).

另外这篇论文里有更详细的说明和对比，page50~53：
[cl.cam.ac.uk/research/s](http://www.cl.cam.ac.uk/research/srg/netos/papers/2007-cpwl.pdf)



---
参考资料:

1. [网易公开课 算法导论 跳跃表](http://open.163.com/movie/2010/12/7/S/M6UTT5U0I_M6V2TTJ7S.html)

1. [redisbook](http://redisbook.readthedocs.io/en/latest/internal-datastruct/skiplist.html)

1. [知乎](https://www.zhihu.com/question/20202931/answer/16086538)
