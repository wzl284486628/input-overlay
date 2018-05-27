/**
 * Created by universallp on 23.05.2018.
 * This file is part of input-overlay which is licenced
 * under the MOZILLA PUBLIC LICENSE 2.0 - mozilla.org/en-US/MPL/2.0/
 * github.com/univrsal/input-overlay
 */

#pragma once

#include "util/SDL_helper.hpp"
#include "dialog/DialogSetup.hpp"
#include "Config.hpp"
#include <SDL.h>

class SDL_helper;

class Tool
{
public:
	Tool() { m_helper = nullptr; }
	Tool(SDL_helper * helper);
	~Tool();

	void program_loop();
private:
	void handle_input();
	bool m_run_flag = true;
	SDL_Event m_event;
	SDL_helper * m_helper;

	Overlay::Config * m_config = nullptr;

	DialogSetup * m_setup_dialog = nullptr;

};