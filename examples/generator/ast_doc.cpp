/*
				This file is part of MarkdownDocGenerator.
				Copyright(C) 2018 Pierre Casati (@IsilinBN)

				This program is free software : you can redistribute it and/or modify
				it under the terms of the GNU General Public License as published by
				the Free Software Foundation, either version 3 of the License, or
				(at your option) any later version.

				This program is distributed in the hope that it will be useful,
				but WITHOUT ANY WARRANTY; without even the implied warranty of
				MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
				GNU General Public License for more details.

				You should have received a copy of the GNU General Public License
				along with this program.If not, see <http://www.gnu.org/licenses/>.

*/

#include "ast_doc.hpp"

#include <filesystem>
#include <iostream>

void ASTDoc::loadFrom(const std::string & projectPath)
{
	// TODO: has to be completed.
	std::cout << std::filesystem::current_path() << std::endl;
	if (!std::filesystem::is_directory(std::filesystem::path(projectPath))) {
		throw std::runtime_error("Not a valid directory !");
	}

	for (auto & p : std::filesystem::directory_iterator(projectPath))
	{
		std::cout << p << std::endl;
	}
}