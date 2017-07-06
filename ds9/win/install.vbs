'
' Copy to destination
'
'dim fso
'set fso = CreateObject("Scripting.FileSystemObject")
'fso.CopyFolder "..\WZSE0.TMP","c:\SAOImageDS9",True
'
' Create a ds9 shortcut on the Desktop
'
set WshShell = CreateObject("WScript.Shell")
strDesktop = WshShell.SpecialFolders("Desktop")
set oMyShortCut= WshShell.CreateShortcut(strDesktop+"\SAOImageDS9.lnk")
oMyShortCut.WindowStyle = 7
oMyShortCut.TargetPath = "c:\SAOImageDS9\ds9.exe" 
oMyShortCut.WorkingDirectory = "c:\SAOImageDS9" 
oMyShortCut.Save
