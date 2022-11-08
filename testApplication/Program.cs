using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using AsdkPoly2;
using System.Runtime.InteropServices.ComTypes;
using System.Diagnostics;

namespace testApplication
{
    class Program
    {
     static void Main(string[] args)
        {

            var _application =  Marshal.GetActiveObject("AsdkPolyApp.AsdkPolyApp") as AsdkPolyApplication;

             if (_application != null)
             {
                string app = _application.Name;
                _application.Documents.Open("D:\\SampleDrawings\\Kitchens.dwg");
                var isQuescient = _application.GetAcadState().IsQuiescent;
                int handle =  _application.get_HWND();
                //For Testing
                _application.Application.ZoomAll();
             }
   


     }

        
    }
}

