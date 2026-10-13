#include <bits/stdc++.h>
#define SIZE 13
using namespace std;

int hash_function(int x)
{
    return x % SIZE;
}

int hashTable[SIZE];

void insertKey(int x)
{
    int index = hash_function(x);
    int start = index;

    while (hashTable[index] != -1)
    {
        if (hashTable[index] == -1)
            break;
        index = (index + 1) % SIZE;

        if (start == index)
        {
            cout << "HashTable is full.\n";
            return;
        }
    }

    hashTable[index] = x;
    cout << "Successfully inserted.\n";
}

void deleteKey(int x)
{
    int index = hash_function(x);
    int start = index;

    while (hashTable[index] != x)
    {
        if (hashTable[index] == x)
            break;

        index = (index + 1) % SIZE;
        if (start == index)
        {
            cout << "Element not found.\n";
            return;
        }
    }
    hashTable[index] = -1;
    cout << "Successfully deleted.\n";
}

void searchKey(int x)
{
    int index = hash_function(x);
    int start = index;

    while (hashTable[index] != x)
    {
        if (hashTable[index] == x)
            break;
        index = (index + 1) % SIZE;
        if (start == index)
        {
            cout << "Element not found.\n";
            return;
        }
    }
    cout << "Element found.\n";
}

void print()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "[" << i << "]=>" << hashTable[i] << endl;
    }
}

int main()
{

    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }

    int x, op, key;

    while (1)
    {
        cout << "1. Insert  2. Delete  3. Search  4. Print  5. Exit" << endl;
        cout << "Enter your option : ";

        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Enter element to be inserted : ";
            cin >> key;
            insertKey(key);
            break;
        case 2:
            cout << "Enter element to be deleted : ";
            cin >> key;
            deleteKey(key);
            break;
        case 3:
            cout << "Enter element to search : ";
            cin >> key;
            searchKey(key);
            break;
        case 4:
            print();
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
