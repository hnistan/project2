#include "Manager.h"

using namespace std;

Manager::Manager(vector<Wood>)
{
    this->saw = new Saw();
    this->drill = new Drill();
}

void Manager::buyWood(const Wood &wood, const Money &cost)
{
    this->woods.push_back(wood);
    this->money -= cost;
}

void Manager::removeWood(const Wood::Id &id)
{
    vector<Wood>::iterator it = woods.begin();
    for (Wood item : woods)
    {
        if (item.getId() == id)
        {
            woods.erase(it);
            break;
        }
        it++;
    }
}

Wood &Manager::getWood(const Wood::Id &id)
{
    for (Wood wood : woods)
    {
        if (wood.getId() == id)
        {
            return wood;
        }
    }
}

std::vector<Wood> &Manager::getWoods()
{
    return woods;
}

void Manager::cut(Wood &wood, const Saw::CutType &type)
{
    woods.push_back(this->saw->halve(wood, type));
}

void Manager::connect(Wood &wood1, Wood &wood2, Drill::ConnectType type)
{
    woods.push_back(this->drill->connect(wood1, wood2, type));
    this->removeWood(wood1.getId());
    this->removeWood(wood2.getId());
}

void Manager::sellWood(const Wood::Id &id, const Money &cost)
{
    this->money += cost;
    removeWood(id);
};
