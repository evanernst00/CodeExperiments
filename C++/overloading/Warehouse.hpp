#ifndef WAREHOUSE_HPP
#define WAREHOUSE_HPP

#include "Box.hpp"
#include <vector>

class Warehouse
{
private:
public:
        Warehouse();
        Warehouse(const Warehouse&);
        ~Warehouse();
        void storeInBox(int);
        Box* getBox(int);
        int getNumberBoxes();
        Warehouse& operator=(
            const Warehouse&
        );
private:
    std::vector<Box*>* _pBoxen;
};

std::ostream& operator<<(
    std::ostream&,
    const Warehouse&
);

Warehouse& Warehouse::operator=(
    // The warehouse to copy gets passed in as a reference
    const Warehouse& rhs
)
{
    // Deleting:
    // Loop to delete all boxes

    // Delete vector

    // Creating:
    // Make a new vector
    _pBoxen = new std::vector<Box*>;
    // Copy each box into it
    rhs.getNumberBoxes();
}

#endif // WAREHOUSE_HPP