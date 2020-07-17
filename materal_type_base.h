#pragma once

#include <string>

// abstract class of material types
class material_type_base
{
public:
    material_type_base() = default;

    virtual ~material_type_base() = default;

    virtual std::string name() const noexcept = 0;

    virtual std::string description() const noexcept = 0;

    virtual std::string icon() const noexcept = 0;

    virtual size_t max_capacity() const noexcept = 0;
};