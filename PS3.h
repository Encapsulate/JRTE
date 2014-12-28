 //NOTE* Some of this code used was derived from my TMAPI C++ library that I made which can be found here:
 //Credits to Sony Entertainment Developers and Sony Entertainment in general.
 //Sony - TMAPI.lib and TMAPI.h for Target Manager API for C++ interactions with the PS3 Console.
 
  /*
  /$$$$$$                  /$$                 /$$       /$$$$$$$               
 /$$__  $$                | $$                | $$      | $$__  $$              
| $$  \__/  /$$$$$$   /$$$$$$$  /$$$$$$   /$$$$$$$      | $$  \ $$ /$$   /$$ /$$
| $$       /$$__  $$ /$$__  $$ /$$__  $$ /$$__  $$      | $$$$$$$ | $$  | $$|__/
| $$      | $$  \ $$| $$  | $$| $$$$$$$$| $$  | $$      | $$__  $$| $$  | $$    
| $$    $$| $$  | $$| $$  | $$| $$_____/| $$  | $$      | $$  \ $$| $$  | $$ /$$
|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$      | $$$$$$$/|  $$$$$$$|__/
 \______/  \______/  \_______/ \_______/ \_______/      |_______/  \____  $$    
                                                                   /$$  | $$    
                                                                  |  $$$$$$/    
                                                                   \______/     
     
          _____                    _____                    _____                    _____                    _____                    _____                                           _______                   _____          
         /\    \                  /\    \                  /\    \                  /\    \                  /\    \                  /\    \                 ______                  /::\    \                 /\    \         
        /::\    \                /::\    \                /::\    \                /::\    \                /::\____\                /::\    \               |::|   |                /::::\    \               /::\    \        
       /::::\    \              /::::\    \              /::::\    \              /::::\    \              /:::/    /               /::::\    \              |::|   |               /::::::\    \             /::::\    \       
      /::::::\    \            /::::::\    \            /::::::\    \            /::::::\    \            /:::/    /               /::::::\    \             |::|   |              /::::::::\    \           /::::::\    \      
     /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \          /:::/\:::\    \          /:::/    /               /:::/\:::\    \            |::|   |             /:::/~~\:::\    \         /:::/\:::\    \     
    /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \        /:::/__\:::\    \        /:::/____/               /:::/__\:::\    \           |::|   |            /:::/    \:::\    \       /:::/__\:::\    \    
   /::::\   \:::\    \      /::::\   \:::\    \       \:::\   \:::\    \       \:::\   \:::\    \      /::::\    \              /::::\   \:::\    \          |::|   |           /:::/    / \:::\    \     /::::\   \:::\    \   
  /::::::\   \:::\    \    /::::::\   \:::\    \    ___\:::\   \:::\    \    ___\:::\   \:::\    \    /::::::\    \   _____    /::::::\   \:::\    \         |::|   |          /:::/____/   \:::\____\   /::::::\   \:::\    \  
 /:::/\:::\   \:::\ ___\  /:::/\:::\   \:::\    \  /\   \:::\   \:::\    \  /\   \:::\   \:::\    \  /:::/\:::\    \ /\    \  /:::/\:::\   \:::\    \  ______|::|___|___ ____ |:::|    |     |:::|    | /:::/\:::\   \:::\____\ 
/:::/__\:::\   \:::|    |/:::/  \:::\   \:::\____\/::\   \:::\   \:::\____\/::\   \:::\   \:::\____\/:::/  \:::\    /::\____\/:::/  \:::\   \:::\____\|:::::::::::::::::|    ||:::|____|     |:::|    |/:::/  \:::\   \:::|    |
\:::\   \:::\  /:::|____|\::/    \:::\  /:::/    /\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /\::/    \:::\  /:::/    /\::/    \:::\  /:::/    /|:::::::::::::::::|____| \:::\    \   /:::/    / \::/   |::::\  /:::|____|
 \:::\   \:::\/:::/    /  \/____/ \:::\/:::/    /  \:::\   \:::\   \/____/  \:::\   \:::\   \/____/  \/____/ \:::\/:::/    /  \/____/ \:::\/:::/    /  ~~~~~~|::|~~~|~~~        \:::\    \ /:::/    /   \/____|:::::\/:::/    / 
  \:::\   \::::::/    /            \::::::/    /    \:::\   \:::\    \       \:::\   \:::\    \               \::::::/    /            \::::::/    /         |::|   |            \:::\    /:::/    /          |:::::::::/    /  
   \:::\   \::::/    /              \::::/    /      \:::\   \:::\____\       \:::\   \:::\____\               \::::/    /              \::::/    /          |::|   |             \:::\__/:::/    /           |::|\::::/    /   
    \:::\  /:::/    /               /:::/    /        \:::\  /:::/    /        \:::\  /:::/    /               /:::/    /               /:::/    /           |::|   |              \::::::::/    /            |::| \::/____/    
     \:::\/:::/    /               /:::/    /          \:::\/:::/    /          \:::\/:::/    /               /:::/    /               /:::/    /            |::|   |               \::::::/    /             |::|  ~|          
      \::::::/    /               /:::/    /            \::::::/    /            \::::::/    /               /:::/    /               /:::/    /             |::|   |                \::::/    /              |::|   |          
       \::::/    /               /:::/    /              \::::/    /              \::::/    /               /:::/    /               /:::/    /              |::|   |                 \::/____/               \::|   |          
        \::/____/                \::/    /                \::/    /                \::/    /                \::/    /                \::/    /               |::|___|                  ~~                      \:|   |          
         ~~                       \/____/                  \/____/                  \/____/                  \/____/                  \/____/                 ~~                                                \|___|                                                                                                                                                                                                                                    
 
                                                                                                                                                                                                   
                                                                                                                                                                                                   
     OOOOOOOOO                                                                       SSSSSSSSSSSSSSS                                                                                               
   OO:::::::::OO                                                                   SS:::::::::::::::S                                                                                              
 OO:::::::::::::OO                                                                S:::::SSSSSS::::::S                                                                                              
O:::::::OOO:::::::O                                                               S:::::S     SSSSSSS                                                                                              
O::::::O   O::::::Oppppp   ppppppppp       eeeeeeeeeeee    nnnn  nnnnnnnn         S:::::S               ooooooooooo   uuuuuu    uuuuuu rrrrr   rrrrrrrrr       cccccccccccccccc    eeeeeeeeeeee    
O:::::O     O:::::Op::::ppp:::::::::p    ee::::::::::::ee  n:::nn::::::::nn       S:::::S             oo:::::::::::oo u::::u    u::::u r::::rrr:::::::::r    cc:::::::::::::::c  ee::::::::::::ee  
O:::::O     O:::::Op:::::::::::::::::p  e::::::eeeee:::::een::::::::::::::nn       S::::SSSS         o:::::::::::::::ou::::u    u::::u r:::::::::::::::::r  c:::::::::::::::::c e::::::eeeee:::::ee
O:::::O     O:::::Opp::::::ppppp::::::pe::::::e     e:::::enn:::::::::::::::n       SS::::::SSSSS    o:::::ooooo:::::ou::::u    u::::u rr::::::rrrrr::::::rc:::::::cccccc:::::ce::::::e     e:::::e
O:::::O     O:::::O p:::::p     p:::::pe:::::::eeeee::::::e  n:::::nnnn:::::n         SSS::::::::SS  o::::o     o::::ou::::u    u::::u  r:::::r     r:::::rc::::::c     ccccccce:::::::eeeee::::::e
O:::::O     O:::::O p:::::p     p:::::pe:::::::::::::::::e   n::::n    n::::n            SSSSSS::::S o::::o     o::::ou::::u    u::::u  r:::::r     rrrrrrrc:::::c             e:::::::::::::::::e 
O:::::O     O:::::O p:::::p     p:::::pe::::::eeeeeeeeeee    n::::n    n::::n                 S:::::So::::o     o::::ou::::u    u::::u  r:::::r            c:::::c             e::::::eeeeeeeeeee  
O::::::O   O::::::O p:::::p    p::::::pe:::::::e             n::::n    n::::n                 S:::::So::::o     o::::ou:::::uuuu:::::u  r:::::r            c::::::c     ccccccce:::::::e           
O:::::::OOO:::::::O p:::::ppppp:::::::pe::::::::e            n::::n    n::::n     SSSSSSS     S:::::So:::::ooooo:::::ou:::::::::::::::uur:::::r            c:::::::cccccc:::::ce::::::::e          
 OO:::::::::::::OO  p::::::::::::::::p  e::::::::eeeeeeee    n::::n    n::::n     S::::::SSSSSS:::::So:::::::::::::::o u:::::::::::::::ur:::::r             c:::::::::::::::::c e::::::::eeeeeeee  
   OO:::::::::OO    p::::::::::::::pp    ee:::::::::::::e    n::::n    n::::n     S:::::::::::::::SS  oo:::::::::::oo   uu::::::::uu:::ur:::::r              cc:::::::::::::::c  ee:::::::::::::e  
     OOOOOOOOO      p::::::pppppppp        eeeeeeeeeeeeee    nnnnnn    nnnnnn      SSSSSSSSSSSSSSS      ooooooooooo       uuuuuuuu  uuuurrrrrrr                cccccccccccccccc    eeeeeeeeeeeeee  
                    p:::::p                                                                                                                                                                        
                    p:::::p                                                                                                                                                                        
                   p:::::::p                                                                                                                                                                       
                   p:::::::p                                                                                                                                                                       
                   p:::::::p                                                                                                                                                                       
                   ppppppppp                                                                                                                                                                       
                                                                                                                                                                                                   

Yb        dP 8           w      .d88b.                       w  w          dP"Yb 
 Yb  db  dP  8d8b. .d88 w8ww    YPwww. .d88b .d8b 8   8 8d8b w w8ww Yb  dP "  d8 
  YbdPYbdP   8P Y8 8  8  8          d8 8.dP' 8    8b d8 8P   8  8    YbdP    dP  
   YP  YP    8   8 `Y88  Y8P    `Y88P' `Y88P `Y8P `Y8P8 8    8  Y8P   dP     w   
                                                                     dP      x  
     */


