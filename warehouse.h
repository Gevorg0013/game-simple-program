#pragma once

#include <vector>

#include "./material.h"

class warehouse
{
public:
    warehouse() = default;

    const std::vector<std::pair<material, size_t>>& get_materials()const noexcept
    {
        return m_material_to_quantity;
    }

    void add_material(std::pair<material, size_t>&& new_material)
    {
        if (new_material.first.get_type()->max_capacity() < new_material.second) {
            return;
        }

        m_material_to_quantity.push_back(std::move(new_material));
    }

private:
    std::vector<std::pair<material, size_t>> m_material_to_quantity;
};