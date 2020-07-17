#pragma once

#include "./materal_type_base.h"

class copper_type : public material_type_base
{
public:
    copper_type() = default;
    virtual ~copper_type() = default;

    virtual std::string name() const noexcept
    {
        return "copper_type";
    }

    virtual std::string description() const noexcept
    {
        return "decription of copper type";
    }

    virtual std::string icon() const noexcept
    {
        return "icon of copper type";
    }

    virtual size_t max_capacity() const noexcept
    {
        return 256;
    }
};