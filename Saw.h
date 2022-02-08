#ifndef classSaw
#define classSaw


#include "Tool.h"

class Saw : public Tool
{
public:
    using CutType = enum { horizontalHalve,
                           verticalHalve };

    Wood &halve(Wood &, const CutType &);
    int set_number_of_times_used();
    int get_number_of_times_used();
    ~Saw();

private:
    int number_of_times_used = 0;
};

#endif
