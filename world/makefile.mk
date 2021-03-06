# Simple Flight Copyright (C) 2019 Jyothiraditya Nellakra

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program. If not, see <https://www.gnu.org/licenses/>.

# Folders
build/world/: build/
	mkdir -p build/world/

# Files
$(worldobjects): build/world/%.o: world/%.c build/world/
	$(CC) $(CFLAGS) -c $< -o $@

build/world.o: build/ $(worldobjects)
	$(LD) $(LDFLAGS) -r $(worldobjects) -o build/world.o

# Commands
all-world: build/world.o

clean-world: build/world/
	rm -r build/world/
