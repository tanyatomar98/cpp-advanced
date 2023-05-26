#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"


class Cylinder{
    private:
    double base_radius;
    double height;

    public:
    Cylinder() = default;
    Cylinder(double radius_param, double height_param);

    double volume();
    // getter
    double get_radius();
    double get_height();
    // setter
    void set_radius(double radius);
    void set_height(double height_param);

};



#endif
