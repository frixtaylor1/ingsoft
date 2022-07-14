#ifndef ICOMPOSABLEOFLISTABLE_HPP
#define ICOMPOSABLEOFLISTABLE_HPP

class IComposableOfListable
{
public:
    virtual ~IComposableOfListable() {};
    virtual void add(IListable* component) = 0;
    virtual void remove(IListable* component) = 0;
};

#endif // ICOMPOSABLEOFLISTABLE_HPP