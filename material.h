#pragma once

#include <memory>

#include "./materal_type_base.h"

class material
{
public:
    // constructor of material object
    material(std::unique_ptr<material_type_base>&& type) : m_type{std::move(type)}
    {}

    // get type of the material
    const std::unique_ptr<material_type_base>& get_type() const noexcept
    {
        return m_type;
    }

private:
    std::unique_ptr<material_type_base> m_type;
};