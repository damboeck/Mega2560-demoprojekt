# PlatformIO-Projekt lässt sich in der CLion nicht anlegen da die Liste der unterstützten Plattformen fehlt.
* Lösung: folgenden Befehl in der PowerShell ausführen:
  ```powershell
  Get-ChildItem "$env:USERPROFILE\.platformio\.cache\http" -File | ForEach-Object { $t=[IO.File]::ReadAllText($_.FullName); if($t -match '"frameworks"\s*:\s*null'){ [IO.File]::WriteAllText($_.FullName, ($t -replace '"frameworks"(\s*):(\s*)null','"frameworks"$1:$2[]'), (New-Object Text.UTF8Encoding $false)); "fixed: $($_.Name)" } }
  ```
  
