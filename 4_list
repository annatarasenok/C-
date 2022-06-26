#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char* text;
    struct Node *next;
};


struct Node* init(char* text)
{
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->text = text;
    root->next = NULL;
    return root;
}

void add(struct Node* root, char* text)
{
    if (!root) 
    {
        printf("Списка не существует.\n"); 
        return;
    }
    struct Node* i = root;
    struct Node* last = init(text);
    while (i->next != NULL)
    {
        i = i->next;
    }
    i->next = last;
}

void pop(struct Node* root)
{
    if (!root) 
    {
        printf("Списка не существует.\n"); 
        return;
    }
    struct Node* i = root;
    while (i->next != NULL)
    {
        root = i;
        i = i->next;
    }
    free(i->text);
    free(i);
    root->next = NULL;
}

void show(struct Node* root)
{
    if (!root) 
    {
        printf("Списка не существует.\n"); 
        return;
    }
    struct Node* i = root;
    while (i != NULL)
    {
        printf("%s\n", i->text);
        i = i->next;
    }
}

void delete(struct Node** root)
{
    if (!*root) 
    {
        printf("Списка не существует.\n"); 
        return;
    }
    struct Node* i = *root;
    for (; i!= NULL; )
    {
        free(i->text);
        struct Node* temp = i->next;
        free(i);
        i = temp;
    }
    *root = NULL;
}

int get(struct Node* root, char* text)
{
    if (!root) 
    {
        printf("Списка не существует.\n"); 
        return -2;
    }
    struct Node* i = root;
    int index = 0;
    while (i != NULL)
    {
        if (strcmp(i->text, text) == 0)
        {
          return index;
        }
        i = i->next;
        index++;
    }
    printf("Элемента не существует.\n");
    return -1;
}


int main()
{
    printf("Выберите номер соответствующей команды: \n");
    printf("1. Создать первый элемент односвязного списка\n");
    printf("2. Добавить элемент в конец односвязного списка\n");
    printf("3. Удалить элемент с конца односвязного списка\n");
    printf("4. Просмотреть односвязный список\n");
    printf("5. Удалить весь односвязный список\n");
    printf("6. Выполнить последовательный поиск заданного элемента в односвязном списке\n");
    printf("7. Выйти из программы\n");
    char command[255];
    scanf("%s", command);
    struct Node* node;
    while (strcmp(command, "7") != 0)
    {
        if (strcmp(command, "1") == 0)
        {
            char* list = (char*)malloc(sizeof(char)*255);
            printf("Введите первый элемент: ");
            scanf("%s", list);
            node = init(list);
        } 
        else if (strcmp(command, "2") == 0)
        {
            char* element = (char*)malloc(sizeof(char)*255);
            printf("Введите элемент: ");
            scanf("%s", element);
            add(node, element);
        }
        else if (strcmp(command, "3") == 0)
        {
            pop(node);
        }

        else if (strcmp(command, "4") == 0)
        {
            show(node);
        }
        else if (strcmp(command, "5") == 0)
        {
            delete(&node);
        }        
        else if (strcmp(command, "6") == 0)
        {
            char element[255];
            printf("Введите элемент: ");
            scanf("%s", element);
            printf("%d\n", get(node, element));
        }
        else if (strcmp(command, "7") == 0)
        {
            return 0;
        }
        else 
        {
            printf("1. Создать первый элемент односвязного списка\n");
            printf("2. Добавить элемент в конец односвязного списка\n");
            printf("3. Удалить элемент с конца односвязного списка\n");
            printf("4. Просмотреть односвязный список\n");
            printf("5. Удалить весь односвязный список\n");
            printf("6. Выполнить последовательный поиск заданного элемента в односвязном списке\n");
            printf("7. Выйти из программы\n");
        }
        printf("Выбрите номер следующей команды:\n");
        scanf("%s", command);
    }
    return 0;
}
