#include <vector>

class MindObject {
    public:
        MindObject();
        bool addAssociation(MindObject m);
        std::vector<MindObject> associatedObjects;
        int picture;
        int video;
        int text;
};

MindObject::MindObject()
{
    this->picture = 0;
    this->video = 0;
    this->text = 0;
}

bool MindObject::addAssociation(MindObject m)
{
    this->associatedObjects.push_back(m);

    return true;
}
