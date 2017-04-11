#pragma once
#include <iostream>
#include <algorithm>

/**
 isAnagram
 Arguments: Strings to compare

 Anagram is direct word switch which the result of rearranging
 the letters of a word is another new word build by all the 
 original letters
*/
bool isAnagram(std::string str1, std::string str2)
{
	// std::sort require <algorithm> //
	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());
	return str1 == str2;

}

/**
 isPalindrome
 Palindrome is a word, phrase or number which reads
 the same backward as forward.
*/
bool isPalindrome(std::string word) 
{

	for (int i = 0; i < word.length() / 2; i++)
	{
		if (word[i] != word[word.length() - 1 - i])
		{
			return false;
		}

	}
	return true;

}