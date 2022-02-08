#ifndef classDrill
#define classDrill

#include "Tool.h"

class Drill : public Tool
{

public:
    using ConnectType = enum { vertical,
                               horizontal };
    bool set_condition(int c);
    int get_condition() const;
    int set_number_of_times_used();
    int get_number_of_times_used();
    Wood &connect(Wood &, Wood &, const ConnectType &);

    ~Drill();

private:
    int condition; //on and off key (0 for off, 1 for on)
    int number_of_times_used;
};

#endif
