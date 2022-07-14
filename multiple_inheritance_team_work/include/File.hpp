#ifndef FILE_HPP
#define FILE_HPP
#include "./IListable.hpp"
#include <vector>
#include <iostream>

class File : public IListable
{
private:
    std::string m_nodeName;
    std::vector<IListable*> m_children;
public:
    File(std::string nodeName);
    ~File();
    void list(int depth);
};

#endif // FILE_HPP