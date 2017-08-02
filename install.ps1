$libraries="$env:USERPROFILE\Documents\Arduino\libraries"
cd "libraries"
$folders = get-childitem | where {$_.PSIsContainer}
foreach ($f in $folders)
{
	$f
	$strFolderName="$($libraries)\$($f.Name)"
	If (Test-Path $strFolderName){
		Remove-Item $strFolderName -Force -Recurse		
	}
	Copy-Item $f -Destination $libraries -Recurse -Container	
}
cd ..
