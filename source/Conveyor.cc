#include "Conveyor.h"

bool Conveyor::canHandleContainer(const Container &container)
{
    return  (container.getHeight() < m_maxHeight) && (container.getLength() < m_maxLength)&& (container.getWidth() < m_maxWidth);
}


void Conveyor::display()
{
    std::cout << "I'm a Conveyor : Max Width: " << m_maxWidth << " - Max Len: " << m_maxLength << " - Max Height " << m_maxHeight << std::endl;
}