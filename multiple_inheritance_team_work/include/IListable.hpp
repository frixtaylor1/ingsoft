#ifndef ILISTABLE_HPP
#define ILISTABLE_HPP

class IListable
{
public:
    virtual ~IListable() {};
    virtual void list(int depth) = 0;    
};

#endif // ILISTABLE_HPP