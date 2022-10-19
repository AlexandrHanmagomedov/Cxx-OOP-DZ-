#include <iostream>
#include <cstring>
#include <cstdlib>
#include<string>
using namespace std;


struct ListViolations
{
    string violat;
    ListViolations* next;
};

void Push(ListViolations*& node, string newStr)
{
    ListViolations* tmp = new ListViolations;
    tmp->violat = newStr + " ";
    tmp->violat.c_str();
    tmp->next = NULL;

    if (node == NULL)
        node = tmp;
    else
    {
        tmp->next = node;
        node = tmp;
    }
}

void ClearList(ListViolations*& Head)
{
    ListViolations* curr = Head;
    while (curr)
    {
        ListViolations* temp = curr->next;
        delete curr;
        curr = temp;
    }
}

void PrintList(ListViolations* Head)
{
    ListViolations* curr = Head;
    while (curr)
    {
        std::cout << curr->violat << std::endl;
        curr = curr->next;
    }
}

////////////////




///////////////////////////

struct TreeNode
{

    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;

    int number;
    ListViolations* list;
};

class database
{
private:
    int size;
    TreeNode* root;

public:
    database();
    ~database();

    void Add(int value, string);
    void Add(TreeNode*&, TreeNode*, int, string);
    void PrintAll(TreeNode*);
    void PrintNumber(int);
    void PrintRangeNumber(TreeNode* node, int min, int max);
    void PrintRangeNumber(int min, int max);
    TreeNode* ReturnRoot();
    void DeleteAll(TreeNode* temp);
};

database::database()
{
    root = NULL;
    size = 0;
}
//деструктор
database::~database()
{
    DeleteAll(root);
}
//метод получения корня
TreeNode* database::ReturnRoot()
{
    return root;
}
//метод удаления всего
void database::DeleteAll(TreeNode* temp)
{
    if (temp)
    {
        DeleteAll(temp->left);
        DeleteAll(temp->right);
        ClearList(temp->list);
        delete temp;
    }
}


//метод добавления 
void database::Add(TreeNode*& head, TreeNode* parent, int value, string str)
{
    TreeNode* temp = new TreeNode;
    temp->number = value;
    temp->list = NULL;
    temp->left = temp->right = temp->parent = NULL;

    if (!head)
    {
        head = temp;
        Push(head->list, str);
    }
    else
    {
        if (value < head->number)
            Add(head->left, head, value, str);

        else if (value > head->number)
            Add(head->left, head, value, str);
        else
            Push(head->list, str);
    }
}


void database::Add(int value,const string str)
{
    Add(root, NULL, value, str);
}

//метод печати полной базы данных
void database::PrintAll(TreeNode* temp)
{
    if (temp)
    {
        PrintAll(temp->left);
        cout << "Номер машины: " << temp->number << endl;
        cout << "Нарушения: " << endl;
        PrintList(temp->list);
        PrintAll(temp->right);
    }
}
void database::PrintNumber(int num) {
    if (root)
    {
        TreeNode* temp = root;
        int k = 0;
        while (temp)
        {
            if (num == temp->number)
            {
                k = 0;
                break;
            }
            if (num < temp->number) {
                ++k;
                temp = temp->left;
            }
            else if (num > temp->number) {
                ++k;
                temp = temp->right;
            }
        }
        if (k == 0)
        {
            cout << "Номер машины: " << temp->number << endl;
            cout << "Нарушение: " << endl;
            PrintList(temp->list);
        }
        else
            cout << "Машины с таким номером в базе нету\n";

    }
}

//¦ Распечатка данных по диапазону номеров.
void database::PrintRangeNumber(TreeNode* node, int min, int max)
{
    if (node == NULL)
    {
        return;
    }
    if (node->number > min)
    {
        PrintRangeNumber(node->left, min, max);
    }
    if (node->number >= min && node->number <= max)
    {
        cout << "Номер машины: " << node->number << endl;
        cout << "Нарушения: " << endl;
        PrintList(node->list);
    }
    if (node->number < max)
    {

        PrintRangeNumber(node->right, min, max);
    }

}
void database::PrintRangeNumber(int min, int max)
{
    PrintRangeNumber(root, min, max);
}
int main()
{
    setlocale(LC_ALL, "Russian");


    database bd;
   

    bd.Add(2022, "ticket 1 ");
    bd.Add(2022, "ticket 2");
    bd.Add(2022, "ticket 3");
    bd.Add(564, "ticket 1");
    bd.Add(79+82, "ticket 3");
    bd.Add(983, "ticket 3");
    bd.Add(9999, "ticket 1");
   
    int num1 = 2022;
    cout << "Распечатка по номеру\n";
    bd.PrintNumber(num1);
    cout << endl << endl;
    
    cout << "Распечатка по диапазону\n";
    bd.PrintRangeNumber(1, 564);
    cout << endl << endl;

    cout << "Распечатка по базе\n";
    bd.PrintAll(bd.ReturnRoot());
    

}