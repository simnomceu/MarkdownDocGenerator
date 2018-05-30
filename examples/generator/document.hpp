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

#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

/**
	 * @class Document
	 * @brief
	 */
class Document
{
public:
	/**
	 * @fn constexpr Document() noexcept
	 * @brief Default constructor.
	 * @throw noexcept
	 */
	constexpr Document() noexcept = default;

	/**
	 * @fn Document(const Document & copy) noexcept
	 * @param[in] copy The Document to copy from.
	 * @brief Default copy constructor.
	 * @throw noexcept
	 */
	Document(const Document & copy) noexcept = default;

	/**
	 * @fn Document(Document && move) noexcept
	 * @param[in] move The Document to move.
	 * @brief Default move constructor.
	 * @throw noexcept
	 */
	Document(Document && move) noexcept = default;

	/**
	 * @fn ~Document() noexcept
	 * @brief Default destructor.
	 * @throw noexcept
	 */
	~Document() noexcept = default;

	/**
	 * @fn Document & operator=(const Document & copy) noexcept
	 * @param[in] copy The Document to copy from.
	 * @return The Document copied.
	 * @brief Default copy assignment operator.
	 * @throw noexcept
	 */
	Document & operator=(const Document & copy) noexcept = default;

	/**
	 * @fn Document & operator=(Document && move) noexcept
	 * @param[in] move The Document to move.
	 * @return The Document moved.
	 * @brief Default move assignment operator.
	 * @throw noexcept
	 */
	Document & operator=(Document && move) noexcept = default;
};

#endif // DOCUMENT_HPP