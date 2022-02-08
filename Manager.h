#ifndef classManager
#define classManager

#include "Saw.h"
#include "Drill.h"
#include "Wood.h"

class BackEnd;

class Manager
{
    friend class BackEnd;

public:
    using Money = long int;

    Manager(std::vector<Wood>);

    void buyWood(const Wood &, const Money&);
    void removeWood(const Wood::Id &);
    Wood &getWood(const Wood::Id &);
    std::vector<Wood> &getWoods();

    void cut(Wood &, const Saw::CutType &);
    void connect(Wood &, Wood &, Drill::ConnectType); //suppose only one dimension differs
    void sellWood(const Wood::Id&, const Money&);

private:
    Money money = 0;
    std::vector<Wood> woods;
    Saw *saw = nullptr;
    Drill *drill = nullptr;
};
#endif
