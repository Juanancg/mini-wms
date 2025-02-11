#include "Forklift.h"

bool Forklift::canHandleContainer(const Container &container)
{
    double container_vol = container.getHeight() * container.getLength() * container.getWidth();

    return  (container.getWeight() < m_maxWeight) && (container_vol < m_maxVolume);
}


void Forklift::display()
{
    std::cout << "I'm a Forklift : Max Weigth: " << m_maxWeight << " - Max Vol: " << m_maxVolume << std::endl;
}