# OEMActivexApi

How to expose Activex API from a custom branded AutoCAD OEM Program

- Compile OEM activex wrapper i.e oemapp.zip.

- Stamp arx and tlb files against your OEM product

- Regsvr32 on stamped wrapper arx file and tlbimp on stamped tlb file i.e 
    for example:
  
  ```bash
  C:\Program Files\Autodesk\AutoCAD OEM 2017 - English\oem\XCAD>regsvr32 oempolyapp.arx
  C:\Program Files\Autodesk\AutoCAD OEM 2017 - English\oem\XCAD>tlbimp oempolyapp.tlb
  Microsoft (R) .NET Framework Type Library to Assembly Converter 4.6.1055.0
  Copyright (C) Microsoft Corporation.  All rights reserved.
  TlbImp : Type library imported to AsdkPoly2.dll
  ```
  
  - Open Test application(testApplication.zip), add asdkpoly2.dll as reference
  - Test at your end.



Important: In OemApp\AsdkPolyApp.rgs, put your OEM program, upon registering application sits correctly.
For example in below .rgs- XCAD is my OEM program

```
HKCR
{
    AsdkPolyApp.AsdkPolyApp.2 = s 'AsdkPolyApplication Class'
    {
        CLSID = s '{7E924F64-E07C-11D2-8677-080009A0C626}'
    }
    AsdkPolyApp.AsdkPolyApp = s 'AsdkPolyApplication Class'
    {
        CLSID = s '{7E924F64-E07C-11D2-8677-080009A0C626}'
        CurVer = s 'AsdkPolyApp.AsdkPolyApp.2'
    }
    NoRemove CLSID
    {
        ForceRemove {7E924F64-E07C-11D2-8677-080009A0C626} = s 'AsdkPolyApplication Class'
        {
            ProgID = s 'AsdkPolyApp.AsdkPolyApp.2'
            VersionIndependentProgID = s 'AsdkPolyApp.AsdkPolyApp'
            ForceRemove 'Programmable'
            ForceRemove LocalServer32 = s 'C:\Program Files\Autodesk\AutoCAD OEM 2017 - English\oem\XCAD\XCAD.exe /Automation'
            {
            }
            'TypeLib' = s '{7E924F51-E07C-11D2-8677-080009A0C626}'
        }
    }
}
```

### Demo



https://user-images.githubusercontent.com/6602398/200483128-afb445fd-9d97-44c8-84e1-86aeb591776e.mp4

 NOTE: while checking for IsQuiescent, application fails in demo video, this because my screencast has consumed OEM app.

### License

This sample is licensed under the terms of the [MIT License](http://opensource.org/licenses/MIT). Please see the [LICENSE](https://github.com/MadhukarMoogala/OEMActivexApi/blob/main/LICENSE) file for full details.

### Written By

Madhukar Moogala, [Forge Partner Development](http://forge.autodesk.com/) @galakar
