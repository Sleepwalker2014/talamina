#include <vector>
#include <iostream>

using namespace std;


class Consciousness {
    public:
        Consciousness();
        MindObject *name;
        MindObject *mainObject;
        bool addNewNode(MindObject m);
};

Consciousness::Consciousness()
{
   this->name = new MindObject();
   this->mainObject = new MindObject();
}

bool Consciousness::addNewNode(MindObject m)
{
    this->mainObject->addAssociation(m);
    return true;
}
