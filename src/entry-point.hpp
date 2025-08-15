#pragma once

#include <ql/ql.hpp>
#include "state/main-state.hpp"

void entry_point()
{
	ql::state_manager state_manager;
	state_manager.set_title("ql");
	state_manager.set_antialiasing_level(12);
	state_manager.set_dimension({ 1400u, 950u });

	state_manager.add_state<MainState>();
	state_manager.game_loop();
}