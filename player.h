#pragma once

#include "./warehouse.h"

class player
{
public:
    player() = default;

    const std::vector<warehouse>& get_warehouses() const noexcept
    {
        return m_warehouses;
    }

    void add_warehouse(warehouse&& new_warehouse)
    {
        m_warehouses.push_back(std::move(new_warehouse));
    }

private:
    std::vector<warehouse> m_warehouses;
};