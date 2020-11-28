CXX = g++
CXXFLAGS = -std=c++11

# SRC = std_sort.cpp
# SRC = std_greater.cpp
# SRC = std_copy.cpp
# SRC = std_back_inserter.cpp
# SRC = std_accumulate.cpp
# SRC = std_for_each.cpp
# SRC = std_transform.cpp
# SRC = std_plus.cpp
# SRC = std_hex_oct_dec.cpp
# SRC = std_distance.cpp
# SRC = std_count.cpp
# SRC = std_stack.cpp
# SRC = std_set.cpp
# SRC = std_min_max_element.cpp
# SRC = std_reverse.cpp
# SRC = std_all_any_none_of.cpp
# SRC = std_swap.cpp
# SRC = std_rotate.cpp
# SRC = std_fill.cpp
# SRC = std_unique.cpp
# SRC = std_queue.cpp
# SRC = std_deque.cpp
# SRC = std_unique_ptr.cpp
# SRC = std_shared_ptr.cpp
# SRC = std_pair.cpp
# SRC = std_multimap.cpp
# SRC = std_multiset.cpp
# SRC = std_priority_queue.cpp
# SRC = std_binary_search.cpp
# SRC = std_lower_bound.cpp
# SRC = std_find.cpp
SRC = std_nth_element.cpp


OBJ = $(SRC:.cc=.o)
EXEC = std_app

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) $(CXXFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(EXEC)