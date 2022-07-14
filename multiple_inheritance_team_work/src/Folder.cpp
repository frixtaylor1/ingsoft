#include "../include/Folder.hpp"

Folder::Folder(std::string nodeName)
{
    m_nodeName = nodeName;
}

Folder::~Folder()
{

}

void Folder::list(int depth)
{
    std::string newStr(depth, '-');
    std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
    for(std::vector<IListable*>::const_iterator it = m_children.begin(); it != m_children.end(); ++it)
    {
        if(*it != 0)
        {
            (*it)->list(depth + 1);
        }
    }
}

void Folder::add(IListable* component)
{
    m_children.push_back(component);
}

void Folder::remove(IListable* component)
{
    m_children.erase(std::remove(m_children.begin(), m_children.end(), component), m_children.end());
}