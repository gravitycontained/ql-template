#include <ql/ql.hpp>

#include "entry-point.hpp"

int main() try
{
	entry_point();
}
catch (const std::exception& any)
{
	ql::println("exception: ", any.what());
}