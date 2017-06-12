    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    main()
{
      initwindow(800,680,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,z2x,z2y,zdum,z;
      int k;
      for(int i=1;i<800;i++)
      {
      for(int j=1;j<680;j++)
      {
           cx=i*.005-2.0;
           cy=j*.005-1.7;
           z1x=cx;z1y=cy;
           z=sqrt(pow(z1x,2)+pow(z1y,2));
           for(k=1;k<100&&z<2;k++)
            {
                //Octal
                z2x=pow(z1x,8)-28*pow(z1x,6)*pow(z1y,2)+70*pow(z1x,4)*pow(z1y,4)-28*pow(z1x,2)*pow(z1y,6)+pow(z1y,8)-0.828;
                z2y=8*pow(z1x,7)*z1y-56*pow(z1x,5)*pow(z1y,3)+56*pow(z1x,3)*pow(z1y,5)-8*z1x*pow(z1y,7)-0.2015;
                //Julia
                //z2x=pow(z1x,2)-pow(z1y,2)-0.835;
                //z2y=2*z1x*z1y-0.212;
                z=sqrt(pow(z2x,2)+pow(z2y,2));
                z1x=z2x;
                z1y=z2y;
            }
            
           */if(k<99)
           {putpixel(i,j,COLOR(255-pow(k,3),255-pow(k,3),255-pow(k,3)));}
           else
           putpixel(i,j,COLOR(0,0,0));
           
      }
      }
 writeimagefile("Mandelbrot.jpeg",0,0,800,680);
     getch();
      
}
