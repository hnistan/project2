#ifndef BACKEND_HPP
#define BACKEND_HPP
#include <QObject>

class BackEnd : public QObject
{
    Q_OBJECT

public:
    //...

public slots:
    //void sellWood(...);
    //bool BuyWood(...);   //return false if don't have enough money
    //...

signals:
    //...
};

#endif // BACKEND_HPP
