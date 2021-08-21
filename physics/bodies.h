/* Simple Flight Copyright (C) 2019 Jyothiraditya Nellakra */

/* This program is free software: you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or */
/* (at your option) any later version. */

/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the */
/* GNU General Public License for more details. */

/* You should have received a copy of the GNU General Public License */
/* along with this program. If not, see <https://www.gnu.org/licenses/>. */

#ifndef PHYSICS_BODIES_HEADER
#define PHYSICS_BODIES_HEADER

/* External Resources */
#include <core/orientations.h>
#include <core/vectors.h>

/* Type Definitions */
typedef struct body_s {
	orientation_t orientation;
	vector_t position;

	orientation_t aileron_delta;
	orientation_t elevator_delta;
	orientation_t rudder_delta;

	double mass;

	vector_t drag;
	vector_t lift;
	vector_t thrust;
} body_t;

#endif