#pragma once
#include <vector>



	/// <summary>
	/// Converts Value to a Vector of Bytes.
	/// This is needed for Network Transport
	/// </summary>
	/// <param name="value"></param>
	/// <returns></returns>
	std::vector<uint8_t> ConvertToBytes(int64_t value) {};
	std::vector<uint8_t> ConvertToBytes(int32_t value) {};
	std::vector<uint8_t> ConvertToBytes(int16_t value) {};
	std::vector<uint8_t> ConvertToBytes(uint64_t value) {};
	std::vector<uint8_t> ConvertToBytes(uint32_t value) {};
	std::vector<uint8_t> ConvertToBytes(uint16_t value) {};

	/// <summary>
	/// Converts Vecotr of Bytes to a Value
	/// </summary>
	/// <param name="value"></param>
	/// <returns>Value</returns>
	int64_t ConvertToINT64(std::vector<uint8_t> value) {};
	int32_t ConvertToINT32(std::vector<uint8_t> value) {};
	int16_t ConvertToINT16(std::vector<uint8_t> value) {};
	uint64_t ConvertToUINT64(std::vector<uint8_t> value) {};
	uint32_t ConvertToUINT32(std::vector<uint8_t> value) {};
	uint16_t ConvertToUINT16(std::vector<uint8_t> value) {};
	float ConvertToFloat(std::vector<uint8_t> value) {};
	double ConvertToDouble(std::vector<uint8_t> value) {};
