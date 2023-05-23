#pragma once
#include <cstdint>
#include <cmath>

	//Signed Data Types
	using BOOL = int8_t;
	using BYTE = int8_t;
	using SINT = int8_t;
	using INT = int16_t;
	using DINT = int32_t;
	using LINT = int64_t;

	// Unsigned Data Types
	using USINT = uint8_t;
	using UINT = uint16_t;
	using UDINT = uint32_t;
	using ULINT = uint64_t;

	// Decimal Data Types
	using REAL = float_t;
	using LREAL = double_t;


	// Function Codes For Standard Modbus Read/Write
	enum FunctionCode
	{
		ReadDiscreteInputs = 0x02,
		ReadCoils = 0x01,
		WriteSingleCoil = 0x05,
		WriteMultipleCoils = 0xF,
		ReadInputRegisters = 0x04,
		ReadMultipleHoldingRegisters = 0x03,
		WriteSingleHoldingRegister = 0x06,
		WriteMultipleHoldingRegisters = 0x10
	};

	// Modbus Exception Code Offset
	// Used to calculate the Error Response
	const uint8_t ExceptionCodeOffsed = 128;

	// Constant for the Length Field of a Modbus Request Packet
	const int16_t LengthField = 6;

	// Constant for the Protocol ID. 
	// This Field is 0 for TCP.
	const int16_t ProtocolID = 0;


	// Data Ordering
	enum Data
	{
		ABCD,
		BADC,
		CDAB,
		DCBA
	};