#pragma once
#include "Stdafx.h"
#include <iostream>
#include <Windows.h>
#include <jni.h>
#include "C:\Program Files (x86)\SN Systems\PS3\sdk\include\ps3tmapi.h"
#include "JTmap.h"
#include <stdio.h>
#include "PS3.h"
#include <vector>

int target=0xfffffffe; //target default
unsigned int pid; //This is a decimal value of your ProcessID, Convert to HEX if to see (Thanks to Milky4444 for clearing that up)

	JNIEXPORT void JNICALL Java_JTmap_Connect(JNIEnv *Env, jobject obj)
	{
	SNPS3InitTargetComms();
	SNPS3Connect(0xfffffffe, NULL);
	std::cout<<"Connected Successfully!"<<std::endl;
	/*
	Credits to this swaggery fella: https://stackoverflow.com/questions/12528387/jni-unresolved-external-symbol-imp-jni-createjavavm-in-64-bit-compiler
	Without figuring that out I couldn't have gotten it working <3
	*/
	}

	JNIEXPORT void JNICALL Java_JTmap_Attach(JNIEnv *Env, jobject obj)
	{
				unsigned int pCount[32];
				SNPS3InitTargetComms();
				SNPS3ProcessList(target,pCount,&pid);
				SNPS3ProcessAttach(target,0,pid);
				SNPS3ProcessContinue(target,pid);
				std::cout<<"Attached Successfully!"<<std::endl;
	}

