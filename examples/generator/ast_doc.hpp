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

#ifndef AST_DOC_HPP
#define AST_DOC_HPP

#include <vector>

#include "document.hpp"

/**
 * @class ASTDoc
 * @brief
 */
class ASTDoc
{
public:
	/**
	 * @fn ASTDoc() noexcept
	 * @brief Default constructor.
	 * @throw noexcept
	 */
	ASTDoc() noexcept = default;

	/**
	 * @fn ASTDoc(const ASTDoc & copy)
	 * @param[in] copy The ASTDoc to copy from.
	 * @brief Default copy constructor.
	 * @throw
	 */
	ASTDoc(const ASTDoc & copy) = default;

	/**
	 * @fn ASTDoc(ASTDoc && move) noexcept
	 * @param[in] move The ASTDoc to move.
	 * @brief Default move constructor.
	 * @throw noexcept
	 */
	ASTDoc(ASTDoc && move) noexcept = default;

	/**
	 * @fn ~ASTDoc() noexcept
	 * @brief Default destructor.
	 * @throw noexcept
	 */
	~ASTDoc() noexcept = default;

	/**
	 * @fn ASTDoc & operator=(const ASTDoc & copy)
	 * @param[in] copy The ASTDoc to copy from.
	 * @return The ASTDoc copied.
	 * @brief Default copy assignment operator.
	 * @throw
	 */
	ASTDoc & operator=(const ASTDoc & copy) = default;

	/**
	 * @fn ASTDoc & operator=(ASTDoc && move) noexcept
	 * @param[in] move The ASTDoc to move.
	 * @return The ASTDoc moved.
	 * @brief Default move assignment operator.
	 * @throw noexcept
	 */
	ASTDoc & operator=(ASTDoc && move) noexcept = default;

	void loadFrom(const std::string & projectPath);

private:
	std::vector<Document> _documents;
};

#endif // AST_DOC_HPP