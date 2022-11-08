
oempolyappps.dll: dlldata.obj oempolyapp_p.obj oempolyapp_i.obj
	link /dll /out:oempolyappps.dll /def:oempolyappps.def /entry:DllMain dlldata.obj oempolyapp_p.obj oempolyapp_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del oempolyappps.dll
	@del oempolyappps.lib
	@del oempolyappps.exp
	@del dlldata.obj
	@del oempolyapp_p.obj
	@del oempolyapp_i.obj
