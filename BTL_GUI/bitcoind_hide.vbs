Set objShell = CreateObject("Shell.Application")
objShell.ShellExecute "bitcoind", "/c lodctr.exe /r" , "runas", 0