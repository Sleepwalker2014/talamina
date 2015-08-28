#include <vector>
#include <iostream>
#include <string>
using namespace std;


class MindObject {
    public:
        MindObject();
        bool addAssociation(MindObject m);
        std::vector<MindObject> associatedObjects;
        int uniqueId;
        int picture;
        int video;
        string text;
};

MindObject::MindObject()
{
    this->picture = 0;
    this->video = 0;
    this->text = "";
}

bool MindObject::addAssociation(MindObject m)
{
    this->associatedObjects.push_back(m);

    return true;
}
