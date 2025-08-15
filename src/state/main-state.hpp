#pragma once

#include <ql/ql.hpp>

struct MainApp
{
	ql_sync();

	void init()
	{
	}

	void update(ql::update_manager& update)
	{
	}

	void draw(ql::render& render) const
	{
	}
};

struct MainState : ql::base_state
{
	MainApp main;
	ql_sync_state(this->main);
};