#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 768
typedef struct Node{
    int e;
    struct Node *next;
}List;

typedef struct{List *head[MAXSIZE];}hs;

bool inhs(List *list, int key){
    List *nodeIt = list;
    //通过链表下遍历
    while (nodeIt != NULL) 
    {
        if (nodeIt->e == key) 
        {
            return true;
        }
        nodeIt = nodeIt->next;
    }
    return false;
}

// bool addhs(hs* obj, int key){
//     //插入在Head处
//     if(inhs(obj->head[abs(key)%MAXSIZE],key))
//     {
//         //不用添加了
//         return false;
//     }
//     List *newNode = (List*)malloc(sizeof(List));
//     newNode->e = key;
//     newNode->next = NULL;
//     if(obj->head[abs(key)%MAXSIZE] != NULL)
//     {
//         //当前头链表不为空，则需要将后续的链表接上
//         //需要主要这里表头也代表一个数据的值
//         newNode->next = obj->head[abs(key)%MAXSIZE];
// }

void freehs(hs* obj)
{
//     int i;
//     List *freeIt;
//     List *curIt;
//     for (i = 0; i < MAXSIZE; i++)
//         {
//             if(obj->head[i] != NULL)
//             {
//                 freeIt = NULL;
//                 curIt  = obj->head[i];
                
//                 while(curIt != NULL)
//                 {
//                     freeIt = curIt;
//                     curIt= curIt->next;
//                     free(freeIt);
//                 }
//                 obj->head[i]= NULL;
//             }
//         }
//         free(obj);
}

hs* creat()
{
//     int i;
    int i = sizeof(hs);
    printf(i);
    hs* newHash = (hs* )malloc(sizeof(hs));
//     /* 对链表的头结点赋初值 */
//     for (i = 0; i < MAXSIZE; i++)
//     {
//         newHash->head[i] = NULL;
//     }
    return newHash;
}


bool containsDuplicate(int* nums, int numsSize){
    hs* newhs = creat();
    for(int i=0; i<numsSize; i++){
        bool flag = inhs(newhs, nums[i]);
        // printf(flag);
        // if(flag){
        //     freehs(newhs);
        //     return true;
        // }
        // addhs(newhs, nums[i]);
    }
    freehs(newhs);
    return false;
}

int main(){
    int numSize = 4;
    //int nums[numSize] = {2, 3, 2, 4};
    
    //print(containsDuplicate(nums, numsSize);
    //printf("hello world");
    return 0;
}
