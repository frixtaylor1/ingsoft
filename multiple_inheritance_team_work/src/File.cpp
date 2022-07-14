#include "../include/File.hpp"

File::File(std::string nodeName)
{
    m_nodeName = nodeName;
}
File::~File()
{

}
void File::list(int depth)
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