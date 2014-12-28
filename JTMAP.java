
public class JTmap {

	/**
	 * @param args
	 */
	public void init()
	{
			System.loadLibrary("PS3JTMAPIDLL"); //This is the library made from the C++ header -> JTMAPI.h
			System.out.println("Successfully Loaded Library!");
	}

	//http://www.dreamincode.net/forums/topic/287221-reading-uint32/
	public native void Connect();
	public native void Attach();
	public native void SetMemory(long Address, byte[] bytes, int SizeOfArray);
	public native byte[] GetMemory(long Address, int Length);
//	public native void WriteString(long Address, String Text);
	public native char ReadString(long Address);
	public native void WriteByte(long Address, byte Byte);
	public native byte ReadByte(long Address);
	public native void WriteBool(long Address, Boolean input);
	public native Boolean ReadBool(long Address);
	public native void WriteShort(long Address, Short input);
	public native short ReadShort(long Address);
	public native void WriteUShort(long Address, Short input);
	public native short ReadUShort(long Address);
	public native void WriteInt(long Address, Short input);
	public native void WriteUInt(long Address, Short input);
	public native short ReadInt(long Address);
	public native short ReadUInt(long Address);
	public native float WriteFloat(long Address, float input);
	public native float ReadFloat(long Address);
	public native double ReadDouble(long Address);
	public native Boolean cmpArray(Byte[] a, Byte[] b, short length);
	public native void WriteDouble(long Address, double input);
	private native void SetMem(long Address, byte[] bytes, int sizeOfArray);
	public void WriteString(long Address, String Text)
	{
		byte[] bytes = Text.getBytes();
		int sizeOfArray = Text.length();
		SetMemory(Address, bytes, sizeOfArray);
	}
}
