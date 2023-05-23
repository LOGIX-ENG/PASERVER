#pragma once
#include <vector>


	/// <summary>
	/// Swaps the Endian of a value
	/// </summary>
	/// <param name="value"></param>
	/// <returns>Value</returns>
	int64_t SwapEndian(int64_t value) {};
	int32_t SwapEndian(int32_t value) {};
	int16_t SwapEndian(int16_t value) {};
	uint64_t SwapEndian(uint64_t value) {};
	uint32_t SwapEndian(uint32_t value) {};
	uint16_t SwapEndian(uint16_t value) {};
	float SwapEndian(float value) {};
	double SwapEndian(double value) {};

	/// <summary>
	/// Swaps the Bytes of a value
	/// </summary>
	/// <param name="value"></param>
	/// <returns>Value</returns>
	int64_t SwapBytes(int64_t value) {};
	int32_t SwapBytes(int32_t value) {};
	int16_t SwapBytes(int16_t value) {};
	uint64_t SwapBytes(uint64_t value) {};
	uint32_t SwapBytes(uint32_t value) {};
	uint16_t SwapBytes(uint16_t value) {};
	float SwapBytes(float value) {};
	double SwapBytes(double value) {};


	/// <summary>
	/// Swaps the words in a multi-word INT
	/// </summary>
	/// <param name="value"></param>
	/// <returns>Value</returns>
	int64_t SwapWords(int64_t value) {};
	int32_t SwapWords(int32_t value) {};
	uint64_t SwapWords(uint64_t value) {};
	uint32_t SwapWords(uint32_t value) {};
	float SwapWords(float value) {};
	double SwapWordw(double value) {};

	/// <summary>
	/// Checks the Endian of the PC
	/// </summary>
	/// <returns></returns>
	bool CheckEndian() {};

