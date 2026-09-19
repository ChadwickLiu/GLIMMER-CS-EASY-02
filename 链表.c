#include <stdio.h>
#include <stdlib.h>
typedef struct glimmer{
        int data;
        struct glimmer *next;
    }glimmer;
    glimmer* node(int data){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        newnode->data=data;
        newnode->next=NULL;    
        return newnode;
    }
    glimmer* insert(glimmer* head,int n){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        if(newnode==NULL){
            printf("内存分配失败\n");
            return head;
        }
        newnode->data=n;
        newnode->next=head->next;
        head->next=newnode;
        printf("成功插入节点");

    }

    glimmer* input(glimmer* head,int m){
        glimmer* newnode=(glimmer*)malloc(sizeof(glimmer));
        if(newnode==NULL){
            printf("内存分配失败\n");
            return head;
        }
        newnode->data=m;
        newnode->next=NULL;
        glimmer* current= head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnode;
        printf("成功在尾部插入节点");
        return head;
        }
        void travel(glimmer* head){
            if(head==NULL||head->next==NULL){
                printf("链表为空\n");
                return;
            }
            glimmer* current=head->next;
            while(current!=NULL){
                current=current->next;
            }
            printf("\n");

        }
        int find(glimmer* head,int n){
            if(head==NULL||head->next==NULL){
                printf("链表为空\n");
                return -1;
            }
            glimmer* current=head->next;
            int index=1;
            while(current!=NULL){
                if(current->data==n){
                    return index;
                }
                current=current->next;
                index++;
            }
            return -1;
        }
        int delete(glimmer* head,int n){
            if(head==NULL||head->next==NULL||n<1){
                printf("链表为空\n");
                return 0;
            }
            glimmer* current=head->next;
            glimmer* prev=head;
            int index=1;
            while(current!=NULL&&index<n){
                if(current->data==n){
                    prev->next=current->next;
                    free(current);
                    printf("成功删除节点%d\n",n);
                    return 0;
                }
                prev=current;
                current=current->next;
            }
            printf("未找到节点%d\n",n);
            return -1;
        }
int main()
{
    glimmer* head=node(0);
    insert(head,10);
    insert(head,20);
    insert(head,30);
    travel(head);
    input(head,40);
    input(head,50);
    travel(head);
    printf("\n---测试查找功能---\n");
    int target=10;
    int pos=find(head,target);
    if(pos!=-1){
        printf("元素%d在链表中的位置为:%d\n",target,pos);
    } else {
        printf("元素%d不在链表中\n",target);
    }
    target=99;
    pos=find(head,target);
    if(pos!=-1){
        printf("元素%d在链表中的位置为:%d\n",target,pos);
    } else {
        printf("元素%d不在链表中\n",target);
    }
    printf("\n---测试删除功能---\n");
    if (delete(head,10)){
        printf("删除失败\n");
    }else{
        printf("删除成功\n");
    }

    return 0; 
}