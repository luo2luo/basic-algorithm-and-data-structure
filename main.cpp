#include <iostream>
#include "DataStructure/List.h"
int main() {
    cout << "List cheeck" << endl;
    List l1;
    l1.Insert(1);
    l1.Insert(2);
    l1.Insert(3);
    l1.Insert(4);
    l1.Insert(5);
    l1.Insert(6);
    l1.Insert(7);
    l1.print();
    l1.Search(4);
    l1.Delete(6);
    l1.print();
    l1.getValueAt(3);
    l1.setValueAt(3, 9);
    l1.print();
    cout << "The End of list check!" << endl;












    return 0;
}
