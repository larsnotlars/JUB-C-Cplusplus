/*
CH-230-A
a8p2.c
Lars Schuster
l.schuster@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{//takes item to assign and pointer to queue
	if(queue_is_full(pq))
        return -1;//if queue is full do not do anything
    else
    {
        Node *new = (Node *)malloc(sizeof(Node));//crate new node
        if (new == NULL)
            return -1;//check memory allocation
        new->item= item;
        new->next = NULL;
        if (queue_is_empty(pq))
            pq->front= new;//special case first element
        else
            (pq->rear)->next = new;//conect prev end to new element
        pq->rear=new;//set rear to new elem
        pq->items++;   
        return 0;
    }    
}

int dequeue(Item *pitem, Queue *pq)
{
	if (queue_is_empty(pq))
        return -1;//special case queue is empty do nothing
    *pitem= pq->front->item;//save item
    Node *temp = pq->front;//save pointer before dealloc
    pq->front = pq->front->next;//set new front to 
    free(temp);//dealloc prev front
    if (queue_item_count(pq) == 1)
            pq->front = pq->rear = NULL;//special case last element
    pq->items--;//decrease count
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq)
{
    for (Node *i = pq->front; i != NULL; i = i->next)
        printf("%d ",i->item);    
}