JNIEXPORT void JNICALL Java_JTmap_SetMemory(JNIEnv *env, jobject obj, jlong Address, jbyteArray bytes, jint sizeOfArray)
{
		jbyte* tempPointer = env->GetByteArrayElements(bytes, 0);
		const char* cinput = (const char*) tempPointer;
		size_t array_memsize = (BYTE)bytes * sizeof(BYTE);
//	std::cout<<"SetMemory at address: "<<Address<<" Bytes: "<<bytes<<std::endl;
		SNPS3InitTargetComms();
    SNPS3ProcessSetMemory(target, 0, pid, 0, Address, sizeOfArray, (byte*)tempPointer);
}


/*JNIEXPORT jbyteArray JNICALL Java_JTmap_GetMemory(JNIEnv *env, jobject obj, jlong Address, jint Length)
{
	jbyte* ret = new jbyte[Length];
	SNPS3InitTargetComms();
	SNPS3ProcessGetMemory(target, 0, pid, 0, Address, Length, (BYTE*)ret);
	jbyteArray retx = env->NewByteArray(Length);
	env->SetByteArrayRegion(retx, 0, Length, (jbyte*)ret);
	
	return(retx);
	//jbyteArray retArray = env->NewByteArray(Length);
	//jbyte* bytes = env->GetByteArrayElements(retArray, 0);
	//env->SetByteArrayRegion(retArray, 0, Length, ret );
	//return ret;
	/*std::cout<<"PS3 getmem: "<<SNPS3ProcessGetMemory(target, 0, pid, 0, Address, Length, (BYTE*)ret)<<"\n";
	jbyteArray retx = env->NewByteArray(Length);
	env->SetByteArrayRegion(retx, 0, Length, ret);
	std::cout<<"RET: "<<ret<<"\n";
	

	//jbyteArray array = env->NewByteArray(Length);
	//env->SetByteArrayRegion(array, 0, Length, ret);
	//env->SetByteArrayRegion(array, 0, Length, reinterpret_cast<jbyte*>(ret));
//	std::cout<<array;
	//return c;
//	return c;

}*/


