#pragma once
#include "InterfaceDef.h"
extern "C" void PatchAByte();
extern "C" void* PatchAnByte();
class EAC_Attach : public EAC_Interface    // Implement Interface functions.
{
public:
	bool FunctionUnamed1()
	{
		return false;
	}
	bool FunctionUnamed2()
	{
		return false;
	}
	bool FunctionUnamed3()
	{
		return false;
	}
	bool FunctionUnamed4()
	{
		return false;
	}
	bool FunctionUnamed5()
	{
		return false;
	}
	bool FunctionUnamed6()
	{
		return false;
	}
	bool FunctionUnamed7()
	{
		return false;
	}
	bool FunctionUnamed8()
	{
		return false;
	}
	bool FunctionUnamed9()
	{
		return false;
	}
	bool FunctionUnamed10()
	{
		return false;
	}
	bool FunctionUnamed11()
	{
		return false;
	}
	bool FunctionUnamed12()
	{
		return false;
	}
	bool FunctionUnamed13()
	{
		return false;
	}

	int FunctionUnamed14()
	{
		return 0;
	}
	void FunctionUnamed15()
	{
		return;
	}
	void FunctionUnamed16()
	{
		return;
	}

	bool FunctionUnamed17()
	{
		return false;
	}
	void FunctionUnamed18()
	{
		return;
	}
	void FunctionUnamed19()
	{
		return;
	}
	void FunctionUnamed20()
	{
		return;
	}
	void FunctionUnamed21()
	{
		return;
	}
	void FunctionUnamed22(void* buffer, int n)
	{
		PatchAByte();
	}
	bool FunctionUnamed23()
	{
		return true;
	}
	void FunctionUnamed24()
	{
		return;
	}
	bool FunctionUnamed25()
	{
		return true;
	}
	void FunctionUnamed26()
	{
		return;
	}
	int FunctionUnamed27()			// Return 0
	{
		return 0;
	}
	void FunctionUnamed28()
	{
		return;
	}
	void FunctionUnamed29()
	{
		return;
	}
	void FunctionUnamed30()
	{
		return;
	}
	bool FunctionUnamed31()
	{
		return true;
	}
	bool FunctionUnamed32()
	{
		return true;
	}
	void* FunctionUnamed33(void* data, int n)
	{
		return PatchAnByte();
	}
	void FunctionUnamed34()
	{
		return;
	}
	void FunctionUnamed35()
	{
		return;
	}
	bool FunctionUnamed36()
	{
		return false;
	}
	void FunctionUnamed37()
	{
		return;
	}
	void FunctionUnamed38()
	{
		return;
	}
	void FunctionUnamed39()
	{
		return;
	}
	void FunctionUnamed40()
	{
		return;
	}
	void FunctionUnamed41()
	{
		return;
	}
	void FunctionUnamed42()
	{
		return;
	}
	void FunctionUnamed43()
	{
		return;
	}
};