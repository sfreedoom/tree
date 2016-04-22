#ifndef __BITNODE__
#define __BITNODE__

typedef struct _BitNode{
	int my_data;
	_BitNode* my_leftChild;
	_BitNode* my_rightChild;
}BitNode, *p_BitTree;

#endif