JNIEXPORT void JNICALL Java_JTmap_WriteByte(JNIEnv *env, jobject obj, jlong Address, jbyte input)
{
	jbyte javbyte = input;
	const char* cinput = (const char*) javbyte;
	BYTE bytes[] = { input };
    SNPS3ProcessSetMemory(target, 0, pid, 0, Address, 1, bytes);
}


//const char* nativeString = env->GetStringUTFChars(notification, 0);
//https://stackoverflow.com/questions/25163928/passing-strings-from-java-to-c-using-jni
JNIEXPORT void JNICALL Java_JTmap_WriteString(JNIEnv *env, jobject obj, jlong jlon, jstring text)
{
	 char * nativeString;
{    const char * _nativeString = env->GetStringUTFChars(text, 0);
//     nativeString = strdup (_nativeString);
     env->ReleaseStringUTFChars(text, _nativeString);
}
//	std::cout<<jlon<<std::endl;
	//SNPS3ProcessSetMemory(target, 0, pid, 0, jlon, (BYTE*)textx.c_str(), + 1, bytes);
}


namespace PS3
{
	extern "C" _declspec(dllexport) void Connect1()
	{

	//			SNPS3InitTargetComms();
			//	ConnectProcess(target,NULL);
	}
	static class PS3TMAPI{
	public: void Connect()
			{
				SNPS3InitTargetComms();
				SNPS3Connect(target, NULL);
				//ConnectProcess(target,NULL);
	}
	public: void Attach()
			{
//				SNPS3InitTargetComms();
//				SNPS3Connect(target,NULL);
				unsigned int pCount[32];
				SNPS3InitTargetComms();
				SNPS3ProcessList(target,pCount,&pid);
				SNPS3ProcessAttach(target,0,pid);
				SNPS3ProcessContinue(target,pid);
			}
	public: void writestring(UINT32 Address, std::string text)
        {
			SNPS3InitTargetComms();
                SetMemory(Address, (BYTE*)text.c_str(), text.length() + 1);
				
        }
	public: static void SetMemory(UINT32 Address, BYTE *bytes, int sizeOfArray)
        {
				SNPS3InitTargetComms();
                SNPS3ProcessSetMemory(target, 0, pid, 0, Address, sizeOfArray, bytes);
        }
	public: BYTE* GetMemory(UINT32 Address, INT32 Length)
        {
                SNPS3InitTargetComms();
                BYTE* ret = new BYTE[Length];
                SNPS3ProcessGetMemory(target, 0, pid, 0, Address, Length, ret);
                return ret;
        }
	public: void writeByte(UINT32 Address, BYTE input)
        {
                BYTE bytes[] = { input };
                SetMemory(Address, bytes, 1);
        }
	public: void writeBool(UINT32 Address, bool input)
        {
                BYTE bytes[] = { input };
                bytes[0] = input ? (BYTE)1 : (BYTE)0;
                SetMemory(Address, bytes, 1);
        }
	public: BYTE readByte(UINT32 Address)
        {
                return (BYTE)GetMemory(Address, 1)[0];
        }
	public: char* ReadString(UINT32 Address)
        {
                int i = 0;
                while (PS3TMAPI::readByte(Address + i) != 0x00){ i++; }
                i++;//null terminate
                return (char*)PS3TMAPI::GetMemory(Address, i);
        }
	public: bool readBool(UINT32 Address)
        {
                return GetMemory(Address, 1)[0] != 0;
        }
	public: INT16 readShort(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 2);
                std::reverse(read, read + 2);
                return *(INT16*)read;
        }
	public: INT32 readInt(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 4);
                std::reverse(read, read + 4);
                return *(INT32*)read;
        }
	public: INT64 readInt64(UINT64 Address)
        {
                BYTE* read = GetMemory(Address, 8);
                std::reverse(read, read + 8);
                return *(INT64*)read;
        }
	public: UINT16 readUShort(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 2);
                std::reverse(read, read + 2);
                return *(UINT16*)read;
        }
	public: UINT32 readUInt(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 4);
                std::reverse(read, read + 4);
                return *(UINT32*)read;
        }
	public: UINT64 readUInt64(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 8);
                std::reverse(read, read + 8);
                return *(UINT64*)read;
        }
	public: FLOAT readFloat(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 4);
                std::reverse(read, read + 4);
                return *(FLOAT*)read;
        }
	public: DOUBLE readDouble(UINT32 Address)
        {
                BYTE* read = GetMemory(Address, 8);
                std::reverse(read, read + 8);
                return *(DOUBLE*)read;
        }
	public: bool cmpArray(BYTE* a, BYTE* b, INT32 ArrayLength)
        {
                INT32 CheckArray = 0;
                for (INT32 i = 0; i < ArrayLength; i++)
                        if (a[i] == b[i])
                                CheckArray++;
                return CheckArray == ArrayLength;
        }
	public: void writeShort(UINT32 Address, INT16 input)
        {
                BYTE bytes[2];
                *(INT16*)bytes = input;
                std::reverse(bytes, bytes + 2);
                SetMemory(Address, bytes, 2);
        }
	public: void writeInt(UINT32 Address, INT32 input)
        {
                BYTE bytes[4];
                *(INT32*)bytes = input;
                std::reverse(bytes, bytes + 4);
                SetMemory(Address, bytes, 4);
        }
	public: void writeInt64(UINT32 Address, INT64 input)
        {
                BYTE bytes[8];
                *(INT64*)bytes = input;
                std::reverse(bytes, bytes + 8);
                SetMemory(Address, bytes, 8);
        }
	public: void writeUShort(UINT32 Address, UINT16 input)
        {
                BYTE bytes[2];
                *(UINT16*)bytes = input;
                std::reverse(bytes, bytes + 2);
                SetMemory(Address, bytes, 2);
        }
	public: void writeUInt(UINT32 Address, UINT32 input)
        {
                BYTE bytes[4];
                *(UINT32*)bytes = input;
                std::reverse(bytes, bytes + 4);
                SetMemory(Address, bytes, 4);
        }
	public: void writeUInt64(UINT32 Address, UINT64 input)
        {
                BYTE bytes[8];
                *(UINT64*)bytes = input;
                std::reverse(bytes, bytes + 8);
                SetMemory(Address, bytes, 8);
        }
	public: void writeFloat(UINT32 Address, float input)
        {
                BYTE bytes[4];
                *(float*)bytes = input;
                std::reverse(bytes, bytes + 4);
                SetMemory(Address, bytes, 4);
        }
	public: void writeDouble(UINT32 Address, DOUBLE input)
        {
                BYTE bytes[8];
                *(DOUBLE*)bytes = input;
                std::reverse(bytes, bytes + 8);
                SetMemory(Address, bytes, 8);
        }
	};
	}
