#include "set_my_bundled_vertex.h"

#include "set_my_bundled_vertex_demo.impl"

#include <iostream>
#include <cassert>

#include "create_empty_undirected_bundled_vertices_graph.h"
#include "add_bundled_vertex.h"
#include "find_first_bundled_vertex_with_my_vertex.h"

void set_my_bundled_vertex_test() noexcept
{
  {
    auto g = create_empty_undirected_bundled_vertices_graph();
    const my_bundled_vertex old_name{"Dex"};
    add_bundled_vertex(old_name, g);
    const auto vd = find_first_bundled_vertex_with_my_vertex(old_name, g);
    assert(get_my_bundled_vertex(vd, g) == old_name);
    const my_bundled_vertex new_name{"Diggy"};
    set_my_bundled_vertex(new_name, vd, g);
    assert(get_my_bundled_vertex(vd, g) == new_name);
  }
  set_my_bundled_vertex_demo();
  
}