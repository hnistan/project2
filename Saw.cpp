#include "Saw.h"

using namespace std;

int Saw ::set_number_of_times_used()
{
    number_of_times_used = 0;
    return number_of_times_used;
}

int Saw ::get_number_of_times_used()
{
    return number_of_times_used;
}

Wood &Saw::halve(Wood &wood, const CutType &cutType)
{
    if (cutType == verticalHalve)
        wood.set_length(wood.get_length() / 2);

    else if(cutType == horizontalHalve)
        wood.set_height(wood.get_height() / 2);

    Wood temp = Wood(wood.get_type(), wood.get_length(), wood.get_width(), wood.get_height());
    return temp;

}

Saw::~Saw(){}
