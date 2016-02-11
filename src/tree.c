#include <stdio.h>
#include <string.h>
typedef struct _employee{
    char name[32];
    unsigned char age;
}Employee;

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*,void*);

int compareEmployee(Employee *e1, Employee *e2){
    return strcmp(e1->name,e2->name);
}

void displayEmployee(Employee* employee){
    printf("%s\t%d\n",employee->name, employee->age);
}
//=================================================
typedef struct _tree{
    void *data;
    struct _tree *left;
    struct _tree *right;
}TreeNode;
//=========================
/*Binary trees are used for a number of purposes and can be traversed in three different
ways: pre-order, in-order, and post-order. The three techniques use the same steps, but
they are performed in different orders. The three steps are:
Visit the node
Process the node
Go left
Transfer to the left node
o right
Transfer to the right node
For our purposes, visiting a node means we will display its contents. The three orders
are:
In-order
Go left, visit the node, go right
Pre-order
Visit the node, go left, go right
Post-order
Go left, go right, visit the node
*/
void inOrder(TreeNode *root,DISPLAY display){
    if(root != NULL){
        inOrder(root->left,display);
        display(root->data);
        inOrder(root->right,display);
    }
}

void postOrder(TreeNode *root,DISPLAY display){
    if(root != NULL){
        postOrder(root->left, display);
        postOrder(root->right, display);
        display(root->data);
    }
}

void preOrder(TreeNode *root,DISPLAY display){
    if(root != NULL){
        display(root->data);
        preOrder(root->left, display);
        preOrder(root->right, display);
    }
}
void insertNode(TreeNode **root,COMPARE compare,void* data){
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    if(*root == NULL){
        *root = node;
        return;
    }
    while(1){
        if(compare((*root)->data, data) > 0){
            if((*root)->left != NULL){
                *root = (*root)->left;
            }else{
                (*root)->left = node;
              break;
            }
        } else {
            if ((*root)->right != NULL){
                *(root) = (*root)->right;
            }else{
                (*root)->right = node;
                break;
            }
        }
    }
}

int main(int argc,char **argv){
    TreeNode *tree = NULL;

     Employee *samuel = (Employee*) malloc(sizeof(Employee));
    strcpy(samuel->name, "Samuel");
    samuel->age = 32;

    Employee *sally = (Employee*)malloc(sizeof(Employee));
    strcpy(sally->name,"Sally");
    sally->age = 28;

    Employee *susan = (Employee*)malloc(sizeof(Employee));
    strcpy(susan->name, "Susan");
    susan->age = 45;

    insertNode(&tree, (COMPARE) compareEmployee, samuel);
    insertNode(&tree, (COMPARE) compareEmployee, sally);
    insertNode(&tree, (COMPARE) compareEmployee, susan);

    preOrder(tree, (DISPLAY)displayEmployee);
    printf("\n------------------------------\n");
    inOrder(tree, (DISPLAY)displayEmployee);
    printf("\n-------------------------------\n");
    postOrder(tree, (DISPLAY)displayEmployee);
    return 0;

}
