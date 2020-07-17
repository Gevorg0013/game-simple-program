#pragma once

#include "./materal_type_base.h"

class iron_type : public material_type_base
{
public:
    iron_type() = default;
    virtual ~iron_type() = default;

    virtual std::string name() const noexcept
    {
        return "iron_type";
    }

    virtual std::string description() const noexcept
    {
        return "decription of iron type";
    }

    virtual std::string icon() const noexcept
    {
        return "icon of iron type";
    }

    virtual size_t max_capacity() const noexcept
    {
        return 128;
    }
};