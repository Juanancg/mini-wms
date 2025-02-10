#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <string>

class Container {
public:
    Container(const std::string& type, double width, double height, double length, double weight);
    virtual ~Container() {}

    std::string getType() const;
    double getWidth() const;
    double getHeight() const;
    double getLength() const;
    double getWeight() const;

    virtual void display() const;

protected:
    std::string type;
    double width, height, length;
    double weight;
};

#endif  // CONTAINER_H
