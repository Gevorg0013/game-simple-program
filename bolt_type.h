#pragma once

#include "./materal_type_base.h"

class bolt_type : public material_type_base
{
public:
    bolt_type() = default;
    virtual ~bolt_type() = default;

    virtual std::string name() const noexcept
    {
        return "bolt_type";
    }

    virtual std::string description() const noexcept
    {
        return "decription of bolt type";
    }

    virtual std::string icon() const noexcept
    {
        return "icon of bolt type";
    }

    virtual size_t max_capacity() const noexcept
    {
        return 512;
    }
};