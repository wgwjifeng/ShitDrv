#ifndef _WIN64
_declspec (naked) void x86ShellCode()
{
	_asm {
			pushad
			//pushfd
			mov eax,0x11111111    //B8 4D 11 86 7C
			push 0x88888888       //68 FF FF FF 7F
			call eax            //FF D0
			//popfd
			popad
			// jmp ds:40404040, 绝对地址跳转
			_emit 0xEA
			_emit 0x40
			_emit 0x40
			_emit 0x40
			_emit 0x40
			_emit 0x1B //段选择子
			_emit 0x00


			//运行的路径 100个字节
			_emit 0x80
			_emit 0x80
			_emit 0x80
			_emit 0x80
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
			_emit 0x00
	}
}
#endif
void x86ShellCodeEnd(){}