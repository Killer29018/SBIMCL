#include "Value.hpp"
#include "../SmartPointer.hpp"
#include "../Error.hpp"

void vInt::add(const SmartPointer& v2, SmartPointer& rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v + get_vInt(v2)); break;

    default:
        Error::operationError(op, "Add", type, v2->type);
    }
}

void vInt::subtract(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v - get_vInt(v2)); break;

    default:
        Error::operationError(op, "Subtract", type, v2->type);
    }
}

void vInt::multiply(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v * get_vInt(v2)); break;

    default:
        Error::operationError(op, "Multiply", type, v2->type);
    }
}

void vInt::divide(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v / get_vInt(v2)); break;

    default:
        Error::operationError(op, "Divide", type, v2->type);
    }
}

void vInt::mod(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v % get_vInt(v2)); break;

    default:
        Error::operationError(op, "Mod", type, v2->type);
    }
}

void vInt::equal(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v == get_vInt(v2)); break;
    case TYPE_BOOL:
        rV = makeSmartPointer<vBool>(v == get_vBool(v2)); break;

    default:
        Error::operationError(op, "Equal", type, v2->type);
    }
}

void vInt::notEqual(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v != get_vInt(v2)); break;
    case TYPE_BOOL:
        rV = makeSmartPointer<vBool>(v != get_vBool(v2)); break;

    default:
        Error::operationError(op, "Not Equal", type, v2->type);
    }
}

void vInt::greater(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v > get_vInt(v2)); break;

    default:
        Error::operationError(op, "Greater", type, v2->type);
    }
}

void vInt::less(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v < get_vInt(v2)); break;

    default:
        Error::operationError(op, "Less", type, v2->type);
    }
}

void vInt::greaterEqual(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v >= get_vInt(v2)); break;

    default:
        Error::operationError(op, "Greater Equal", type, v2->type);
    }
}

void vInt::lessEqual(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vBool>(v <= get_vInt(v2)); break;

    default:
        Error::operationError(op, "Less Equal", type, v2->type);
    }
}

void vInt::land(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v & get_vInt(v2)); break;

    default:
        Error::operationError(op, "Land", type, v2->type);
    }
}

void vInt::lor(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v | get_vInt(v2)); break;

    default:
        Error::operationError(op, "Lor", type, v2->type);
    }
}

void vInt::rShift(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v >> get_vInt(v2)); break;

    default:
        Error::operationError(op, "Right Shift", type, v2->type);
    }
}
void vInt::lShift(const SmartPointer &v2, SmartPointer &rV, const OpCode& op) const
{
    switch (v2->type)
    {
    case TYPE_INT:
        rV = makeSmartPointer<vInt>(v << get_vInt(v2)); break;

    default:
        Error::operationError(op, "Left Shift", type, v2->type);
    }
}

void vInt::lnot(SmartPointer& rV, const OpCode& op) const
{
    rV = makeSmartPointer<vInt>(~v);
}
