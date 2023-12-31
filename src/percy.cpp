#include "percy.hpp"

std::shared_ptr<Robot> Percy::CreatePercy(const Configuration& configuration)
{
    return std::make_shared<Percy>(configuration);
}

Percy::Percy(const Configuration& configuration) : Robot(configuration)
{
    this->name = "percy";
    this->motor_count = 8;
    this->thrust_mapper = RTL::matrix_t   
    {
        { 0, -1, -1,  0,  0,  1},
        {.9,  0,  0, .9, .9,  0},
        { 0,  1, -1,  0,  0,  1},
        {.9,  0,  0, .9,-.9,  0},
        { 0,  1,  1,  0,  0,  1},
        { 1,  0,  0, -1, -1,  0},
        { 0, -1,  1,  0,  0,  1},
        { 1,  0,  0, -1,  1,  0}
    };
}