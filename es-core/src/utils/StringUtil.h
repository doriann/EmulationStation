#pragma once
#ifndef ES_CORE_UTILS_STRING_UTIL_H
#define ES_CORE_UTILS_STRING_UTIL_H

#include <string>
#include <vector>

namespace Utils
{
	namespace String
	{
		typedef std::vector<std::string> stringVector;

		unsigned int chars2Unicode      (const std::string& _string, size_t& _cursor);
		std::string  unicode2Chars      (const unsigned int _unicode);
		size_t       nextCursor         (const std::string& _string, const size_t _cursor);
		size_t       prevCursor         (const std::string& _string, const size_t _cursor);
		size_t       moveCursor         (const std::string& _string, const size_t _cursor, const int _amount);
		std::string  toUpper            (const std::string& _string);
		std::string  trim               (const std::string& _string);
		std::string  replace            (const std::string& _string, const std::string& _replace, const std::string& _with);
		bool         startsWith         (const std::string& _string, const std::string& _start);
		bool         endsWith           (const std::string& _string, const std::string& _end);
		std::string  removeParenthesis  (const std::string& _string);
		stringVector commaStringToVector(const std::string& _string);
		std::string  vectorToCommaString(stringVector _vector);

	} // String::

} // Utils::

#endif // ES_CORE_UTILS_STRING_UTIL_H
