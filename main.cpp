#include <iostream>

#include "./player.h"
#include "./iron_type.h"
#include "./copper_type.h"
#include "./bolt_type.h"

// declaration of some helper functions
void print_players_data(const std::vector<player> &players);
player get_player();

int main()
{
    std::vector<player> players;

    players.push_back(get_player());

    print_players_data(players);
    return 0;
}



void print_players_data(const std::vector<player> &players)
{
    for (const player &p : players)
    {
        std::cout << "Print wirehouses of person: " << std::endl;
        for (const warehouse &w : p.get_warehouses())
        {
            for (const std::pair<material, size_t> &material : w.get_materials())
            {
                std::cout << "Print wirehouse of wrehouse with quantity: " << material.second
                          << ", type - " << material.first.get_type()->name() << ", capacty-" << material.first.get_type()->max_capacity() << std::endl;
            }
            std::cout << "Wrehouse print ended" << std::endl;
        }
        std::cout << "Person's print ended" << std::endl;
    }
}

player get_player()
{
    player p1;

    warehouse w1;
    material m1{std::make_unique<iron_type>()};
    material m2{std::make_unique<copper_type>()};
    w1.add_material(std::make_pair(std::move(m1), 2));
    w1.add_material(std::make_pair(std::move(m2), 4));
    p1.add_warehouse(std::move(w1));

    warehouse w2;
    material m3{std::make_unique<iron_type>()};
    material m4{std::make_unique<bolt_type>()};
    w1.add_material(std::make_pair(std::move(m3), 1));
    w1.add_material(std::make_pair(std::move(m4), 8));
    p1.add_warehouse(std::move(w2));

    return p1;
}