#include "junebug.hpp"

std::shared_ptr<Robot> Junebug::CreateJunebug(const Configuration& configuration)
{
    return std::make_shared<Junebug>(configuration);
}

Junebug::Junebug(const Configuration& configuration) : Robot(configuration)
{
    this->name = "junebug";
    this->motor_count = 2;
    this->thrust_mapper = RTL::matrix_t  
    {
        {-1,  0,  0,  1,  0,  0},                   
        { 1,  0,  0,  1,  0,  0},
    };
}