#pragma once

unsigned int cvt_bin(std::wstring src, int& i);
unsigned int cvt_oct(std::wstring src, int& i);
unsigned int cvt_dec(std::wstring src, int& i);
unsigned int cvt_hex(std::wstring src, int& i);

std::wstring to_hex(int num);