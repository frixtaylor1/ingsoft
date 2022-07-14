#ifndef FOLDER_HPP
#define FOLDER_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "./IListable.hpp"
#include "./IComposableOfListable.hpp"

class Folder : public IListable, public IComposableOfListable
{
private:
    std::string m_nodeName;
    std::vector<IListable*> m_children;
public:
    Folder(std::string nodeName);
    ~Folder();
    void list(int depth);
    void add(IListable* component);
    void remove(IListable* component);
};

#endif // FOLDER_HPP